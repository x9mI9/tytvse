#include <iostream>

using namespace std;
int find_chet(int* arr, int size)
{
    int temp=0;
    for(int i=2;i<size;i=i+2)
        {
        temp=temp+arr[i];
        }
return temp;
}

int main()
{
    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    cout << find_chet(arr,10)<< endl;
    return 0;
}
