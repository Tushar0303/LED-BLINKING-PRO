#include<reg51.h>
void delay(unsigned int count)
{	
	unsigned int i;
	while(count)
	{
	int i=115;
	while(i>0)
		i--;
	count--;
	}
}
void main()
{
	while(1)
	{
	 P2=0xAA;
	 delay(1000);
	 P2=0x55;
	 delay(1000);
	}
	
}