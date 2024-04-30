#include<iostream>
using namespace std;
class student{
    string name;
    string reg_number;
    int marks1,marks2,marks3,total,average;
    public:
    void getinput();
    void calculate();
    void getoutput();
};
void student::getinput()
{
    cout<<"ENTER THE NAME : ";
    cin>>name;
    cout<<"ENTER THE REGISTRATION NUMBER : ";
    cin>>reg_number;
    cout<<"ENTER THE SUBJECT 1 MARKS : ";
    cin>>marks1;
    cout<<"ENTER THE SUBJECT 2 MARKS : ";
    cin>>marks2;
    cout<<"ENTER THE SUBJECT 3 MARKS : ";
    cin>>marks3;
   
}
void student::calculate()
{
    total=marks1+marks2+marks3;
    average=total/3;
}

void student::getoutput()
{
    cout<<"NAME : "<<name<<endl;
    cout<<"REGISTRATION NUMBER : "<<reg_number<<endl;
    cout<<"TOTAL : "<<total<<endl;
    cout<<"AVERAGE : "<<average<<endl;
}	 	  	 	   	  	   	    	 	   	     	 	
int main(){
    int i;
    student arr;
    
        arr.getinput();
        arr.calculate();
    
    cout<<"\nSTUDENT DETAILS : \n";
    
        arr.getoutput();

    return 0;
}