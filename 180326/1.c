#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b;
	for (a=2; a>=0; a--){
		for (b=0; b<=a; b++){
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	int i, j, k;
	for (i = 2; i>=0; i--){
		for (k = 2; k > i; k--){
			printf(" ");
		}
		for (j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
		}

	printf("\n\n");

	int z; scanf("%d", &z); z = z-2;
	int l, m, n;
	for (l = 1; l <= z; l++){
		for (n = 2; n >= l; n--){
			printf(" ");
		}
		for (m = 0; m < (l*2)-1; m++){
			printf("*");
		}
		printf("\n");
	}
	for (l = z; l >= 1; l--){
		for (n = 2; n >= l; n--){
			printf(" ");
		}
		for (m = 0; m < (l*2)-1; m++){
			printf("*");
		}
		printf("\n");
	}


	printf("\n\n");


	




}