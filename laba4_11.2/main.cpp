#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool is_positive(int a)
{
    return a>0;
}
int find_first_positive(int* arr, int size, UP p)
{
    for(int i=0;i<size;++i)
        if(p(arr[i]))
    return i;
}

int find_last_positive(int* arr, int size, UP p)
{
    --size;
    for( ; size>-1; --size)
        if(p(arr[size]))
            return size;
}
int accumulate(int* first, int* last)
{
    int temp=0;
    for ( ; first<last; ++first)
    {
        temp+=(*first);
    }
    return temp;
}
int main()
{
    int arr[5] {-1,2,-3,-4,5};
    cout << find_first_positive(arr,5,is_positive) << endl;
    cout << find_last_positive(arr,5,is_positive) << endl;
    cout << accumulate(arr+find_first_positive(arr,5,is_positive)+1,arr+find_last_positive(arr,5,is_positive)) << endl;

    return 0;
}
