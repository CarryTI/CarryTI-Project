
#include "header.h"

class myMatrix {

    int i;
    int j;
    int **mat;

    public: int add()
    {

         for (int y = 0; y < this->i; y++)
        {
            for (int x = 0; x < this->j; x++)
            {
                 this->mat[y][x] = fMatrix.mat[y][x] + sMartix.mat[y][x];
            }
        }
    }

    public: myMatrix copyMat()
    {
        myMatrix clone;

        clone.setI(this->i);
        clone.setJ(this->j);
        clone.setMat(this->mat);
        return (clone);
    }

    public: int **getMat() {
        return (this->mat);
    }

    public: void setMat(int **element) {
        this->mat = element;
    }

    public: void printMat() {
        cout << "\nYour matrix is: \n" << endl;
        for (int y = 0; y < this->i; y++)
        {
            for (int x = 0; x < this->j; x++)
            {
                cout << this->mat[y][x] << " ";
            }
            cout << endl;
        }
    }

    public: void cMat() {
        for (int y = 0; y < this->i; y++)
        {
            for (int x = 0; x < this->j; x++)
            {
                cin >> this->mat[y][x];
            }
        }
    }

    public: void allocateMat() {
        this->mat = (int**)malloc(sizeof(int*) * this->i);
        for (int x = 0; x < this->i; x++)
            this->mat[x] = (int*)malloc(sizeof(int) * this->j);
    }

    public: int getI() {
        return (i);
    }

    public: setI(int element) {
        this->i = element;
    }

    public: setJ(int element) {
        this->j = element;
    }

    public: int getJ() {
        return (j);
    }

    public: void getSize() {
        cout << "Hello, it is a program for work with matrix!" << endl
            << "First of all you need to set sire of your matrix!" << endl
            << "Set i and j-size below:" << endl;

        cout << "i = ";
        cin >> i;
        cout << "j = ";
        cin >> j;
    }

};
