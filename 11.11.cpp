#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//ɾ��һ���ַ����� ĳ���ַ�
//Ҫɾ���ַ��±�i ch[i]=ch[j] j=i+1  i++ i<=len-i 
/*int main()
{
	int i,j;
	char ch[80]={"china is a great country"};
	char c=getchar();
	while(ch[i]!=c)
	i++;
	j=i;
	int len=strlen(ch);
	for(;i<=len-j;i++)
	ch[i]=ch[i+1];
	puts(ch);
	return 0;
 }*/ 
 //Method 2
 /*int main()
 {
 	int i,j=0;
 	char ch[80]={"china is a great country"};
 	printf("������Ҫɾ�����ַ�:");
	char c=getchar();
	for(i=0;ch[i]!='\0';i++)
	if(ch[i]!=c)
	ch[j++]=ch[i];
 	ch[j]='\0';
 	puts(ch);
 	printf("%s",ch);
 	return 0;
 }*/
 //����һ��һ�Իس����������ַ���������80���ַ�����������һ���ַ���������ַ����ֵĴ�������������ַ�
 /*int main()
 {
 	int count,i;
 	char str[80],c;
 	while((str[i]=getchar())!='\n')
 	i++;
 	printf("�����ַ�:");
 	c=getchar();
 	for(i=0;str[i]!='\n';i++)
 	if(str[i]==c)
 	count++;
 	printf("���ֵĴ�����%d\n",count);
 	str[i]='\0';
 	puts(str);
 	printf("\n");
 	
 	
 	
  }*/
  //����һ���ַ������ж��Ƿ�Ϊ���Ĵ�
  /*int main()
  {
  	int i=0;
  	char str[80],str1[80];
  	printf("�����ַ���:");
  	while((str[i]=getchar())!='\n')
  	i++;
  	str[i]='\0';
  	puts(str);
  	char* p;
  	int len=strlen(str);
  	p=str+len-1;
  	for(i=0;i<len;i++)
  	{
	str1[i]=*p;
  	p--;
  }
  	str1[len]='\0';
  	puts(str1);
  	int ret=strcmp(str,str1);
  	while(ret)
  {
	printf("���ǻ��Ĵ�");
  	break;}
	printf("�ǻ��Ĵ�");
	return 0; 
  	
   } */
 //��д����ʵ�������ַ���������
/* int main()
 {
 	int i=0;
 	char a1[20],a2[10];
 	gets(a1);
 	gets(a2);
 	int len1=strlen(a1);
 	int len2=strlen(a2);
 	for(i=0;i<len2;i++)
 	a1[len1+i]=a2[i];
 	a1[len1+len2]='\0';
 	puts(a1);
 	
 	
 }*/
 
 //����10��֤�鴢��������a[10]�У�Ҫ��������ܱ�12�����������ΪT���������ΪF����Ǵ洢��b[10]��
 /*int main()
 {
 	int a[10],i;char b[10];
 	for(i=0;i<10;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<10;i++)
 	if(a[i]%12==0)
 	b[i]='T';
 	else
 	b[i]='F';
 	for(i=0;i<10;i++)
	printf("%d",a[i]);
	printf("\n");
	for(i=0;i<10;i++)
	printf("%c",b[i]);
	return 0;	
 	
  } */
  //����20��ͬѧ�ɼ��������ֵ����Сֵ��ƽ��ֵ
 /* 	int comp(const void* a,const void* b)
  	{
	  return *(int*)a-*(int*)b;}
  int main()
  {
  	int stu[20],i,sum=0;
  	printf("����ɼ���");
  	for(i=0;i<20;i++)
  	scanf("%d",&stu[i]);
  	qsort(stu,20,sizeof(int),comp);
  	printf("��Сֵ��%d",stu[0]);
  	printf("���ֵ��%d",stu[19]);
  	for(i=0;i<20;i++)
  	sum+=stu[i];
  	printf("ƽ��ֵ��%d",sum/20);
  	return 0; 	
   } */
   //�����ά����İ��㣬�����Ԫ��ֵ�ڸ���������ڸ�����С����û�����NO
   #define ROW 3
   #define COL 3
   int min(int x,int y)
   {
   	if(x>y) return y;
   	else return x;
   }
   int main()
   {
   	int i,j,flag,a[ROW][COL],col; 
   	int ret=min(ROW,COL);
   	for(i=0;i<ret;i++)
   	for(j=0;j<ret;j++)
   	scanf("%d",&a[i][j]);
   	for(i=0;i<ret;i++)
   	{
   		flag=1;
   		col=0;
   		for(j=0;j<ret;j++)
   		if(a[i][col]<a[i][j])col=j;
   		for(j=0;j<ret;j++)	
		if(a[i][col]>a[j][col])
   		flag=0;
   		if(flag)
		printf("����ֵ%d �±�%d%d",a[i][col],i,col);   
		else
		printf("NO");	
	   }
   	
   }
 
 
 
 
 
 
 
 
  
