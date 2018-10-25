#include <iostream>

using namespace std;
using BP=bool (*) (int,int);
bool min(int a, int b)
{
    return a<b;
}
bool max(int a,int b)
{
    return a>b;
}
int find_negative(int* arr, int size)
{
    int temp=0;
    for (int i=0; i!=size; ++i)
    {
    if (arr[i]<0)
    temp+=arr[i];

    }
    return temp;
}

int find_min(int* arr,int size, BP p)
{
    int min_el=arr[0];
    int min_in=0;
    for (int i=1; i<size; ++i )
    {
        if(p(arr[i],min_el))
        {
            min_el=arr[i];
            min_in=i;



        }
        return min_in;
    }
}

int find_max(int* arr, int size, BP p)
{
    int max_el=arr[0];
    int max_in=0;
        for (int i=1; i<size; ++i )
    {
        if(p(arr[i],max_el))
            max_el=arr[i];
            max_in=i;

    }
    return max_in;
}

int accumulate(int* first, int* last)
{
    int temp=1;
    for ( ; first<last; ++first)
    {
        temp*= (*first);
    }
    return temp;
}

int main()
{

    int arr[5] {1,2,3,-4,5};
    cout<<find_negative(arr, 5)<<endl;
    int acc=accumulate(arr+find_min(arr,5,min)+1, arr+find_max(arr,5,max));
    cout<< acc << endl;
    return 0;
}
