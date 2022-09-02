# What's this
GraphicsToolkitTest (GTT), an attempt to write a simple graphic toolkit in C to demonstrate how "easy" can it be.  

# Is this even finished?
No, just uploaded it to have a backup.  

# How does it work?
You can read info.txt to have some clues, but basically abstracts display/input by initializing specific "drivers" (which just fill up display/input structures).  
Then, you can draw directly to display framebuffer and get (or simulate) input events via a "message queue".  
Oh, and you can use some functions without initializing the library, such as:
* canvas create/free
* draw primitives either to canvases or custom buffers (via creating canvas adapters)
# TODO:
* Implement drivers & custom callbacks
* Implement message queue
* Create canvas adapter - something like GTT_CANVASP gtt_canvas_adapter(void *buffer, int w, int h, int px_size);
* Follow the info.txt for most to-do.
  
This has a lot of inspiration in how libaroma works.
