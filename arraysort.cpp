
/*
//array sort and count original number no dublicate
#include<iostream>
using namespace std;

int main(){
    int count =0;
    int arr[]={0,1,1,1,2,2,3,4,};
    for(int i=0;i<8;i++){
        if(arr[i] !=arr[i+1]){
            count++;
            cou<<arr[i]<<" ";
        }
    }
    cout<<"\n"<<count;
    return 0;
}



//merging two array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,3};
    int arr2[]={9,7,6,4,5};
    int result[10];
    for(int i=0;i<5;i++){
        result[i]=arr[i];
    }
    for(int i=0;i<5;i++){
        result[i+5]=arr2[i];
       
    }
    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-1-i;j++){
            if(result[j]>result[j+1]){
                int temp=result[j];
                result[j]=result[j+1];
                result[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

//number of pairs
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,12,13,6,15};
    int target=25;
    int count=0;
    for(int i=0;i<5-1;i++){
        for(int j=i;j<5-1;j++){
            if(target==arr[i]+arr[j+1]){
                count++;
                cout<<arr[i]<<" " <<arr[j+1]<<"  ";
            }
        }
    }
    cout<<count;
    return 0;
}
*/
