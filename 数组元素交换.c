#include <stdio.h>
#include <stdlib.h>
void change(int a[],int b)
{
	int i;
	for(i=0;i< b/2;i++)
	{
		int temp=a[i];//�����һ��Ԫ�ظ�temp
		a[i]=a[b-1-i];//���һ��Ԫ�ص�ֵ����һ���Դ�����
		a[b-1-i]=temp;
	}

}

void main()
{
	int a[9]={4,5,4,4,6,7,1,0,2};
	int j;
	change(a,9);
	for(j=0;j<9;j++)
	{
		printf("%d\n",a[j]);
	}
	getchar();
}