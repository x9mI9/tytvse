#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f (int a)
{
    return a<0;
}
int sum_otrich(int* arr, int size, UP p)
{ int temp=1;
    for (int i=0; i<size ; ++i)
    if (p(arr[i]))
        temp*=arr[i];
    return temp;
}
int main()
{
    int arr[5] {1,-2,-3,-4,5};
    cout << sum_otrich(arr, 5, f) << endl;
    return 0;
}
