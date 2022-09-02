#ifndef __gtt_h__
#error "please include <gtt.h> instead"
#endif

/* GTT DISPLAY typedef & pointer */
typedef struct {
	int initialized;
	int w;
	int h;
	int bpp;
	uint8_t *buffer;
	void *internal;
} GTT_DISPLAY, *GTT_DISPLAYP;

extern GTT_DISPLAYP gtt_display();