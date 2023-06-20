#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h >
struct Book
{
	char name[20];
	int num;
}b1;

int main()
{
	struct Book b1 = { "冯嘉辉2023年6月20日",520 };
	/*printf("名字： %s\r\n", b1.name);
	printf("数字：%d\r\n", b1.num);*/
	struct Book *pb = &b1;
	printf("%s\r\n", pb->name);
	printf("%d\r\n", pb->num);
	strcpy (b1.name,"冯嘉辉2023年6月21日 " );
	printf("%s\r\n", pb->name);
	return 0;
}