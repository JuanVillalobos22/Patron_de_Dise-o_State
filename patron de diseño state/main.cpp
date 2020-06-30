#include"TLNetTraffic.h"
#include<time.h>
#include<iostream>
void sleep( clock_t wait )
{
   clock_t goal;
   goal = wait + clock();
   while( goal > clock() );
}


int main (int argc, char* argv[])
{
	TLNetTraffic netTraffic;

	int count = 0, i=0;
	int seconds;

	while(1)
	{
	   if (i%3==0) 
		  printf("---------\nSession %d\n---------\n", ((i+1)/3)+1 );
		   
	   if (count == 0) seconds =6, count = 1;
		   else if (count == 1) seconds = 4, count = 2;
			   else if (count == 2) seconds = 5, count = 0;

	   sleep( (clock_t)seconds * CLOCKS_PER_SEC );
	   netTraffic.Handle();
	   i++;
	}
	return 0;
}
