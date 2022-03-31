//12.例题，计算n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//写一个“计算n的阶乘”的代码
{
	int i=1;
	int sum=1;
	int a=0;
	printf("请输入n的值，以便计算n的阶乘：n= ");
	scanf("%d",&a);//该“%d”前面不能加别的汉字或数字等内容5
	for(i=1;i<=a;i++)
	{
		sum=sum*i;
	}
	printf("n的阶乘=%d\n",sum);
	return 0;
}
//13.n的阶乘的求和
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//求出n!(n的阶乘)和1！+2！+3！+……n!
{
	int i=1;
	int sum=1;
	int a=0;
	int add=0;
	printf("请输入n的值，以便计算n的阶乘：n= ");
	scanf("%d",&a);//该“%d”前面不能加别的汉字或数字等内容5
	for(i=1;i<=a;i++)
	{
		sum=sum*i;//此处是n!
		add=add+sum;//此处是1！+2！+3！+……n!
	}
	printf("n的阶乘=%d\n",sum);
	printf("n的阶乘求和=%d\n",add);
	return 0;
}*/
//14.使用for循环嵌套
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//写一个1!+2!+3!+……n!的求和程序,要求用两个for语句，即嵌套
{
	int i=1;
	int j=1;
	int sum=1;
	int a=0;
	int add=0;
	printf("请输入n的值，以便计算n的阶乘：n= ");
	scanf("%d",&a);//该“%d”前面不能加别的汉字或数字等内容
	for(i=1;i<=a;i++)
	{
		sum=1;//此处必须再定义sum=1;分析如下：该循环中，当i=1时，第二个的for循环执行1次；当i=2时，第二个for循环执行2次；当i=3时,第二个for循环执行3次
		for(j=1;j<=i;j++)//以此依次得到1！、2！、3！、4！……,然后再将其累加
		{
			sum=sum*j;
		}
		add=add+sum;
	}
	printf("n的阶乘=%d\n",sum);
	printf("n的阶乘求和=%d\n",add);
	return 0;
}
//若没有for循环里面的sum的重置为1；则会出现下面情况：
//正常思路是sum=
//1*1
//1*1*2
//1*1*2*3
//……
//但是不加上重置，每一次i的大循环中产生的sum的最后的值会被当为sum初值的初值，带入下一次的循环计算中
//即，第一次循环结束后的sum=1带入第二次循环中，第二次循环中sum的初值为1
//第二次循环结束后的sum=2带入第三次循环中，第三次循环中sum的初值为2
//（究其原因，就是在进入大循环后，只要i<=a，不走出循环，sum的值由原先在大循环外定义为1被使用一次后，其他时候都受内部小循环影响，被改变）
//依次类推，则思路变为：1*1、1*1*2、2*1*2*3；即变成1！+(1!*2!)+(2!*3!)+(3!+4!)……*/