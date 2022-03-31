//9.do while循环
#define _CRT_SECURE_NO_WARNINGS 1
//do while()循环
//do
//	循环语句；
//while(表达式)；
//先执行依次，在判断要不要循环
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=10);
	return 0;
}
//10.例子1
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		if(i==5)
			break;
		printf("%d ",i);
		i++;
	}
	while(i<=10);
	return 0;
}
*/
//11.continue的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		if(i==5)
			continue;//1234死循环；因为continue使得i==5时的后面程序跳过，继续执行循环，始终是判断i==5的情况
		printf("%d ",i);
		i++;
	}
	while(i<=10);
	return 0;
}*/
//12.