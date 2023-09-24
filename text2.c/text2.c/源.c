#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("输入我是猪，则取消\n");
	scanf("%s", input);
	if (strcmp(input, "凯孙是猪") == 0)
	{
		system("shutdown -a");
		printf("取消\n");

	}
	else
	{
		goto again;

	}
	return 0;