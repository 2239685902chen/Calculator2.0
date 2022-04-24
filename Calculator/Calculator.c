#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Calculator.h"
void Print1()
{
	printf("1.整数运算\n");
	printf("2.小数运算\n");
	printf("0.退出程序\n");
}
void Print2()
{
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.乘法\n");
	printf("4.除法\n");
	printf("5.返回上一步\n");
	printf("0.退出程序\n");
	printf("请选择：");
}
int Addition(int x,int y)
{
	return x + y;
}
int Subtraction(int x,int y)
{
	return x - y;
}
int Multiplication(int x,int y)
{
	return x * y;
}
int Division(int x, int y)
{
	return x / y;
}
int Integer(int r)
{
	system("cls");	
	Print2();
	int q = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int t = 0;
	int o = 0;
	int i = 0;
	scanf("%d", &q);
	while (q)
	{
		if (i != 0)
		{
			Print2();
			scanf("%d", &q);
		}
		system("cls");
		i++;
		if (q < 5 && q != 0)
		{
			scanf("%d%d", &x, &y);
		}
		switch (q)
		{
		case 1:
			t=Addition(x,y);
			printf("结果为%d\n", t);
			break;
		case 2:
			t=Subtraction(x,y);
			printf("结果为%d\n", t);
			break;
		case 3:
			t=Multiplication(x,y);
			printf("结果为%d\n", t);
			break;
		case 4:
			t=Division(x,y);
			printf("结果为%d\n", t);
			break;
		case 5:
			o=Choice(w);
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			o=Integer(r);
			break;
		}
		if (o != 0 || q == 0)
		{
			break;
		}
	}
	if (o == 0)
	{
		printf("退出程序\n");
	}
	r++;
	return r;
}
float Addition1(float x, float y)
{
	return x + y;
}
float Subtraction1(float x, float y)
{
	return x - y;
}
float Multiplication1(float x, float y)
{
	return x * y;
}
float Division1(float x, float y)
{
	return x / y;
}
int Decimal(int r)
{
	system("cls");
	Print2();
	int q = 0;
	int w = 0;
	int o = 0;
	float x = 0;
	float y = 0;
	float t = 0;
	int e = 0;
	scanf("%d", &q);
	while (q)
	{
		if (e != 0)
		{
			Print2();
			scanf("%d", &q);
		}
		e++;
		system("cls");
		if (q < 5 && q != 0)
		{
			scanf("%f%f", &x, &y);
		}
		switch (q)
		{
		case 1:
			t=Addition1(x, y);
			printf("结果为%f\n", t);
			break;
		case 2:
			t = Subtraction1(x, y);
			printf("结果为%f\n", t);
			break;
		case 3:
			t = Multiplication1(x, y);
			printf("结果为%f\n", t);
			break;
		case 4:
			t = Division1(x, y);
			printf("结果为%f\n", t);
			break;
		case 5:
			o = Choice(w);
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			o=Decimal(r);
			break;
		}
		if (o != 0 || q == 0)
		{
			break;
		}
	}
	if (o == 0)
	{
		printf("退出程序\n");
	}
	r++;
	return r;
}
int Choice(int w)
{
	int q = 0;
	int e = 0;//接收Choice的值，不等于0就可以退出while循环。
	int r = 0;
	Print1();
	printf("请选择：");
	scanf("%d", &q);
	while (q)
	{
		
		switch (q)
		{
		case 1:
			e=Integer(r);
			break;
		case 2:
			e=Decimal(r);
			break;
		default:
			printf("输入错误\n");
			e = Choice(w);
			break;
		}
		if (e != 0)
		{
			break;
		}
	}
	if (e == 0)
	{
		printf("退出程序\n");
	}
	w++;
	return w;
}
int main()
{
	int w = 0;//退出while循环所设定的参数，不等于0时退出while循环
	Choice(w);
	return 0;
}