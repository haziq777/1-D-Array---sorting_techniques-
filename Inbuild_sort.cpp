#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
  return a < b;
}
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
int main(int argc, char const *argv[])
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
  cout << "\nYour arrray before sorting is:" << endl;
  display(a, n);
  sort(a, a + n,compare);
  cout << "\nYour arrray after sorting is:" << endl;
  display(a, n);
  return 0;
}
