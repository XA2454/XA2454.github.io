#include <stdio.h>
char *mystrcpy(char *a,char *b)
{
	char *c=NULL;//³õÊ¼»¯Ö¸Õë
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
int main()
{
	char str[10]={0};
	printf("%s",mystrcpy(str,"hello,xu ao"));
	return 0;
}
