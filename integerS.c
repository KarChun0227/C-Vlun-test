#include <stdio.h>

int main(void)
	{
           unsigned int val;
	   printf("type number: ");
	   scanf("%u", &val);
           printf("val = %u (%d)\n", val+1, val);
           return 0;
  	 }
