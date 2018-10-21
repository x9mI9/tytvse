#include <iostream>
#include <windows.h>
using namespace std;

void printArr(int arr[], int len)
{
    for(int i=0;i<len;i++)
        cout << arr[i] << " ";
    cout << endl;
}

void fillArr(int arr[], int len)
{
    for(int i=0;i<len;i++)
    {
        arr[i] = rand()%10+1;
    }
}

int findMax(int arr[],int len)
{
    int max = arr[0];
    int index = 0;
    for(int i=0;i<len;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int *arr;
    int res = 1;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    arr = new int[size];
    fillArr(arr,size);
    for(int i=findMax(arr,size)+1;i<size;i++)
    {
        res = res*arr[i];
    }
    printArr(arr,size);
    cout << "res = " << res << endl;
    return 0;
}
