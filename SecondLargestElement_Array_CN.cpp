#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{  
    int a=INT_MIN,b=INT_MIN;

    if(n<2){
       return INT_MIN;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>a){
        	b=a;
            a=arr[i];
        }
        else if(arr[i]!=a && arr[i]>b){
            b=arr[i];
        }
    } 

    if(b==INT_MIN){
        return -1;
    }
    return b ;
}

