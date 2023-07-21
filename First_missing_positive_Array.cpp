#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{   
    int count_arr[n+1];
    count_arr[0]=1;
    for(int i=1;i<n+1;i++){
        count_arr[i]=0;
    }
    for(int i=0;i<n;i++){
      if (arr[i] > 0 && arr[i] < n + 1) {
        count_arr[arr[i]] = 1;
      }
    }
    for(int i=0;i<n+1;i++){
        if(count_arr[i]==0){
            return i;
        }
    }

    return n+1;
}