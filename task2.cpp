#include <iostream>
using namespace std;

void mergeArr(int arr1[], int arr2[], int arr3[], int size, int size1)
{
    for(int idx = 0; idx < size; idx ++)
    {
        arr3[idx] = arr1[idx];
    }
    for(int idx = 0; idx < size1; idx ++)
    {
        arr3[size1 + idx] = arr2[idx];
    }   
}
main()
{
    int size = 3;
    int size1 = 3;
    int arr1[size] = {1,2,3};
    int arr2[size1] = {4,5,6};

    int totalSize = size + size1;
    int arr3[totalSize];

    mergeArr(arr1, arr2, arr3, size, size1);

    for (int idx = 0; idx < totalSize; idx++)
    {
        cout << arr3[idx] << "\n";
    }
}