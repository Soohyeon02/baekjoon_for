#include <stdio.h>
int main(void)
{
	int n, x, a = 0;
	scanf_s("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		if (a < x)
			printf("%d ", a);
	}
}