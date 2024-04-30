/*
//CALL BY ADDRASS
#include<iostream>
using namespace std;
int swapnumber(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"AFTER SWAP VALUE IN FUNTION : ";
    cout<<"\nNUMBER AFTER SWAP : "<<a<<" "<<b<<endl;
    return 0 ;
}
int main(){
    int num1;
    int num2;12
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>num2;
    cout<<"\nNUMBER BEFORE SWAP : "<<num1<<" "<<num2<<endl;
    swapnumber(num1,num2);
    cout<<"AFTER SWAP VALUE IN MAIN FUNTION : \n";
    cout<<"NUMBER AFTER SWAP : "<<num1<<" "<<num2<<endl;
    return 0;
}
*/

//CALL BY REFRENCE
#include<iostream>
using namespace std;
int swapnumber(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout<<"AFTER SWAP VALUE IN FUNTION : \n";
    cout<<"\nNUMBER AFTER SWAP : "<<*a<<" "<<*b<<endl;
    return 0 ;
}	 	  	 	   	  	   	    	 	   	     	 	
int main(){
    int num1;
    int num2;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>num2;
    cout<<"NUMBER BEFORE SWAP : "<<num1<<" "<<num2<<endl;
    swapnumber(&num1,&num2);
    cout<<"AFTER SWAP VALUE IN MAIN FUNTION : \n";
    cout<<"NUMBER AFTER SWAP : "<<num1<<" "<<num2<<endl;
    return 0;
}
