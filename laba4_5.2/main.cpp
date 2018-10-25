#include <iostream>

using namespace std;
using UP = bool (*) (int);
bool f(int a)
{
    return a>0;
}
int find_positiv1(int* arr, int size, UP p)
{
    for(int i=0; i<size;++i)
        {if(p(arr[i]))
        return arr[i];
}
}
int find_positiv2(int*arr, int size, UP p)
{
    int i=find_positiv1(arr,5,f);
    for(;i<size;++i)
    {if(p(arr[i]))
        return arr[i];
}
}
int accumulate(int* first, int* last)
{
    int temp=0;
    for ( ;first<last ;++first)
    temp+=(*first);
    return temp;
    }


int main()
{
    int arr[10] {1,-2,-3,-4,-5,-6,-7,8,9,10};
    cout << find_positiv1(arr,10,f) << endl;
    cout << find_positiv2(arr,10,f) << endl;
    cout<< accumulate(arr+find_positiv1(arr,10,f),arr+find_positiv2(arr,10,f)) << endl;
    return 0;
}
