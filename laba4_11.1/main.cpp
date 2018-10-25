#include <iostream>

using namespace std;
int find_min(int* arr, int size)
{ int min=arr[0];
    for (int i=0;i<size; ++i)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[5] {9,8,7,6,-50};
    cout << find_min(arr, 5) << endl;
    return 0;
}
