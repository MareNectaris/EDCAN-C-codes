#include <stdio.h>
int main(int argc, char const *argv[])
{
	int j=1;
	do{j!=0?(j%7==0?printf("%d\n",j):1):1; j++;}while(j<=1000);
	return 0;
}