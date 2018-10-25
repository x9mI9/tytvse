#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool is_negative(int a)
{
    return a<0;
}
int count_if(int* arr, int size, UP p)
{
    int count=0;
    for(int i=0;i<size;++i)
    {
        if(p(arr[i]))
            count++;
    }
    return count;
}
int main()
{
    int arr[5] {1,-2,3,-4,5};
    cout << count_if(arr,5,is_negative) << endl;
    return 0;
}
