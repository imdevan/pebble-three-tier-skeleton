#include <pebble.h>
	
#include "Controller.h"
	
#include "FirstWindow.h"
#include "MenuWindow.h"
#include "SecondWindow.h"
	
int8_t curWindow = 0;

void switchWindow(uint8_t newWindow)
{
	switch(newWindow)
	{
	case 0:
		curWindow = 0;
		first_window_init();
		break;
	case 1:
		curWindow = 1;
		menu_window_init();
		break;
	case 2:
		curWindow = 2;
		second_window_init();
		break;
	}
}

int main(void) {
	
	switchWindow(0);

	app_event_loop();

	window_stack_pop_all(false);
	return 0;
}
