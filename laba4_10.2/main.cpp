#include <iostream>

using namespace std;
int find_max_abs(int* arr, int size)
{
    int max=arr[0];
    int max_in=0;
    for(int i=1; i<size; ++i)

        if(abs(arr[i])>max)
        {
            max=abs(arr[i]);
            max_in=i;
            }
        return max_in;
  }

  int find_min_abs(int* arr, int size)
{
    int min=arr[0];
    int min_in=0;
    for(int i=1; i<size; ++i)

        if(abs(arr[i])<min)
        {
            min=abs(arr[i]);
            min_in=i;
            }
        return min_in;
  }
int accumulate (int* first, int* last)
{
    int temp=1;
    for ( ; first < last; ++first)
        temp*=(*first);
    return temp;
}

int main()
{
    int arr[5] {10,-70,-9,-3,-5};
    cout << find_max_abs(arr,5) << endl;
    cout << find_min_abs(arr,5) << endl;
    cout << accumulate(arr+find_max_abs(arr,5)+1, arr+find_min_abs(arr,5)) << endl;
    return 0;
}
