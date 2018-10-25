#include <iostream>

using namespace std;
int c1 (int* arr, int c, int size)
{
int counter = 0;
for (int i=0; i<size; ++i)
    if (arr[i]>c)
    counter++;
return counter;
}
int main()
{
int arr[5] {1,2,3,4,5};
cout << c1(arr, 1, 5);
    return 0;
}
