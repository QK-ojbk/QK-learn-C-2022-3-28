//5.for循环的嵌套使用
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		int j;
		for(j=0;j<10;j++)
		{
			printf("hehe ");
		}
	}
	return 0;
}
//6.for循环变种1
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//for循环的变种1
{
	int i=0;
	int j=0;
	for(;i<10;i++)
	{
		for(;j<10;j++)//第一次i=0,j=0，进入该循环，j依次等于0，1，2，3，4，5，6，7，8，9，10；j最后依次等于10，不满足j<10，跳出内层嵌套的循环
		{
			printf("hehe ");//当i=2是，继续执行内层循环，此时j=10,不满足j<10的判断条件，所以不打印，依次类推，最后只打印十个hehe
			//所以for()里面的表达式尽量不要省略
		}
	}
	return 0;
}*/
//7.例子1
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x,y;
	for(x=0,y=0;x<2&&y<5;++x,y++)
	{
		printf("hehe\n");
	}
	return 0;
}*/
//8.例子2
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	int k=0;
	for(i=0,k=0;k=0;i++,k++)//在判断语句中0赋值给k,则判断语句得出结论位“假”，语句不执行，所以执行0次
		k++;
	return 0;
}*/

