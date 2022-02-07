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
/*
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
*/



//-------------------------------------------check pangram in string--------------------------------------------------------------

/* Pangron string */

/* Pangram string is an string which includes all alphabates.
 *
 *
 *
 *
 *
 *
 * */
bool checkPangram (string str){
    vector<bool> mark(26,false);
     int index;
     for (int i=0;i<str.length();i++){
         if('A'<=str[i] && str[i]<='Z'){
             index = str[i]-'A';
         }
         else if('a'<=str[i] && str[i]<='z'){
             index = str[i]-'a';
         }
         else
             continue;
         cout<<endl<<"before i : "<<i;
         cout<<endl<<"before str[i] : "<<str[i];
         cout<<endl<<"after index : "<<index;
         mark[index]=true;
     }

     string s="";
     for (int i=0; i<=25;i++) {
         if (mark[i] == false)
         {
             s+= i+'a';
         }
     }
     cout<<"\n-messing charactors-\n";

     for(int i=0; i<s.length();i++)
         cout<<s[i]<<"  ";
     cout<<endl;
     return (true);
}



//--------------------main function-----------------

int main(){
    string str = "bhavin hello world";
    if(checkPangram(str)==true)
        cout<<"string is a pangram";
    else
        cout<<"string is not a pangram";
    return 0;

}

