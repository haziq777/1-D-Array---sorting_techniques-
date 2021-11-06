#include <iostream>
using namespace std;
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
  cout << "Total (Sub-array's) are:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "All sub-array's with the " << i + 1 << " term" << endl;
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << a[k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}