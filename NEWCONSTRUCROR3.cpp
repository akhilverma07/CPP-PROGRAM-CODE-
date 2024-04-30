#include<iostream>
using namespace std;
class account{
    int accountnumber;
    string custumorName;
    float balance;
    public:
    account(int acc,string name,float bal){
        accountnumber=acc;
        custumorName=name;
        balance=bal;
    }
    
    
    account (){
        cout<<"ENTER THE ACCOUNT NUMBER : ";
        cin>>accountnumber;
        cout<<"ENTER THE ACCOUNT HOLDER NAME : ";
        cin.ignore();
        getline(cin,custumorName);
        cout<<"ENTER THE BALANCE : ";
        cin>>balance;
    }
    void transaction(char transationtype,float amount){
        if(transationtype=='D' || transationtype=='d'){
            balance += amount;
            cout<<"DEPOSIT : "<<amount<<"Successfully"<<endl;
        }
        else if(transationtype=='W' || transationtype=='w'){
            if(balance >=amount){
                balance -= amount;
            cout<<"WITHDRAW : "<<amount<<"Successfully"<<endl;
            }
            else{
                cout<<"INSUFFICIENT BALANCE"<<endl;
            }
        }	 	  	 	   	  	   	    	 	   	     	 	
    
    else{
        cout<<"INVALID TRANSATION ID" <<endl;
    }
}
    void printdetails(){
        cout<<"ACCOUNT NUMBER : " <<accountnumber<<endl;
        cout<<"CUSTUMOR NAME : "<<custumorName<<endl;
        cout<<"BALANCE : "<<balance<<endl;
    }
};
int main(){
    account acc1;
    char transationtype;
    float amount;
    cout<<"ENTER THE TRANSATION TYPE : ";
    cin>>transationtype;
    cout<<"ENTER THE AMOUNT : ";
    cin>>amount;
    acc1.transaction(transationtype,amount);
    cout<<"\nACCOUNT DETAILS\n";
    acc1.printdetails();
    return 0;
}