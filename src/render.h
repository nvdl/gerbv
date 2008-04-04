/*
 * gEDA - GNU Electronic Design Automation
 *
 * render.h -- this file is a part of gerbv.
 *
 * $Id$
 *
 *   Copyright (C) 2007 Stuart Brorson (SDB@cloud9.net)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA
 */

#include "gerber.h"

/* Keep redraw state when preempting to process certain events */
struct gerbv_redraw_state_t {
    int valid;			/* Set to nonzero when data is valid */
    int file_index;
    GdkPixmap *curr_pixmap;
    GdkPixmap *clipmask;
    int max_width;
    int max_height;
    int files_loaded;
};

typedef struct {
	gdouble scaleFactorX;
	gdouble scaleFactorY;
	gdouble lowerLeftX;
	gdouble lowerLeftY;
	gint renderType; /* 0 is default */
	gint displayWidth;
	gint displayHeight;
} gerbv_render_info_t;

typedef struct {
    double left;
    double right;
    double top;
    double bottom;
} gerbv_render_size_t;

gerb_stats_t *generate_gerber_analysis(void);
drill_stats_t *generate_drill_analysis(void);

#ifdef RENDER_USING_GDK
/* Nothing for now */
#else
	void render_recreate_composite_surface ();
  	void render_project_to_cairo_target (cairo_t *cr);
#endif

void
render_zoom_display (gint zoomType, gdouble scaleFactor, gdouble mouseX, gdouble mouseY);

void
render_calculate_zoom_from_outline(GtkWidget *widget, GdkEventButton *event);

void
render_draw_selection_box_outline(void);

void
render_draw_zoom_outline(gboolean centered);

void
render_draw_measure_distance(void);

void
render_get_boundingbox(gerbv_render_size_t *boundingbox);

void
render_zoom_to_fit_display (gerbv_render_info_t *renderInfo);

void
render_translate_to_fit_display (gerbv_render_info_t *renderInfo);

void render_refresh_rendered_image_on_screen (void);

#ifndef RENDER_USING_GDK
void render_fill_selection_buffer_from_mouse_click (gint mouseX, gint mouseY, gint activeFileIndex);
void
render_fill_selection_buffer_from_mouse_drag (gint corner1X, gint corner1Y,
	gint corner2X, gint corner2Y, gint activeFileIndex);
void render_layer_to_cairo_target (cairo_t *cr, gerbv_fileinfo_t *fileInfo,
						gerbv_render_info_t *renderInfo);
void  render_cairo_set_scale_translation(cairo_t *cr, gerbv_render_info_t *renderInfo);
void render_layer_to_cairo_target_noscale(cairo_t *cr, gerbv_fileinfo_t *fileInfo,gerbv_render_info_t *renderInfo);
void render_all_layers_to_cairo_target_for_vector_output (cairo_t *cr, gerbv_render_info_t *renderInfo);
void render_all_layers_to_cairo_target (cairo_t *cr, gerbv_render_info_t *renderInfo);

#endif
void render_to_pixmap_using_gdk (GdkPixmap *pixmap, gerbv_render_info_t *renderInfo);


