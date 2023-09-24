#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main()
{
	int n, m;
	char a[100], b[100], * p, temp;
	scanf("%s%s", a, b);
	n = strlen(a);
	for (m = 1; m < n; m++)
	{
		p = a + n - 1;
		temp = *p;
		while (p > a)
		{
			*p = *(p - 1); p--;
		}
		*p = temp;
		for (int i = 0; i <= n - 1; i++)
		{
			if (b[i] == a[i])
				printf("1"); break;
		}
	}

	return 0;
}
