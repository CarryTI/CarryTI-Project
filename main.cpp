
#include "header.h"
#include "matrixClass.cpp"

void ft_death(void)
{
    cout << "Error with matrix!\n";
    exit(1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("%s\n", av[1]);
    return 0;
}
