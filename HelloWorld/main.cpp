
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


}
