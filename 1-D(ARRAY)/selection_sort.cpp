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
void selection_sort(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (a[j] < a[min_index])
      {
        min_index = j;
      }
    }
    swap(a[i], a[min_index]);
  }

  cout << "\nYour arrray after selection sort is:" << endl;
  display(a, n);
}

int main(int argc, char const *argv[])
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
  cout << "\nyour arrray before selection sort is:" << endl;
  display(a, n);
  selection_sort(a, n);
  return 0;
}
