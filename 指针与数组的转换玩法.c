#include "stdio.h"
void shuzhu(int a[])
{
	int *p=a;
	printf("转换输出第9个元素:%d",p[8]);
}
void main()
{
	int a[10],b;
	for(b=0;b<9;b++){
		a[b]=b+1;
		printf("数组的元素分别为:%d\n",a[b]);
		}
	shuzhu(a);
}