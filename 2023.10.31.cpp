#include <stdio.h>
int main()
{
	int max(int a,int b, int c);
	int num1,num2,num3,com;
	printf ("请输入要比较的三个数字：");
	scanf ("%d %d %d",&num1,&num2,&num3);
	com=max(num1,num2,num3);
	printf ("max is %d", com);
	return 0;
}
int max(int a,int b,int c)
{
	int d;
	if (a>b&&a>c) d=a;
	else if(b>c) d=b;
	    else d=c;
	return d;      
	
	
	
	
}
