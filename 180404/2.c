#include <stdio.h>
int main()
{
	printf("당신의 점수를 입력하세요:");
	int n; scanf("%d", &n);
	switch(n/10){
		 case 0: case 1: case 2: case 3: case 4: case 5: printf("퇴부\n"); break;
		 case 6: printf("D\n"); break;
		 case 7: printf("C\n"); break;
		 case 8: printf("B\n"); break;
		 case 9: printf("A\n"); break;
		 case 10: printf("차기 부장감\n"); break;
		 default: printf("값을 다시 입력하세요\n"); //break 필요 없음
	}
	return 0;
}