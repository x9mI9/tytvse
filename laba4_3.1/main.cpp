#include <iostream>

using namespace std;

int find_max(int* arr, int size)
{
int max_element=arr[0];
for (int i=1;i<size; ++i )
        if(arr[i]>max_element)
        max_element=arr[i];

        return max_element;
}
int main()
{
    int arr[10] {1,2,3,4,5,9,6,8,7,6};
    cout << find_max(arr,10) << endl;
    return 0;
}
