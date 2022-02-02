#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* count sort algo and its problems */

/* Count sort:
 * - It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.
 * - It is works for array which having +ve elements
 * - Counting sort can be extended to work for negative inputs also, but you need to modify code.
 * - Counting sort uses a partial hashing to count the occurrence of the data object in O(1).
 *
 * - Input sequence is between range 1 to 10K
 * - Input range: [1, 10K]
 * - Time Complexity : O(n); n is the number of elements.
 * - Space Complexity : O(n+k); space complexity depend on max element in array to create zero array(zero array size = K).
 * */


// --------------count sort function---------------------

void countSort(int arr[],int n){
    int maxnum=0;
    for(int i=0;i<n;i++){
        maxnum = max(maxnum,arr[i]);
    }
    int zeroArr[maxnum+1]={0};
    for(int i =0;i<n;i++) {
        zeroArr[arr[i]]++;cout<<zeroArr[arr[i]]<<endl;
    }
    int j=0;
    for(int i =0;i<maxnum+1;i++){
        while(zeroArr[i]>0){
            arr[j++]=i;
            zeroArr[i]--;
        }
    }
}





//--------------- print array--------------------

void printArr(auto arr,int len){
    for(int i=0;i<len;i++)
        cout<<"  "<<arr[i];
}


//--------------------main function-----------------

int main(){

    int arr[] = {2,4,3,7,1,2};
    int n = sizeof (arr)/sizeof (arr[0]);
    countSort(arr,n);
    printArr(arr,n);
    return 0;

}

