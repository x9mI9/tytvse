#include <iostream>

using namespace std;
int find_if(int* arr, int size)
{
    int min=arr[0];
    int index=0;
    for(int i=1; i<size; ++i)
    {
     if(arr[i]<min)
     {
         min=arr[i];
         index=i;
     }
    }
return index;
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
    int arr[5] {5,4,1,1,1};
    cout << find_if(arr,5) << endl;
    cout << accumulate(arr,arr+find_if(arr,5)) << endl;
    return 0;
}
