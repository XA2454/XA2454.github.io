#include "stdio.h"
void chuanzhi(int *p)//��ַʱ
{	
	int *q=p;
	(*q)+=2;
	printf("��ַ��qָ����ָ�����ͱ�����ֵ��%d\n",*q); 
}
void chuancan(int a)//����Ϊ��ֵʱ
{
	int b=1;
	b+=a;
	printf("��ֵ:ַΪ:%d",b);
}
void main()
{
	int a=5,*p=&a;
	chuancan(a);
	printf("���a��ֵ��%d\n",a);
	chuanzhi(p);//��ַ�ܸı���������ֵ����ֵ����
	printf("���a��ֵ��%d\n",a);
	chuancan(a);
	printf("���a��ֵ��%d\n",a);
}