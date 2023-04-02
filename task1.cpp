#include <iostream>
using namespace std;
void passArr(int arr[][3], int size)
{
    for(int idx = 0; idx < size; idx ++)
    {
        for(int i = 0; i < size; i ++)
        {
            cout << arr[idx] << "\n"; 
        }
        
    }
}
main()
{
    int size = 3;
    int arr[size][size] = {{1,2,3},{4,5,6},{7,8,9}};
    passArr(arr, size);
}