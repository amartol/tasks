#include <stdio.h>
#include <stdint.h>
uint8_t res[]={26,65,234,31,25,25,25};


int main()
{
	for(uint8_t st=0; st < 7; st++)
		printf("st = %d, res =%d \n", st, res[st]);
		
	
	return 0;
}
