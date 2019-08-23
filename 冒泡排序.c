#include <stdio.h>
void sort(int a[],int b)
{
	int i,j,temp;
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	int a[8]={1,3,5,7,9,2,4,6};
	int b;
	sort(a,8);
	for(b=0;b<8;b++)
	{
		printf("%d\n",a[b]);
	}
}