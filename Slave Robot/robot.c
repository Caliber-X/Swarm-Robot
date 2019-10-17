#include<reg52.h>
#include<stdio.h>
#include<robot.h>

unsigned int a;

void main()
{
	while(1)
	{
		a=P0&0x0f;
		P2=a;
	}
}