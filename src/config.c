#include <gtt_internal.h>

static int _gtt_config;

int *gtt_getconfig(){
	return &_gtt_config;
}

void gtt_setconfig(int flags){
	
}