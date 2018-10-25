#include <iostream>
#include <cmath>

using namespace std;
int find_max_abs(int* arr, int size)
{
    int max_element=arr[0];
    int max_index_abs=0;
    for(int i=1; i<size;++i)

    if(abs(arr[i])>max_element)
    {
    max_element=abs(arr[i]);
    max_index_abs=i;

}
return max_index_abs;
}
int main()
{
    int arr[7] {7,6,-50,4,3,2,1};
    cout << find_max_abs(arr,7) << endl;
    return 0;
}
