#include "stdio.h"
int main()
{
	
	char c;
	long value;
	FILE *fp=fopen("c:\\总结.txt","r+");//定义fp为文件指针
	if(fp==NULL)
	{
		printf("文件打开失败请检查错误原因!");
	}
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	printf("\n");
	fseek(fp,0,SEEK_END);//把文件的指针fp移到文件末尾
	value=ftell(fp);//计算文件的长度
	fclose(fp);
	printf("文件长度为:%ld",value);
	return 0;
	
}