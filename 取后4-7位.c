#include "stdio.h"
void main(){
	int a,b,c,d;
	printf("���������a��ֵ:\n");
	scanf("%d",&a);
	b=a>>4;
	c=~(~0<<4);
	d=b&c;
	printf("ȡ����a��4~7λ%d\n",d);
}