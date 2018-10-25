#include <iostream>

using namespace std;
int count_if(int*arr, int* first, int* last)
{
    int count=0;
    for(; first<last; ++first)
        count++;
    return count;
}
int main()
{
    int arr[5] {1,2,3,4,5};
    cout << count_if(arr,arr,arr+5)<< endl;
    return 0;
}
