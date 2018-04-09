#include <stdio.h>
int main()
{
	int sel, num1, num2, total;
	printf("1. 더하기, 2. 빼기, 3. 곱하기, 4. 나누기");
	scanf("%d", &sel);
	printf("연산을 할 두 값 입력:");
	scanf("%d %d", &num1, &num2);
	if (sel == 1) total = num1 + num2;
	else if (sel == 2) total = num1 - num2;
	else if (sel == 3) total = num1 * num2;
	else if (sel == 4) total = num1 / num2;
	else {
		printf("선택이 잘못 되었습니다. 프로그램을 종료합니다.")
		return 0;
	}
	printf("연산을 수행한 두 값: %d", total);
	return 0;
}