#include <iostream>
#include <cmath>

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
 int accumulate(int* first, int* last)
{
    int temp=1;
    for ( ; first<last; ++first)
    {
        temp*= (*first);
    }
    return temp;
}

int main()
{
    int arr[5] {50,40,30,20,10};
    cout << accumulate(arr+find_max_abs(arr,5)+1,arr+5) << endl;
    return 0;
}
