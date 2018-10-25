#include <iostream>
#include <cmath>

using namespace std;
int find_max(int* arr, int size)
{
int max_element=arr[0];
int max_index;
for (int i=1;i<size; ++i )
        if(arr[i]>max_element)
        {
        max_element=arr[i];
        max_index=i;

}
return max_index;
}
int main()
{
    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    cout << find_max(arr,10) << endl;
    return 0;
}
