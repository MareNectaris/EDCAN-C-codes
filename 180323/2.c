#include <stdio.h>
int main()
{
	int i, j;
	for (i=0;i<=1000;i++){i!=0?(i%7==0?printf("%d\n",i):1):1;}
	while (j<=1000) {j!=0?(j%7==0?printf("%d\n",j):1):1; j++;}
	return 0;
}