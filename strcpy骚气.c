#include <stdio.h>
char *mystrcpy(char *a,char *b)
{
	char *c=NULL;//��ʼ��ָ��
	if(a==NULL||b==NULL)
	{
		return c;
	}
	c=a;
	while((*a++ = *b++)!='\0')
	{
	
	}
	return c;
}
void main()
{
	char str[10]={0};
	printf("%s",mystrcpy(str,"hello,xu ao"));
}