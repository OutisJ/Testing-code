#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double num1 = 0;
	double num2 = 0;
	char ope;//operator �����
	scanf("%lf%c%lf", &num1,&ope,&num2);
	switch (ope)
	{
	case '+':
		printf("%lf+%lf=%lf", num1, num2, num1 + num2);
		break;
	case '*':
		printf("%lf*%lf=%lf", num1, num2, num1 * num2);
		break;
	case '-':
		printf("%lf-%lf=%lf", num1, num2, num1 - num2);
		break;
	case '/':
		printf("%lf/%lf=%lf", num1, num2, num1 / num2);
		break;
	default:
		printf("������˼��Ŀǰ��֧����λ���ļӼ��˳�����Ŷ������ˮƽ�����ˣ�������Ľ���");
		break;
	}
	return 0;
}