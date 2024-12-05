#ifndef CLC_WINDOW_H
#define CLC_WINDOW_H

#include <cstdint>
typedef struct CLC_Window {
	uint8_t	window_id;
	char title[128];
	int w;
	int h;
	uint32_t flags;
	
} CLC_Window;
CLC_Window CLC_create_window(); 
int CLC_destroy_window();
#endif
