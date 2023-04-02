#include <iostream>
using namespace std;
void rotateNumber(int arr1[], int arr2[], int size, int rotate);

main()
{
    int size = 9;
    int arr1[size] = {1,2,3,4,5,6,7,8,9};
    int arr2[size];
    int rotate;

    cout << "Enter number:  ";
    cin >> rotate;

    rotateNumber(arr1, arr2, size, rotate);

    for (int i = 0; i < size; i ++)
    {
        cout << arr2[i] << "\n";
    }
}
void rotateNumber(int arr1[], int arr2[], int size, int rotate)
{
    int arr3[size] = {};
    for (int i=0; i<rotate; i++)
    {    
        arr3[i] = arr1[i]; 
                
    }
    for(int i=0; i<size-rotate; i++)
    {
        arr1[i] = arr1[rotate+i];
    }
    for(int i=0; i<size-rotate; i++)
    {
        arr2[i] = arr1[i];
    }
    for(int i=0; i<rotate; i++)
    {
        arr2[size-rotate+i] = arr3[i];
    }
}
