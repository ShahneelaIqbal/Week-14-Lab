#include<iostream>
using namespace std;
int passArray(int arr[][3], int size)
{
    int count=0;
    int count1=0;
    for (int i=0; i<size; i++)
    {
        for (int i=0; i<3; i++)
        {           
            if(arr[i][i] == 0)
            {
                count++; 
            }
        }
    }
    return count;
}
main()
{
    int size = 3;
    int arr[3][3] = {{0,2,0},{1,0,0},{0,0,3}};
    int check = 9/2;
    int res = passArray(arr,size);
    if(check < res)
    {
        cout << "Sparse Matrix";
    }
    else 
    {
        cout << "Not a sparse matrix";
    }
    
    
}