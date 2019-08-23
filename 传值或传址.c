#include "stdio.h"
void chuanzhi(int *p)//传址时
{	
	int *q=p;
	(*q)+=2;
	printf("传址：q指针所指的整型变量的值是%d\n",*q); 
}
void chuancan(int a)//传参为传值时
{
	int b=1;
	b+=a;
	printf("传值:址为:%d",b);
}
void main()
{
	int a=5,*p=&a;
	chuancan(a);
	printf("检测a的值：%d\n",a);
	chuanzhi(p);//传址能改变变量本身的值而传值则不能
	printf("检测a的值：%d\n",a);
	chuancan(a);
	printf("检测a的值：%d\n",a);
}