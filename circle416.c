#include <graphics.h>  
int main() 
{ 
	
	int gd = DETECT, gm; 

	
	initgraph(&gd, &gm, ""); 


	circle(50, 60, 20); 

	getch(); 

	
	closegraph(); 

	return 0; 
} 

