#include <iostream>

using namespace std;
using UP=bool (*) (int);
bool f(int a)
{
    return a>0;
}
int find_positive(int* arr, int size, UP p)
{
    for (int i=0; i<size; ++i)
       {
        if(p(arr[i]))
       return i;
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
    int arr[5] {-1,2,3,4,5};

    cout << find_positive(arr,5,f) << endl;
    cout << accumulate(arr+find_positive(arr,5,f)+1,arr+5)<<endl;
    return 0;
}
