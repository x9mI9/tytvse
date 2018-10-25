#include <iostream>

using namespace std;

int find_max(int* arr, int size)
{
    int max=arr[0];
    int max_index=0;
    for(int i=1;i<size;++i)
    {
        if(arr[i]>max)
        {
        max = arr[i];
        max_index = i;
        }
}
    return max_index;

}

int accumulate(int* first,int* last)
{
    int temp=0;
    for( ; first<last; ++first)
        temp+=(*first);
    return temp;
}
int main()
{
    int arr[5] {4,6,10,9,7};
    cout << find_max(arr,5) << endl;
    cout << accumulate(arr+find_max(arr,5)+1,arr+5) << endl;
    return 0;
}
