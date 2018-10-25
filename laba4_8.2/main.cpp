#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f(int a)
{
    return a==0;
}
int f1(int* arr, int size, UP p)
{
    for( ; size>-1; --size)
     if (p(arr[size]))
     return size;
}
int sum(int* first, int* last)
{ int temp=0;
    for( ; first!=last; ++first)
        temp+=(*first);
    return temp;
}
int main()
{
    int arr[7]{1,0,3,4,5,6,7};
    cout << f1(arr,7,f) << endl;
    cout << sum(arr+f1(arr,7,f),arr+7) << endl;
    return 0;
}
