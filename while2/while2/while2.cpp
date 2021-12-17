#include<stdio.h>
int main() {
	int a;
	while (scanf_s("%d\n", &a))
	{
		if (a >= 140)
		{
			printf("good\n");
		}
	}
	return 0;
}