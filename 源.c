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
	struct Book b1 = { "��λ�2023��6��20��",520 };
	/*printf("���֣� %s\r\n", b1.name);
	printf("���֣�%d\r\n", b1.num);*/
	struct Book *pb = &b1;
	printf("%s\r\n", pb->name);
	printf("%d\r\n", pb->num);
	strcpy (b1.name,"��λ�2023��6��21�� " );
	printf("%s\r\n", pb->name);
	return 0;
}