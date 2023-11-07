#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double num1 = 0;
	double num2 = 0;
	char ope;//operator 运算符
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
		printf("不好意思，目前仅支持两位数的加减乘除运算哦，等我水平提升了，会继续改进。");
		break;
	}
	return 0;
}