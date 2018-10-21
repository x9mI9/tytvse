#include <iostream>

using namespace std;
int max(int * arr, int size)
{   int max_el=arr[0];
 int max_in=0;
    for (int i=1; i<size; ++i)
        {if(arr[i]>max_el)
    max_el=arr[i];
     max_in=i;

}
return max_in;
}
int accumulate ( int* first, int* last)
{
    int temp=0;
    for( ; first<last; ++first)
    if(*first>0)
        temp+=(*first);
        return temp;
}

int main()
{
    int arr[5] {1,2,3,3,5};
    cout << max(arr,5) << endl;
   cout << accumulate(arr,arr+max(arr,5));
    return 0;
}
