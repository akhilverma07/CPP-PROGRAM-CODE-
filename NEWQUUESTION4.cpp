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
    int num;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
    student arr[num];
    cin.ignore();
    for(int i=0;i<num;i++){
        arr[i].input();
        cin.ignore();
    }	 	  	 	   	  	   	    	 	   	     	 	
    cout<<"\nOUTPUT DETAILS : \n";
    for(int i=0;i<num;i++){
        arr[i].get();
    }
    
    return 0;
}