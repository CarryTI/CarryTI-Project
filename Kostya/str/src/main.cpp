#include "header.h"
#include "stringClass.cpp"

int ft_asciiGod(int num)
{
	char c;

	c = num + 48;
	write(1, &c, 1);
}

void ft_putnum(int number)
{
	if (number)
	{
		ft_asciiGod(number % 10);
		number /= 10;
		ft_putnum(number);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	int num;

	if (ac >= 2)
	{
		num = atoi(av[1]);
		ft_putnum(num);
	}
	return 0;
}