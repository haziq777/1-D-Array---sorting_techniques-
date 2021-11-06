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
  sort(a, a + n,compare);                               //   Here compare funtion is used only for generating (accending / decending) model.....
  cout << "\nYour arrray after sorting is:" << endl;   //    Here  we are not calling compare funtion but using it as parameter(though it is called internaly)........
  display(a, n);                                      //     First term of array is included(a) and last term is ( a+(n-1) ) but it is not included
  return 0;                                          //      Therfore we write it as ( a+(n-1) ) to include it as (a+ n-1) .............
}
