#include <stdio.h>
#include <stdint.h>


uint64_t Converter(uint64_t);

int main()
{
uint64_t value = 0;
printf("Enter a number\n");
scanf("%lx", &value);

printf("value=%lx\n",value);


printf("Converted value=%lx\n",Converter(value));


return 0;
}

uint64_t Converter(uint64_t num)
{
	uint64_t temp = 0;
	while (num)
    {
      temp <<= 8;
      temp |= (num & 0xff);
      num >>= 8;
    }
    return temp;
}
