#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f(int a)
{
    return a>0;
}
int kolya_kak_mather(int* arr,int size, UP p)
{
 int temp=0;
 for (int i=0;i<size;++i)
    if (p(arr[i]))
    temp+=arr[i];
 return temp;
}
int main()
{
    int arr[5]{1,-2,3,-4,5};
    cout << kolya_kak_mather(arr, 5,f) << endl;
    return 0;
}
