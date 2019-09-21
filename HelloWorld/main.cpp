
#include "header.h"
#include "matrixClass.cpp"

void ft_death(void)
{
    cout << "Error with matrix!\n";
    exit();
}

int main()
{
    myMatrix fMatrix;
    myMatrix sMatrix;
    myMatrix sumMatrix;

    fMatrix.getSize();
    fMatrix.allocateMat();
    fMatrix.cMat();
    fMatrix.printMat();
    sMatrix.getSize();
    sMatrix.allocateMat();
    sMatrix.cMat();
    sMatrix.printMat();

    sumMatrix.add(fMatrix, NULL);

    sumMatrix.printMat();
}
