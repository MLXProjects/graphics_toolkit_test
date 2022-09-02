#ifndef __gtt_h__
#error "please include <gtt.h> instead"
#endif

/* GTT INPUT typedef & pointer */
typedef struct {
	int initialized;
	void (*get)(int,int);
	void *internal;
} GTT_INPUT, *GTT_INPUTP;

extern GTT_INPUTP gtt_input();