#include<stdio.h>
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int m = get_max(a, b);
	printf("%d\n", m);
	return 0;
}