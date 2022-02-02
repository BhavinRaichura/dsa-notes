#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* count sort algo and its problems */

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

void printArr(auto arr,int len){
    for(int i=0;i<len;i++)
        cout<<"  "<<arr[i];
}


int main(){

    int arr[] = {2,4,3,7,1,2};
    int n = sizeof (arr)/sizeof (arr[0]);
    countSort(arr,n);
    printArr(arr,n);
    return 0;

}