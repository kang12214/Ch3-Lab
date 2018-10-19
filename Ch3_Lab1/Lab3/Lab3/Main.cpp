#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoise;

	printf("1+2+...+n=?请输入n=");
	scanf_s("%d", &n);
	getchar();
	printf("请问要做奇数和(O),偶数和(E),还是整数和(I)?请选择:");
	scanf_s("%c", &AddChoise);

	switch (AddChoise)
	{
	case 'O':
		Sum = Odd(n);
		break;

	case 'E':
		Sum = Even(n);
		break;

	case 'I':
		Sum = TotalSum(n);
		break;

	default:
		printf("选择错误\n");
		return -1;
	}
	printf("总和为%d\n", Sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
		{
			total = total + i;
		}
	
	}
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
		{
			total = total + i;
		}

	}
	return total;

}

int TotalSum(int U)
{
	return Odd(U) + Even(U);
}