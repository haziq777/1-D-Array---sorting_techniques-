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

  int MS = 0;    // MS         -->    (maximum sum)
  int CS = 0;    //  CS         -->    (current sum)
  int left = -1; //  for printing the subarray having max-sum
  int right = -1;
  for (int i = 0; i < n; i++)
  {

    for (int j = i; j < n; j++)
    {
      CS = 0;
      for (int k = i; k <= j; k++)
      {
        CS += a[k];
      }
      if (CS > MS)
      {
        MS = CS;
        left = i;
        right = j;
      }
    }
  }
  cout << "array whose sum is maximum is:" << endl;
  for (int i = left; i <= right; i++) // for print the sub array eith max sum
  {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "the sum of this subarray is:" << MS;

  return 0;
}