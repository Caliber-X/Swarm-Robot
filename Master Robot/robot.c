#include<reg52.h>
#include<stdio.h>
#include<robot.h>

unsigned int a;

void main()
{
	while(1)
	{
		a=P1&0x0f;
		
		if(a==0x0d)
			P0=st;
		if(a==0x01)
			P0=rev;
		if(a==0x05)
			P0=stop;
		if(a==0x07)
			P0=lt;
		if(a==0x04)
			P0=rt;
	}
}