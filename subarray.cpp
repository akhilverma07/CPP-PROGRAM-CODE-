  #include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        int start=i;
        for(int j=i;j<5;j++){
            int end=j;
            for(int k=start;k<=end;k++)  {
                cout<<arr[k]<<" ";
            }
             cout<<"\n";    
    }
   // cout<<"\n";
 }

    return 0;
}
/*
subarray
output
2 
2 4 
2 4 6 
2 4 6 8 
2 4 6 8 10 
4 
4 6 
4 6 8 
4 6 8 10 
6 
6 8 
6 8 10 
8 
8 10 
10 
*/