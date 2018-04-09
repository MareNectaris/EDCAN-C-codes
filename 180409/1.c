#include <stdio.h>
int main()
{
	int i, j, k, n;
	scanf("%d", &n);
	for (i=0; i<n; i++){
		if (i%2==0){
		for (j=0; j<=i; j++){
			printf("*");
		}
		}
		else{
		for (j=n-i-1; j>0; j--){
			printf(" ");
		}
		for (j=0; j<=i; j++){
			printf("*");
		}
		}
		printf("\n");
	}
	return 0;
}