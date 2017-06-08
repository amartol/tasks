#include <stdio.h>
#include <stdint.h>

char* Hex2str(uint32_t* arr, uint32_t size, char* out)
{
	uint8_t symbol_count = 2*sizeof(*arr);
			
	for(uint32_t i=0; i < size; i++)
	{
		for(int8_t j = symbol_count-1, k = 0; j >= 0 ; j--, k++)
		{
			uint32_t temp = 0;
			temp = *(arr+i) >> (4*j);
			temp &= 0xf;
			if(temp < 0xa)
			{
				*(out+i*symbol_count+k)= '0' + temp; 	  //numbers
			}
			else
			{
				*(out+i*symbol_count+k)= 'a' + (temp - 0xa); //letters
			}
			
		}
	}
	out[size*symbol_count]='\0';
	return out;
}


int main()
{
	char output[100];
	uint32_t input[] = {0x1a,0x2b,0x3c,0x4d,0x5e,0x6f,0xa1};
	printf("%s\n", Hex2str(input, sizeof(input)/sizeof(*input), output));
	return 0;
}

