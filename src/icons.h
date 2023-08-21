#include <gdk-pixbuf/gdk-pixbuf.h>

typedef struct icon {
    GdkColorspace colorspace;
    gboolean      has_alpha;
    int           bits_per_sample;
    int           width;
    int           height;
    int           rowstride;
    const guchar* data;
} icon;

static const guchar lzoom_data[] = {
    ""
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0IIIN444\243---\335))"
    ")\373&&&\373&&&\335&&&\243555N\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0]]]2...\300000\377sss\377\241\241\241\377\264\264\264\377\262\262"
    "\262\377\235\235\235\377ggg\377\40\40\40\377\34\34\34\3007772\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0@@@N'''\373aaa\377\264\264\264\377\312\312\312\377\317\317"
    "\317\377\320\320\320\377\316\316\316\377\311\311\311\377\301\301\301"
    "\377\247\247\247\377LLL\377\23\23\23\373###N\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377OOO2\"\"\"\373uu"
    "u\377\312\312\312\377\323\323\323\377\333\333\333\377\347\347\347\377"
    "\357\357\357\377\363\363\363\377\361\361\361\377\345\345\345\377\322"
    "\322\322\377\274\274\274\377^^^\377\20\20\20\373$$$2\0\0\0\0\0\0\0\377"
    "\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377!!!\300888\377"
    "\314\314\314\377\205\205\205\377\345\345\345\377\227\227\227\377\372"
    "\372\372\377\233\233\233\377\372\372\372\377\231\231\231\377\365\365"
    "\365\377\224\224\224\377\341\341\341\377xxx\377CCC\377\6\6\6\377\0\0"
    "\0\0\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "000N\37\37"
    "\37\377\271\271\271\377\326\326\326\377\347\347\347\377\371\371\371\377"
    "\373\373\373\377\375\375\375\377\375\375\375\377\374\374\374\377\373"
    "\373\373\377\370\370\370\377\362\362\362\377\354\354\354\377\344\344"
    "\344\377\253\253\253\377\16\16\16\377\22\22\22N\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\21\21\21\377mmm\377\322\322\322\377\341\341"
    "\341\377\365\365\365\377\372\372\372\377\375\375\375\377\376\376\376"
    "\377\376\376\376\377\375\375\375\377\374\374\374\377\371\371\371\377"
    "\365\365\365\377\356\356\356\377\346\346\346\377\333\333\333\377WWW\377"
    "\11\11\11\243\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\24\24"
    "\24\335\250\250\250\377\330\330\330\377\356\356\356\377\366\366\366\377"
    "\371\371\371\377\374\374\374\377\376\376\376\377\376\376\376\377\375"
    "\375\375\377\373\373\373\377\370\370\370\377\364\364\364\377\356\356"
    "\356\377\346\346\346\377\334\334\334\377\233\233\233\377\6\6\6\335\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\20\20\20\377\305\305\305"
    "\377\337\337\337\377\357\357\357\377\365\365\365\377\370\370\370\377"
    "\373\373\373\377\375\375\375\377\375\375\375\377\374\374\374\377\372"
    "\372\372\377\367\367\367\377\362\362\362\377\355\355\355\377\345\345"
    "\345\377\333\333\333\377\277\277\277\377\6\6\6\373\0\0\0\377\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\16\16\16\373\306\306\306\377\343\343"
    "\343\377\354\354\354\377\362\362\362\377\365\365\365\377\370\370\370"
    "\377\372\372\372\377\372\372\372\377\372\372\372\377\367\367\367\377"
    "\364\364\364\377\360\360\360\377\352\352\352\377\340\340\340\377\327"
    "\327\327\377\272\272\272\377\5\5\5\373\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\11\11\11\377\245\245\245\377\341\341\341\377\347\347"
    "\347\377\355\355\355\377\361\361\361\377\364\364\364\377\366\366\366"
    "\377\366\366\366\377\365\365\365\377\363\363\363\377\357\357\357\377"
    "\354\354\354\377\344\344\344\377\333\333\333\377\321\321\321\377\223"
    "\223\223\377\2\2\2\335\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\12\12\12\243___\377\331\331\331\377\341\341\341\377\346\346\346"
    "\377\353\353\353\377\356\356\356\377\357\357\357\377\357\357\357\377"
    "\356\356\356\377\355\355\355\377\351\351\351\377\344\344\344\377\333"
    "\333\333\377\324\324\324\377\312\312\312\377LLL\377\0\0\0\243\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\3\3\3\377\12\12\12\377\264\264"
    "\264\377\330\330\330\377\334\334\334\377\342\342\342\377\345\345\345"
    "\377\346\346\346\377\346\346\346\377\347\347\347\377\343\343\343\377"
    "\337\337\337\377\332\332\332\377\324\324\324\377\313\313\313\377\241"
    "\241\241\377\2\2\2\377\0\0\0N\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\37\6\6\6\300;;;\377\314\314\314\377\322\322\322\377"
    "\324\324\324\377\332\332\332\377\333\333\333\377\332\332\332\377\333"
    "\333\333\377\330\330\330\377\325\325\325\377\320\320\320\377\310\310"
    "\310\377\275\275\275\377...\377\0\0\0\300\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\5\5\5"
    "2\5\5\5\373QQQ\377\302"
    "\302\302\377\307\307\307\377\313\313\313\377\314\314\314\377\315\315"
    "\315\377\313\313\313\377\313\313\313\377\310\310\310\377\302\302\302"
    "\377\270\270\270\377EEE\377\0\0\0\373\0\0\0K\0\0\0\0\0\0\0\377\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\37\3\3\3N\3\3\3\373"
    "111\377\231\231\231\377\273\273\273\377\275\275\275\377\274\274\274\377"
    "\274\274\274\377\274\274\274\377\266\266\266\377\220\220\220\377+++\377"
    "\0\0\0\373\0\0\0\361\0\0\0\362\0\0\0g\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\0\0\0\0\37\0\0\0"
    "2\1\1\1\300\3\3\3"
    "\377AAA\377zzz\377\232\232\232\377\232\232\232\377www\377<<<\377\0\0"
    "\0\377\0\0\0\300\0\0\0"
    "2\0\0\0\337\0\0\0\360\0\0\0\363\0\0\0\377\0\0"
    "\0L\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\37\0\0\0N\0\0\0\243\0\0\0\335\0\0\0\373\0\0\0\373\0\0\0\335\0\0"
    "\0\243\0\0\0N\0\0\0:\0\0\0\37\0\0\0\37\40\40\40\363\40\40\40\364\0\0"
    "\0\366\0\0\0\361\0\0\0:\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\37\0\0\0\37\0\0\0\37\0\0\0\37\0\0"
    "\0\37\0\0\0\37\0\0\0\37\0\0\0\0\0\0\0\0\0\0\0\37\0\0\0\354hhh\373\0\0"
    "\0\377\0\0\0\362\0\0\0\366\0\0\0\37\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\37\0\0\0\363yyy\375"
    ":::\374\0\0\0\363\0\0\0\364\0\0\0\37\0\0\0\377\0\0\0\377\0\0\0\0\0\0"
    "\0\377\0\0\0\0\0\0\0\377\0\0\0\0\0\0\0\377\0\0\0\0\0\0\0\377\0\0\0\0"
    "\0\0\0\377\0\0\0\0\0\0\0\377\0\0\0\0\0\0\0\377\0\0\0\0\0\0\0\377\0\0"
    "\0\37\0\0\0\377\0\0\0\377\37\37\37\373\0\0\0\364\0\0\0\37\0\0\0\377\0"
    "\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\37\0\0\0\377\0\0\0\377\0\0\0\375\0\0\0\77\0\0\0\37\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\37\0\0\0\37\0\0\0\37\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static const icon lzoom = {
    .colorspace      = GDK_COLORSPACE_RGB,
    .has_alpha       = 1,
    .bits_per_sample = 8,
    .width           = 24,
    .height          = 24,
    .rowstride       = 96,
    .data            = lzoom_data,
};

/* -------------------  Measure tool icon  ------------------- */
/* GdkPixbuf RGBA C-Source image dump 1-byte-run-length-encoded */

/* screenruler-icon.png 24px from Debian package mate-icon-theme-faenza
   ver. 1.8.0-1~bpo70+.  This theme has been made by Rowen_Stipe based on
   Faenza and Faience icon themes by ~Tiheum. */

static const guchar ruler_data[] = {
    ""
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\0\0\0\7\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0"
    "\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0"
    "\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\15\0\0\0\7\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\311\277e`\356\343\205"
    "\337\363\350\215\377\363\351\217\377\363\351\222\377\363\351\225\377\364"
    "\352\227\377\364\352\231\377\364\353\233\377\364\353\235\377\365\354\237"
    "\377\365\354\240\377\365\354\241\377\365\355\244\377\365\355\246\377\366"
    "\355\250\377\366\356\252\377\366\356\254\377\362\352\243\346\322\312~"
    "k\377\377\377\0\377\377\377\0\377\377\377\0\0\0\0\11\352\335z\340\355"
    "\337_\377\357\342k\377\361\344z\377\360\344{\377\361\345\201\377\361\346"
    "\201\377\361\347\205\377\362\347\205\377\362\350\212\377\362\350\212\377"
    "\363\351\217\377\363\350\217\377\363\351\224\377\364\351\223\377\364\352"
    "\230\377\364\352\227\377\364\353\231\377\364\353\236\377\360\346\236\350"
    "\0\0\0\11\377\377\377\0\377\377\377\0\0\0\0\20\360\344{\377\352\333L\377"
    "\357\343u\377\214|\"\377\361\345\200\377\214|$\377\361\346\205\377\214"
    "|%\377\362\347\212\377\214}'\377\362\350\216\377\215}(\377\363\351\223"
    "\377\215})\377\364\352\227\377\215~*\377\363\352\231\377\215}*\377\363"
    "\352\231\377\365\355\244\377\0\0\0\20\377\377\377\0\377\377\377\0\0\0"
    "\0\21\357\342u\377\353\331L\377\360\343v\377\206u\34\377\361\345\202\377"
    "\206u\35\377\362\347\207\377\206v\36\377\362\350\214\377\206v\40\377\362"
    "\350\220\377\206v\40\377\363\351\225\377\206v\"\377\363\352\231\377\206"
    "v\"\377\364\352\232\377\206v\"\377\364\351\231\377\364\353\240\377\0\0"
    "\0\21\377\377\377\0\377\377\377\0\0\0\0\22\356\340m\377\352\330I\377\357"
    "\342u\377~m\26\377\361\345\201\377~m\27\377\361\345\206\377\177m\30\377"
    "\361\346\213\377\177n\31\377\362\347\217\377\177n\32\377\363\351\224\377"
    "\177n\32\377\363\351\230\377\177n\33\377\363\351\232\377\177n\33\377\363"
    "\351\226\377\363\352\232\377\0\0\0\22\377\377\377\0\377\377\377\0\0\0"
    "\0\24\355\337e\377\351\327E\377\356\341s\377xf\17\377\360\344~\377xg\20"
    "\377\361\345\204\377xg\21\377\361\346\210\377xg\21\377\361\346\215\377"
    "xg\22\377\362\350\221\377xg\22\377\363\351\225\377xg\23\377\362\351\230"
    "\377xg\23\377\362\351\224\377\362\350\225\377\0\0\0\24\377\377\377\0\377"
    "\377\377\0\0\0\0\25\352\334]\377\346\326@\377\355\340o\377p_\11\377\356"
    "\343{\377p_\11\377\357\344\201\377p_\12\377\357\345\205\377p_\12\377\360"
    "\346\211\377p_\12\377\361\346\215\377p_\13\377\361\350\222\377p_\13\377"
    "\362\350\225\377p_\13\377\361\350\221\377\360\346\216\377\0\0\0\25\377"
    "\377\377\0\377\377\377\0\0\0\0\26\351\332T\377\345\324:\377\355\337k\377"
    "jW\3\377\356\341x\377jW\3\377\356\343}\377jW\3\377\357\344\201\377jW\3"
    "\377\357\345\206\377jW\3\377\360\346\212\377jW\3\377\361\347\217\377j"
    "W\3\377\361\350\221\377jW\3\377\361\346\215\377\357\345\207\377\0\0\0"
    "\26\377\377\377\0\377\377\377\0\0\0\0\27\346\327J\377\344\3226\377\353"
    "\335h\377fT\0\377\355\341t\377\355\341x\377\355\341w\377\356\341}\377"
    "\356\342{\377\357\343\201\377\357\342\200\377\357\344\205\377\357\345"
    "\207\377fT\0\377\360\346\214\377\360\345\215\377\360\346\215\377\360\345"
    "\215\377\357\343\201\377\356\342\200\377\0\0\0\27\377\377\377\0\377\377"
    "\377\0\0\0\0\30\345\325@\377\343\3201\377\352\335d\377fT\0\377\354\340"
    "q\377\350\330Q\377\350\331T\377\351\332W\377\351\332Z\377\351\332\\\377"
    "\352\333`\377\352\334b\377\357\344\205\377fT\0\377\357\345\211\377\353"
    "\337n\377\354\337o\377\353\337l\377\353\336i\377\355\340y\377\0\0\0\30"
    "\377\377\377\0\377\377\377\0\0\0\0\32\344\3228\377\343\320-\377\352\334"
    "a\377fT\0\377\354\336n\377\347\327N\377\350\330Q\377\350\331T\377\351"
    "\331W\377\351\332X\377\351\331V\377\350\330R\377\354\337q\377fT\0\377"
    "\354\336o\377\347\326H\377\346\325C\377\345\3229\377\343\3200\377\345"
    "\324A\377\0\0\0\32\377\377\377\0\377\377\377\0\0\0\0\33\343\3200\377\342"
    "\316)\377\351\332]\377fT\0\377\353\335k\377\346\325I\377\346\325H\377"
    "\345\324D\377\345\324@\377\345\323<\377\345\323<\377\345\323<\377\351"
    "\331W\377\352\334c\377\351\331W\377\344\323;\377\344\3229\377\343\320"
    "0\377\342\316'\377\343\3200\377\0\0\0\33\377\377\377\0\377\377\377\0\0"
    "\0\0\34\341\315(\377\341\314#\377\351\331Z\377fT\0\377\351\333c\377\344"
    "\321:\377\344\321:\377\344\321:\377\344\321:\377\344\321:\377\344\321"
    ":\377\344\321:\377\344\321:\377\344\321:\377\344\321:\377\344\3219\377"
    "\343\3206\377\342\316.\377\341\314#\377\341\315(\377\0\0\0\34\377\377"
    "\377\0\377\377\377\0\0\0\0\35\337\313\37\377\337\313\37\377\346\327U\377"
    "fT\0\377\350\331]\377\342\3206\377\342\3206\377\342\3206\377\342\3206"
    "\377\342\3206\377\342\3206\377\342\3206\377\342\3206\377\342\3206\377"
    "\342\3206\377\342\3205\377\342\3172\377\340\315*\377\337\313\37\377\337"
    "\313\37\377\0\0\0\35\377\377\377\0\377\377\377\0\0\0\0\36\335\311\27\377"
    "\336\312\34\377\343\323E\377\347\330Y\377\345\326O\377\341\3174\377\341"
    "\3174\377\341\3174\377\341\3174\377\341\3174\377\341\3174\377\341\317"
    "4\377\341\3174\377\341\3174\377\341\3174\377\341\3173\377\341\3160\377"
    "\337\314'\377\336\312\34\377\335\311\27\377\0\0\0\36\377\377\377\0\377"
    "\377\377\0\0\0\0\40\333\307\20\377\335\311\30\377\336\313#\377\340\315"
    "+\377\340\316/\377\340\3160\377\340\3160\377\340\3160\377\340\3160\377"
    "\340\3160\377\340\3160\377\340\3160\377\340\3160\377\340\3160\377\340"
    "\3160\377\340\316/\377\340\315+\377\336\313#\377\335\311\30\377\333\307"
    "\20\377\0\0\0\40\377\377\377\0\377\377\377\0\0\0\0!\332\305\15\377\333"
    "\306\23\377\335\310\34\377\336\312%\377\337\313)\377\337\314+\377\337"
    "\314+\377\337\314+\377\337\314+\377\337\314+\377\337\314+\377\337\314"
    "+\377\337\314+\377\337\314+\377\337\314+\377\337\313)\377\336\312%\377"
    "\335\310\34\377\333\306\23\377\332\305\15\377\0\0\0!\377\377\377\0\377"
    "\377\377\0\0\0\0\"\332\303\12\377\333\304\16\377\334\306\25\377\335\307"
    "\32\377\335\310\36\377\336\311\40\377\336\311\40\377\336\311\40\377\336"
    "\311\40\377\336\311\40\377\336\311\40\377\336\311\40\377\336\311\40\377"
    "\336\311\40\377\336\311\40\377\335\310\36\377\335\307\32\377\334\306\25"
    "\377\333\304\16\377\332\303\12\377\0\0\0\"\377\377\377\0\377\377\377\0"
    "\0\0\0\40\272\247\10\353\331\303\12\377\332\303\13\377\332\304\16\377"
    "\333\305\20\377\333\305\21\377\333\305\22\377\333\305\22\377\333\305\22"
    "\377\333\305\22\377\333\305\22\377\333\305\22\377\333\305\22\377\333\305"
    "\22\377\333\305\21\377\333\305\20\377\332\304\16\377\332\303\13\377\331"
    "\303\12\377\272\247\10\353\0\0\0\40\377\377\377\0\377\377\377\0\0\0\0"
    "\10QH\2\242\274\251\20\355\334\307\35\377\334\311\"\377\335\312%\377\337"
    "\313)\377\337\313,\377\337\314/\377\340\3153\377\340\3166\377\340\316"
    "6\377\340\3153\377\337\314/\377\337\313,\377\337\313)\377\335\312%\377"
    "\334\311\"\377\334\307\35\377\274\251\20\355QH\2\242\0\0\0\10\377\377"
    "\377\0\377\377\377\0\377\377\377\0\0\0\0+\0\0\0{\0\0\0\243\0\0\0\245\0"
    "\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0"
    "\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\245\0\0\0\243\0"
    "\0\0{\0\0\0+\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0"
};

static const icon ruler = {
    .colorspace      = GDK_COLORSPACE_RGB,
    .has_alpha       = 1,
    .bits_per_sample = 8,
    .width           = 24,
    .height          = 24,
    .rowstride       = 96,
    .data            = ruler_data,
};

/* -------------------  Move tool icon  -------------------------- */
/* GdkPixbuf RGBA C-Source image dump */

static const guchar move_data[] = {
    ""
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\40J\207\31\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\40J\207\31\40J\207\377"
    "\40J\207\31\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\40J\207\31\40J\207\377r\237\317\377\40J\207\377\40"
    "J\207\31\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\40J\207\31\40J\207\377r\237\317\377L|\265\377r\237\317\377\40J\207\377"
    "\40J\207\31\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\40J\207"
    "\377r\237\317\377L|\265\377L|\265\377L|\265\377r\237\317\377\40J\207"
    "\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\40J\207\377"
    "\40J\207\377\40J\207\377S\203\272\377\40J\207\377\40J\207\377\40J\207"
    "\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\40J\207\377Y\210\276\377\40J\207\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\40J\207\31\40J\207\377\40J\207\377\0\0\0\0\0\0\0\0\0\0\0\0\40"
    "J\207\377b\221\304\377\40J\207\377\0\0\0\0\0\0\0\0\0\0\0\0\40J\207\377"
    "\40J\207\377\40J\207\31\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\40J\207\31\40J\207\377r\237\317\377\40J\207\377\0\0\0\0\0\0\0\0\0"
    "\0\0\0\40J\207\377r\237\317\377\40J\207\377\0\0\0\0\0\0\0\0\0\0\0\0\40"
    "J\207\377r\237\317\377\40J\207\377\40J\207\31\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\40J\207\31\40J\207\377r\237\317\377L|\265\377\40J\207\377\40"
    "J\207\377\40J\207\377\40J\207\377\40J\207\377r\237\317\377\40J\207\377"
    "\40J\207\377\40J\207\377\40J\207\377\40J\207\377L|\265\377r\237\317\377"
    "\40J\207\377\40J\207\31\0\0\0\0\0\0\0\0\40J\207\31\40J\207\377r\237\317"
    "\377L|\265\377L|\265\377S\203\272\377Y\210\276\377b\221\304\377r\237"
    "\317\377r\237\317\377r\237\317\377r\237\317\377r\237\317\377b\221\304"
    "\377Y\210\276\377S\203\272\377L|\265\377L|\265\377r\237\317\377\40J\207"
    "\377\40J\207\31\0\0\0\0\0\0\0\0\40J\207\31\40J\207\377r\237\317\377L"
    "|\265\377\40J\207\377\40J\207\377\40J\207\377\40J\207\377\40J\207\377"
    "r\237\317\377\40J\207\377\40J\207\377\40J\207\377\40J\207\377\40J\207"
    "\377L|\265\377r\237\317\377\40J\207\377\40J\207\31\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\40J\207\31\40J\207\377r\237\317\377\40J\207\377\0\0\0"
    "\0\0\0\0\0\0\0\0\0\40J\207\377r\237\317\377\40J\207\377\0\0\0\0\0\0\0"
    "\0\0\0\0\0\40J\207\377r\237\317\377\40J\207\377\40J\207\31\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\40J\207\31\40J\207\377\40J\207"
    "\377\0\0\0\0\0\0\0\1\0\0\0\1\40J\207\377b\221\304\377\40J\207\377\0\0"
    "\0\0\0\0\0\0\0\0\0\0\40J\207\377\40J\207\377\40J\207\31\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0\1\0\0\0\3\0"
    "\0\0\6\0\0\0\10\0\0\0\11\40J\207\377Y\210\276\377\40J\207\377\0\0\0\12"
    "\0\0\0\6\0\0\0\5\0\0\0\4\0\0\0\3\0\0\0\2\0\0\0\2\0\0\0\1\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\1\0\0\0\2\0\0\0\5\0\0\0\10\0\0\0\16\0\0\0\26\40J\207"
    "\377\40J\207\377\40J\207\377S\203\272\377\40J\207\377\40J\207\377\40"
    "J\207\377\0\0\0\26\0\0\0\20\0\0\0\14\0\0\0\11\0\0\0\6\0\0\0\3\0\0\0\1"
    "\0\0\0\0\0\0\0\0\0\0\0\3\0\0\0\7\0\0\0\16\0\0\0\25\0\0\0!\0\0\0-\40J"
    "\207\377r\237\317\377L|\265\377L|\265\377L|\265\377r\237\317\377\40J"
    "\207\377\0\0\0"
    "1\0\0\0%\0\0\0\32\0\0\0\22\0\0\0\12\0\0\0\5\0\0\0\1\0"
    "\0\0\0\0\0\0\1\0\0\0\4\0\0\0\13\0\0\0\25\0\0\0\37\0\0\0.\0\0\0:\11\25"
    "'V\40J\207\377r\237\317\377L|\265\377r\237\317\377\40J\207\377\10\24"
    "%[\0\0\0\77\0\0\0"
    "0\0\0\0\40\0\0\0\23\0\0\0\14\0\0\0\5\0\0\0\1\0\0\0"
    "\0\0\0\0\1\0\0\0\3\0\0\0\11\0\0\0\22\0\0\0\35\0\0\0+\0\0\0"
    "6\0\0\0\77"
    "\10\24%[\40J\207\377r\237\317\377\40J\207\377\10\23#^\0\0\0D\0\0\0"
    "9"
    "\0\0\0*\0\0\0\31\0\0\0\16\0\0\0\7\0\0\0\3\0\0\0\1\0\0\0\0\0\0\0\0\0\0"
    "\0\2\0\0\0\4\0\0\0\11\0\0\0\21\0\0\0\32\0\0\0!\0\0\0(\0\0\0"
    "1\12\30"
    ",L\40J\207\377\12\30+M\0\0\0"
    "4\0\0\0+\0\0\0!\0\0\0\25\0\0\0\14\0\0\0"
    "\5\0\0\0\2\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0\2\0"
    "\0\0\5\0\0\0\11\0\0\0\13\0\0\0\16\0\0\0\21\0\0\0\26\21(I.\0\0\0\25\0"
    "\0\0\22\0\0\0\15\0\0\0\12\0\0\0\7\0\0\0\3\0\0\0\1\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\2\0\0\0\2"
    "\0\0\0\2\0\0\0\2\0\0\0\3\0\0\0\3\0\0\0\2\0\0\0\2\0\0\0\1\0\0\0\1\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static const icon move = {
    .colorspace      = GDK_COLORSPACE_RGB,
    .has_alpha       = 1,
    .bits_per_sample = 8,
    .width           = 22,
    .height          = 22,
    .rowstride       = 88,
    .data            = move_data,
};

/* -------------------  Pointer tool icon  -------------------------- */
/* GdkPixbuf RGBA C-Source image dump */

static const guchar pointer_data[] = {
    ""
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\363\363\363"
    "\226\377\377\377(\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\377\364\364"
    "\364\354\377\377\377\37\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\376sss\374\364\364"
    "\364\345\377\377\377\27\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\376\376\376\376\1\1\1\377\204\204\204\372\363"
    "\363\363\333\377\377\377\20\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\376\376\376\375\2\2\2\377\0\0\0\377\225\225\225\370"
    "\362\362\362\321\377\377\377\13\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\375\375\375\375\3\3\3\377\0\0\0\377\1\1\1\377\245\245\245\366\362"
    "\362\362\303\377\377\377\6\377\377\377\0\377\377\377\0\377\377\377\0"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\375\375\375"
    "\374\4\4\4\377\0\0\0\377\0\0\0\377\3\3\3\377\264\264\264\365\362\362"
    "\362\265\377\377\377\3\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\374\374\374\374\5\5\5\377\0\0"
    "\0\377\0\0\0\377\0\0\0\377\6\6\6\377\302\302\302\364\363\363\363\245"
    "\377\377\377\1\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\374\374\374\374\6\6\6\377\0\0\0\377\0\0\0\377\0\0\0"
    "\377\0\0\0\377\13\13\13\377\316\316\316\364\365\365\365\224\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\374\374\374"
    "\373\7\7\7\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\20\20"
    "\20\377\331\331\331\364\365\365\365\202\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\373\373\373\373\10\10\10\377\0\0\0\377\0\0\0"
    "\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\26\26\26\377\343\343\343"
    "\364\370\370\370o\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\373\373\373"
    "\372\11\11\11\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0"
    "\0\0\377\0\0\0\377\36\36\36\377\352\352\352\364\374\374\374^\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\372\372\372\372\12\12\12\377\0\0\0\377\0\0\0\377"
    "\0\0\0\377\0\0\0\377\0\0\0\377\24\24\24\377\31\31\31\377\23\23\23\377"
    "444\377\362\362\362\366\377\377\377O\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\372\372\372\371"
    "\13\13\13\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\3\3\3\377\361\361"
    "\361\372\371\371\371\366\370\370\370\366\372\372\372\371\375\375\375"
    "\374\362\362\362\305\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\372\372\372\370\14\14\14\377\0\0\0"
    "\377:::\377nnn\370\0\0\0\377\0\0\0\377\224\224\224\370\362\362\362\243"
    "\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\371\371\371\370\15\15\15\377(((\377\360\360\360\366\371\371\371\371"
    "\20\20\20\377\0\0\0\377\16\16\16\377\356\356\356\365\377\377\3776\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\371\371\371\370"
    "'''\377\347\347\347\365\374\374\374_\356\356\356\276ZZZ\377\0\0\0\377"
    "\0\0\0\377ZZZ\376\362\362\362\326\377\377\377\2\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\371\371\371\367\337\337\337\366\365\365\365}\377"
    "\377\377\0\377\377\377a\262\262\262\363\0\0\0\377\0\0\0\377\0\0\0\377"
    "\311\311\311\362\375\375\375g\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\372\372\372\362\362\362\362\234\377\377\377\0\377\377\377\0\377\377"
    "\377\24\366\366\366\370\7\7\7\377\0\0\0\377\0\0\0\377...\377\367\367"
    "\367\363\377\377\377\17\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\24\377"
    "\377\377\2\377\377\377\0\377\377\377\0\377\377\377\0\355\355\355\320"
    "JJJ\377\11\11\11\377lll\376\351\351\351\364\356\356\356\305\377\377\377"
    "\6\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377"
    "\0\377\377\377\0\377\377\377\0\373\373\373s\324\324\324\372\360\360\360"
    "\366\356\356\356\270\377\377\3773\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377"
    "\377\0\377\377\377\0\377\377\377\24\366\366\366\207\377\377\377(\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377"
    "\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0\377\377\377\0"
};

static const icon pointer = {
    .colorspace      = GDK_COLORSPACE_RGB,
    .has_alpha       = 1,
    .bits_per_sample = 8,
    .width           = 24,
    .height          = 24,
    .rowstride       = 96,
    .data            = pointer_data,
};
