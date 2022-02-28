#include <iostream>
#include <string>
#include <stack>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main(){
    string s= "bhavin";
    int array[]={4,5,3,2,1,2,6,2,3,7,9,10,55,42,55};
    int n=15;

    bubbleSort(array,n);

    cout<<endl<<endl;

    for (int i=0;i<n;i++)
        cout<<array[i]<<"   ";




}