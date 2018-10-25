#include <iostream>
#include <cmath>

using namespace std;

int find_min_abs(int* arr, int size)
{
    int min=arr[0];
    int min_in=0;
    for(int i=1; i<size; ++i)

        if(abs(arr[i])<min)
        {
            min=abs(arr[i]);
            min_in=i;
        }
    return min_in;
}
int main()
{
    int arr[5] {50,40,30,10,-1};
    cout << find_min_abs(arr,5) << endl;
    return 0;
}
