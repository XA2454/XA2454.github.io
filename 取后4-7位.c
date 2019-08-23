#include "stdio.h"
void main(){
	int a,b,c,d;
	printf("请输入变量a的值:\n");
	scanf("%d",&a);
	b=a>>4;
	c=~(~0<<4);
	d=b&c;
	printf("取变量a后4~7位%d\n",d);
}