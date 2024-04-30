#include<iostream>
using namespace std;
class student{
    
    string name;
    string registration_number;
    float marks;
   public:
   void input();
   void get();
    
    
   
};
void student::input(){
        cout<<"ENTER THE NAME : ";
        getline(cin,name);
        cout<<"ENTER THE REGISTRATION NUMBER : ";
        cin>>registration_number;
        cout<<"ENTER THE MARKS : ";
        cin>>marks;
        
    }
void student::get(){
        cout<<"NAME : "<<name<<endl;
        cout<<"REGISTRATION NUMBER : "<<registration_number<<endl;
        cout<<"MARKS : "<<marks<<endl;
    }
int main(){
    
    student arr;
    
    
    arr.input();
    cin.ignore();
    cout<<"\nOUTPUT DETAILS : \n";
    arr.get();
    
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	