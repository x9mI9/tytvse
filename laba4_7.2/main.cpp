#include <iostream>
#include <cmath>

using namespace std;
int ccc(int* arr, int size, int c)
{
 int    counter=0;
    for(int i=0; i<size; ++i)
        if (arr[i]>c)
        counter++;
        return counter;
}



    int main()
    {
        int arr[5] {1,2,3,4,5};
        cout<< ccc(arr,5,3);
    }
