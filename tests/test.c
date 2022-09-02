#include <stdio.h>
#include <stdlib.h>
#include <gtt.h>

int main(int argc, char **argv){
	//gtt_setconfig(GTT_DISPLAY_32BPP|GTT_NOINPUT);
	if (!gtt_init()){
		printf("Failed to init gtt\n");
		return 0;
	}
	if (!gtt_canvas_fill(gtt_display()->canvas, gtt_color_rgb(FF0000))){
		printf("Failed to fill canvas\n");
	}
	gtt_exit();
	return 1;
}