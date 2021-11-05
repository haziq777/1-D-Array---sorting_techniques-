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
void bubble_sort(int a[], int n)
{
  for (int itr = 1; itr <= n - 1; itr++)
  {
    // NOW Pairwise Swapping
    for (int j = 0; j <= (n - itr - 1); j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(a[j], a[j + 1]);
      }
    }
  }
  cout << "\nYour array after Bubble sort is:" << endl;
  display(a, n);
}
int main()
{
  int n;
  cout << "Enter the size of array:";
  cin >> n;
  int a[n];
  cout << "\nInput array elements:";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "\nYour arrray before bubble sort is:" << endl;
  display(a, n);
  bubble_sort(a, n);
  return 0;
}
