#include <iostream>
#include <cmath>

using namespace std;
int find_max_abs(int* arr, int size)
{
    int max=arr[0];
    for(int i=1; i<size; ++i)

        if(abs(arr[i])>max)
        {
            max=abs(arr[i]);


            }
        return max;
  }


    int main()
    {
        int arr[7] {1,1,2,-13,-10,-7,5};
        cout << find_max_abs(arr,7) << endl;
        return 0;
    }
