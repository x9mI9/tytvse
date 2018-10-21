#include <iostream>

using namespace std;
int find_positive(int* arr, int size)
{ --size;
    for ( ; size>0; --size)
    {
        if (arr[size]>0)
        return size;
}
}
int accumulate(int* first, int* last)
{ int temp=0;
    for ( ;first<last; ++first)
    {
        temp+=(*first);
    }
    return temp;
}
int main()
{
    int arr[10] {-1,-2,-3,-4,-5,6,-7,-8,-9,-10};
    cout << find_positive(arr,10) << endl;
    int acc=accumulate(arr,arr+find_positive(arr,10));
    cout<< acc << endl;
    return 0;
}
