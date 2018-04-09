#include <stdio.h>
int main()
{
	int i=1, cnt=0;
	for (i=1;i<=240;i++){
		if (240%i==0){
			cnt++;
			printf("%d\n", i);
		}
	}
	printf("\nTOTAL %d", cnt);
	return 0;
}