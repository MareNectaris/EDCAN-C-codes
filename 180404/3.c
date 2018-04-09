#include <stdio.h>
int main(){

int i, j, a=5, b;

for(i=0; i<5; i++){
	for(j=0; j<4; j++){
		b=i;
		a+=j;
		printf("%d", b);
	}
}
	

	return 0;
}