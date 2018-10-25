#include <iostream>
#include <cmath>

using namespace std;

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
int accumulate(int* first, int* last)
{
    int temp=0;
    for( ; first<last; ++first)

        temp+=(*first);
    return temp;
}
int main()
{
    int arr[5] {5,-4,-1,-3,2};
    cout << find_min_abs(arr,5) << endl;
    cout << accumulate(arr+find_min_abs(arr,5)+1,arr+5) << endl;
    return 0;
}
