#include "stdio.h"
void shuzhu(int a[])
{
	int *p=a;
	printf("ת�������9��Ԫ��:%d",p[8]);
}
void main()
{
	int a[10],b;
	for(b=0;b<9;b++){
		a[b]=b+1;
		printf("�����Ԫ�طֱ�Ϊ:%d\n",a[b]);
		}
	shuzhu(a);
}