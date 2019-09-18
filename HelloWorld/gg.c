#include <iostream>
#include <ctime>
using namespace std;
int sum;
int main()
{
  srand(time(NULL));
  int coln1 = 5, rows1 = 5; int rows = 5, coln = 5;
  cout << " Enter the count of rows of first AAr\n";
  cin >> rows1;
  cout << " Enter the count of colons of first AAr\n";
  cin >> coln1;
  cout << " Enter the count of rows of second AAr\n";
  cin >> rows;
  cout << " Enter the count of colons of second AAr\n";
  cin >> coln;
  int rows2 = rows, coln2 = coln;
  int** arr1 = new int* [rows1];
  for (int i = 0; i < rows1; i++)
  {
    arr1[i] = new int[coln1];

  }
  int** arr = new int* [rows];
  for (int i = 0; i < rows; i++)
  {
    arr[i] = new int[coln];

  }
  int** arr2 = new int* [rows2];
  for (int i = 0; i < rows2; i++)
  {
    arr2[i] = new int[coln2];

  }
  ///////////////////////////////
  for (int j = 0; j < rows1; j++)
  {
    for (int z = 0; z < coln1; z++)
    {
      arr1[j][z] = rand() % 30 - 5;
    }
  }
  for (int o = 0; o < rows; o++)
  {
    for (int p = 0; p < coln; p++)
    {
      arr[o][p] = rand() % 30 - 5;
    }
  }
  for (int o = 0; o < rows; o++)
  {
    for (int p = 0; p < coln; p++)
    {
      arr2[o][p] = arr[o][p] + arr1[o][p];
    }
  }
  for (int o = 0; o < rows; o++)
  {
    for (int p = 0; p < coln; p++)
    {
      cout << arr2[o][p] << "\t";
    }cout << endl;
  }

  for (int i = 0, j = 0; i + j < 2 * rows2; i++, j++)
  {

    sum += arr2[i][j];

  }
  cout << "Sum of shaky Arr2= " << sum << endl;

  for (int i = 0; i < rows1; i++)
  {
    delete[] arr1[i];
  }
  delete[] arr1;
  for (int i = 0; i < rows; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;
  for (int i = 0; i < rows; i++)
  {
    delete[] arr2[i];
  }
  delete[] arr2;

  return 0;
}
