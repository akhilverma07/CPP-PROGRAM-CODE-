#include<iostream>
using namespace std;
class student{
    
    string name;
    string registration_number;
    float marks;
    
   public:
    float totalmarks;
    void input(){
        cout<<"ENTER THE NAME : ";
        cin.ignore();
        getline(cin,name);
        cout<<"ENTER THE REGISTRATION NUMBER : ";
        cin>>registration_number;
        cout<<"ENTER THE MARKS : ";
        cin>>marks;
   }
    void total(){
       totalmarks += marks;
   }
    void get(){
        cout<<"NAME: "<<name<<endl;
        cout<<"REGISTRATION NUMBER :"<<registration_number<<endl;
        cout<<"MARKS : "<<marks<<endl;
    
    }
   
};
int main(){
    int num;
    cout<<"ENTER THE NUMBER OF STUDENT : ";
    cin>>num;
    student arr[num];
    for(int i=0;i<num;i++){
        arr[i].input();
    }	 	  	 	   	  	   	    	 	   	     	 	
    for(int i=0;i<num;i++){
        arr[i].total();
    }
    float totalmarks=0;
    cout<<"\nDETAILS :\n";
    for(int i=0;i<num;i++){
        arr[i].get();
        totalmarks +=arr[i].totalmarks;
        cout<<endl;
    }
    
    float average=totalmarks/num;
    cout<<"\nAVERAGE OF ALL STUDENT MARKS : "<<average;
  
    
    return 0;
}