#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int start,int end){

   int pivot = arr[start];
   int i = start;
   int j = end;

   while(i<j){
      while(arr[i] <= pivot)i++;
      while(arr[j] > pivot)j--;
      if(i<j)
         swap(arr[i],arr[j]);
   }

   swap(arr[j],arr[start]);

   return j;
}

void quickSort(int arr[],int start,int end){

   if(start>=end)
      return ;

   int pivot = partition(arr,start,end);


   quickSort(arr,start,pivot-1);
   quickSort(arr,pivot+1,end);
}


int main(){

   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
   #endif

    int n = 8;
    int arr[n] = {4,6,2,5,7,9,1,3};


    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
   cout<<endl;


   
   return 0;
}


// 4,6,2,5,7,9,1,3
