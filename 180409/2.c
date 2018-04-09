#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	printf("*\n *\n");
	for (i=0; i<n-2; i++){
		for (j=0; j<i; j++){
			printf(" ");
		}
		printf("* *");
		printf(" ");
		printf("\n");
	}
	for (i=n-2; i>=0; i--){
		for (j=0; j<i; j++){
			printf(" ");
		}
		printf("* *");
		printf(" ");
		printf("\n");
	}
	printf(" *\n*");
	
	return 0;
}