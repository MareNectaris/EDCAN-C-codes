#include <stdio.h>
void hello(int cnt)
{
    if (cnt > 5) return;
    printf("Hello, world! %d번째 실행중\n", cnt);
    hello(cnt+1);
}

int main()
{
    hello(1);
    return 0;
}

