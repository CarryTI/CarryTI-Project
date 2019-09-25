#include <stdio.h>

int power(int x, int y)
{
	int z = 1;
	for (int i = 1; i <= y; i++) z = z * x;
		return (z);
}

int main()
{
	int x;
	int y;

	scanf("%d", &x);
	scanf("%d", &y);
	

	int result = power(x, y);

	int lastNum = result % 10;

	printf ("\n%d", lastNum);
	printf("\n");

	return 0;
}