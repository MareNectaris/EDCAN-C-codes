#include <stdio.h>
#include <string.h>
int main()
{
	int a[100], i, j, n, tmp;
	scanf("%d", &n);
	for (i = 0; i<n; i++) scanf("%d", &a[i]);
	for (i = 0; i<n; i++) {
		for (j = 0; j<i; j++) {
			if (a[i]<a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i<n; i++) printf("%d ", a[i]);
	return 0;
}