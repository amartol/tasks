#include <stdio.h>
#include <stdint.h>

int main()
{
	uint16_t p = 1;

	if(p >> 8) printf("BE"); 
	else printf("LE");

	return 0;
}
