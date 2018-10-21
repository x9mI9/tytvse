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
int find_negative(int* arr, int size,int temp)
{
    for (int i=0; i!=size; ++i)
    {
    if (arr[i]<0)
    {
    temp+=arr[i];
    {return temp;
}
}
}
}
int find_min(int* arr,int size, BP p)
{
    int min_el=arr[0];
    for (int i=1;i<size; ++i )
    {
        if(p(arr[i],min_el))
    {   min_el=arr[i];

            return min_el;

    }
}
    }

int find_max(int* arr, int size, BP p)
{
int max_el=arr[0];
for (int i=1;i<size; ++i )
    {
        if(p(arr[i],max_el))
        max_el=arr[i];

        return max_el;
    }
}

int accumulate(int* first, int* last)
{
    int temp=1;
    for ( ; first<last; ++first)    {
        temp*= (*first);
    }
    return temp;
}

int main()
{

    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    cout<<find_negative(arr, 10, 0)<<endl;
//    int acc=accumulate(arr+find_min(arr,10,min), arr+find_max(arr,10,max));
//    cout<< acc << endl;
    return 0;
}
