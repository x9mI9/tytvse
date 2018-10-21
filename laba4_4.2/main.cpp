#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f1(int a)
{
    return a==1;
}
int find_if(int* arr, int size, UP p)
{
    for(int i=0;i<size;++i)
    {
    if(p(arr[i]))
    return i;
    }
}

int find_if1(int* arr, int size, UP p)
{ --size;
    for ( ; size>0;--size)
    {
     if (p(arr[size]))
     return size;
    }

}

int accumulate(int* first, int* last)
{ int temp=1;
    for ( ; first<last;++first)
    {
        temp*=(*first);
    }
    return temp;
}
int main()
{
    int arr[6] {-1,1,-2,-3,1,-5};
    int acc=accumulate(arr+find_if(arr,6,f1),arr+find_if1(arr,6,f1));
    cout << acc << endl;
    return 0;
}
