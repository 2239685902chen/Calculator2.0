#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Calculator.h"
void Print1()
{
	printf("1.��������\n");
	printf("2.С������\n");
	printf("0.�˳�����\n");
}
void Print2()
{
	printf("1.�ӷ�\n");
	printf("2.����\n");
	printf("3.�˷�\n");
	printf("4.����\n");
	printf("5.������һ��\n");
	printf("0.�˳�����\n");
	printf("��ѡ��");
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
			printf("���Ϊ%d\n", t);
			break;
		case 2:
			t=Subtraction(x,y);
			printf("���Ϊ%d\n", t);
			break;
		case 3:
			t=Multiplication(x,y);
			printf("���Ϊ%d\n", t);
			break;
		case 4:
			t=Division(x,y);
			printf("���Ϊ%d\n", t);
			break;
		case 5:
			o=Choice(w);
			break;
		case 0:
			break;
		default:
			printf("�������\n");
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
		printf("�˳�����\n");
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
			printf("���Ϊ%f\n", t);
			break;
		case 2:
			t = Subtraction1(x, y);
			printf("���Ϊ%f\n", t);
			break;
		case 3:
			t = Multiplication1(x, y);
			printf("���Ϊ%f\n", t);
			break;
		case 4:
			t = Division1(x, y);
			printf("���Ϊ%f\n", t);
			break;
		case 5:
			o = Choice(w);
			break;
		case 0:
			break;
		default:
			printf("�������\n");
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
		printf("�˳�����\n");
	}
	r++;
	return r;
}
int Choice(int w)
{
	int q = 0;
	int e = 0;//����Choice��ֵ��������0�Ϳ����˳�whileѭ����
	int r = 0;
	Print1();
	printf("��ѡ��");
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
			printf("�������\n");
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
		printf("�˳�����\n");
	}
	w++;
	return w;
}
int main()
{
	int w = 0;//�˳�whileѭ�����趨�Ĳ�����������0ʱ�˳�whileѭ��
	Choice(w);
	return 0;
}