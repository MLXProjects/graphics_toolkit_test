#include <gtt_internal.h>

int gtt_init(){
	if (!gtt_display_init()){
		printf("gtt_display_init failed\n");
		return 0;
	}
	if (!gtt_input_init()){
		printf("gtt_input_init failed\n");
		gtt_display_free();
		return 0;
	}
	printf("GTT init done\n");
	return 1;
}

void gtt_exit(){
	gtt_input_free();
	gtt_display_free();
	printf("GTT exit done\n");
}