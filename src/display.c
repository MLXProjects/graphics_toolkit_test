#include <gtt_internal.h>

static GTT_DISPLAY _gtt_display={0};

GTT_DISPLAYP gtt_display(){
	return &_gtt_display;
}

int gtt_display_init(){
	/* call display init from defined driver or callback */
	if (gtt_display_
	#ifdef GTT_DRIVER
	
	#endif
	return 1;
}