#include <iostream>
using namespace std;
int main()
{
  int** arr, i, j, n, m;
  int  temp = 0;

  setlocale(LC_ALL, "ru");


  cout << "Введите размерность массива n*m" << endl;
  if (cin >> n >> m) {}
  else
  {
    cout << "Введены не числовые значения!" << endl;
  }

  if (n <= 0 || m <= 0)
  {
    cout << "Введены неккоректные значения!" << endl;
  }
  arr = new int* [n];
  for (i = 0; i < n; i++)
  {
    arr[i] = new int[m];
  }                                        //захват памяти под массив указателей

  cout << "Введите значения в массив<<" << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << "Введите a[" << i + 1 << "][" << j + 1 << "]" << "=";
      cin >> arr[i][j];
    }
  }

  cout << "До сортировки:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " \t";
    }
    cout << endl;
  }
    int z = n;
    while(z > 0)
    {
    for(int i = 0; i < n; i++)
      {
          for(int j = 0; j < m-1; j++)
          {
              if(arr[i][j] > arr[i][j+1])
              {
                  temp = arr[i][j];
                  arr[i][j] = arr[i][j+1];
                  arr[i][j+1] = temp;
              }
          }
      }
    z--;
    }
 
 


    cout << "После сортировки" << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << arr[i][j] << " \t";
      }
      cout << endl;
    }

    for (i = 0; i < n; i++)
    {
      delete[]arr[i];
      delete[]arr;
      return 0;
    }
  
}
