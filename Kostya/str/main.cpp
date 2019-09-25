#include "header.h"
#include "stringClass.cpp"

int ft_asciiGod(int num)
{
	switch (num) {
		case 0: return(48);
		case 1: return(49);
		case 2:	return(50);
		case 3:	return(51);
		case 4: return(52);
		case 5: return(53);
		case 6: return(54); 
		case 7: return(55);
		case 8: return(56);
		case 9: return(57);
		default: cout <<"Wrong number";
	}
}


void ft_write (int str)
{
	write(1, &str, 1);
}

int ft_putnum(int number)
{

	int num[4];
	int x = 1;
	for (int i = 4; i >= 1; i--){
		num[i] = (number / x) % 10;
		x = x*10;
	}

		for (int i = 1; i <= 4; i++)
			ft_write(ft_asciiGod(num[i]));
}

int main()
{
	int num;

	num = 1234;
	ft_putnum(num);	
	return 0;

	
}