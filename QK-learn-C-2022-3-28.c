//1.for循环
#define _CRT_SECURE_NO_WARNINGS 1
//for循环
//for(表达式1；表达式2；表达式3)
//	循环语句；
//表达式1是初始化部分，用于初始化循环变量的；表达式2位条件判断部分，用于判断循环时候的终止；表达式3位调整部分，用于循环条件的调整
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
//2.break的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i+=2)
	{
		if(i==5)
			break;//跳出循环
		printf("%d\n",i);
	}
	return 0;
}*/

//3.continue的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i+=2)
	{
		if(i==5)
			continue;//跳出i==5时的后续循环，直接执行下一次循环
		printf("%d\n",i);
	}
	return 0;
}*/
//4.for循环的前闭后开循环
/*#define _CRT_SECURE_NO_WARNINGS 1
//1、不可在for循环体内修改循环变量，防止for循环失去控制
//2、建议for语句的循环控制变量的取值采用“签闭后开区间”写法
//前闭后开的写法
//for(i)
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	for(i=0;i<10;i++)//此处“i=0；i<10”属于前闭后开，即前区间是闭合，后区间是开放的；若改为“i=0;i<=9”,则为前后均闭合
	{
		printf("%d",arr[i]);
	}
	return 0;
}
//1、for循环的初始化、判断和调整均可以省略，但是“
//for循环的判断如果被省略，则判断条件就是：恒为真
*/


