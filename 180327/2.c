#include<stdio.h>
int main(){
	int i=0, sc=0, s=0, j=9, jc=9;
	while (i<5){
		sc=s; while (sc<0){printf(" "); sc++;}
		jc=j; while (jc>0){printf("*");jc--;}
		printf("\n");
		s-=1; j-=2; i++;
	}
	i=0, sc=4, s=4, j=-1, jc=-1;
	while (i<5){
		sc=s; while (sc>0){printf(" "); sc--;}
		jc=j; while (jc<0){printf("*");jc++;}
		printf("\n");
		s-=1; j-=2; i++;
	}
}
