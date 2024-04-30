#include<iostream>
using namespace std;
class student{
    float cgpa;
    string name;
    string reg_number;
    
    public:
    void getinput();
    
    void getoutput();
};
void student::getinput()
{
    cout<<"ENTER THE NAME : ";
    cin>>name;
    cout<<"ENTER THE REGISTRATION NUMBER : ";
    cin>>reg_number;
    cout<<"ENTER THE CGPA  : ";
    cin>>cgpa;
}  

void student::getoutput()
{
    if(cgpa >= 9){
       cout<<"NAME : "<<name<<endl;
       cout<<"REGISTRATION NUMBER : "<<reg_number<<endl;
       cout<<"CURRENT CGPA : "<<cgpa<<endl;
    
    }
}
int main(){
    int num,i;
    cout<<"ENTER THE NUMBER OF STUDENT : ";
    cin>>num;
     student arr[num];
    for(i=0;i<num;i++){	 	  	 	   	  	   	    	 	   	     	 	
        arr[i].getinput();
       
    }
    cout<<"\nSTUDENT DETAILS : \n";
    for(i=0;i<num;i++){
        arr[i].getoutput();
    }
    return 0;
}