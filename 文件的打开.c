#include "stdio.h"
int main()
{
	
	char c;
	long value;
	FILE *fp=fopen("c:\\�ܽ�.txt","r+");//����fpΪ�ļ�ָ��
	if(fp==NULL)
	{
		printf("�ļ���ʧ���������ԭ��!");
	}
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	printf("\n");
	fseek(fp,0,SEEK_END);//���ļ���ָ��fp�Ƶ��ļ�ĩβ
	value=ftell(fp);//�����ļ��ĳ���
	fclose(fp);
	printf("�ļ�����Ϊ:%ld",value);
	return 0;
	
}