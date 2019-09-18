
#include "header.h"
#include "matrixClass.cpp"

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

    // Variant 1
    // sumMatrix.setMat(fMatrix.add(sMatrix));
    // variant 2

    // Variant 3
    // sumMatrix.add(fMatrix, sMatrix);

    sumMatrix.printMat();
}
