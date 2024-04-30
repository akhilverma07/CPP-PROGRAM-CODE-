#include<iostream>
using namespace std;
class student{
    
    string name;
    string registration_number;
    float marks;
   public:
   void input(){
        cout<<"ENTER THE NAME : ";
        getline(cin,name);
        cout<<"ENTER THE REGISTRATION NUMBER : ";
        cin>>registration_number;
        cout<<"ENTER THE MARKS : ";
        cin>>marks;
   }
   void get(){
        cout<<"NAME: "<<name<<endl;
        cout<<"REGISTRATION NUMBER :"<<registration_number<<endl;
        cout<<"MARKS : "<<marks<<endl;
    }
};
int main(){
   
    student arr;
    
    arr.input();
    cin.ignore();
    
    cout<<"\nDETAILS :\n";
    
        arr.get();
        cout<<endl;
    
    
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	