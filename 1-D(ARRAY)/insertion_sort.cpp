#include <iostream>
using namespace std;
void display(int a[], int n)
{

  cout << "[";
  for (int i = 0; i < n; i++)
  {
    if (i < n - 1)
    {
      cout << a[i] << ",";
    }
    else
    {
      cout << a[i] << "]";
    }
  }
}

void insertion_sort(int a[], int n)
{
  for (int i = 1; i <= n - 1; i++)
  {
    int e = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > e)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = e;
  }
  cout << "\nyour array after insertion sort is:" << endl;
  display(a, n);
}

int main()
{
  int n;
  cout << "enter the size of array:";
  cin >> n;
  int a[n];
  cout << "\ninput array elements:";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "\nyour arrray before insertion sort is:" << endl;
  display(a, n);
  insertion_sort(a, n);

  return 0;
}
