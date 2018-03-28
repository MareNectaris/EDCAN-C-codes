#include <stdio.h>
int main(int argc, char const *argv[]) // int면 return 있고, void는 return값이 없어도 됨
{
	int n;
	printf("수 입력:"); scanf("%d", &n);
	//if (n==0) printf("5의 배수가 아님");
	/*else*/printf("%s", n%5==0?"5의 배수임":"5의 배수가 아님");
}