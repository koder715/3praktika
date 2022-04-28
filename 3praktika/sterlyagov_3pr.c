#include <8051.h>
#include <string.h>

void main()
{
	unsigned int i;
	unsigned char *str="121111";
	unsigned char *str2="1211111";
	P0 = 0x38;
	P0 = 0xC7;
	P2 = 0x1;
	P2 = 0x0;

		for (i = 0; i < 6; i++)
   {		
				P0 = str[i];
				P2 = 0x3;
				P2 = 0x2;
   }
  	P2 = 0x1;
	P2 = 0x0;


}	
	

