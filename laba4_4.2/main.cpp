#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f1(int a)
{
    return a==0;
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
    for ( ; size>-1;--size)
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
    int arr[7] {-1,0,-2,-3,-4,0,6};
    int acc=accumulate(arr+find_if(arr,7,f1)+1,arr+find_if1(arr,7,f1));
    cout << acc << endl;
    return 0;
}
