#include <iostream>
using namespace std;

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

  int cs = 0;
  int ms = 0;
  for (int i = 0; i < n; i++)
  {
    cs = cs + a[i];
    if (cs < 0)
    {
      cs = 0;
    }
    ms = max(cs, ms);
  }
  cout << "Maximum sum of sub-array is:" << ms;

  return 0;
}
