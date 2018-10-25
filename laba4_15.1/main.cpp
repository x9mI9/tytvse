#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f(int a)
{
    return a>0;
}
int f1(int* arr, int size, UP p)
{
    int temp = 1;
    for(int i=0;i<size;++i)
    {
        if(p(arr[i]))
            temp*=arr[i];
    }
    return temp;
}
int main()
{
    int arr[5] {2,0,-3,0,2};
    cout << f1(arr,5,f) << endl;
    return 0;
}
