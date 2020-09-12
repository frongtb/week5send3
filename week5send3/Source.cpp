#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
void calculateSqr2(int);
void Err(void);
int main()
{
	int input_1;
	scanf("%d", &input_1);
	while (input_1 >= 0 || input_1 < 0)
	{
		if (input_1 < 0)
		{
			Err();
			return 0;
		}
		else
			calculateSqr2(input_1);
		return 0;
	}

	return 0;
}
void calculateSqr2(int input_1)
{
	int ans; -
		printf("%f", sqrt(input_1));
}
void Err(void)
{
	printf("Error");
}