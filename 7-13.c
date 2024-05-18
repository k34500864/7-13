#include<stdio.h>
int main(void) {
	int a;
	while (scanf("%d", &a) != EOF)
	{
		if (a <= 0 || a % 2 != 0)
			printf("請重新輸入:");
		else
		{
			int i = 1, sum = 0;
			for (i = 2; i <= a; i++)
			{
				sum += i;
				printf("%d\n", sum);
				i++;
			}
			printf("2 + 4 + 6 +...+ %d = %d\n", a, sum);
			break;
		}
	}
}