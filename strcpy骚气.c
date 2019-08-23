#include <stdio.h>
char *mystrcpy(char *a,char *b)
{
	char *c=NULL;//≥ı ºªØ÷∏’Î
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