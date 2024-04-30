#include<iostream>
using namespace std;
class staff{
    string name;
    string designation;
    public:
    void input(){
        cout<<"ENTER THE NAME : ";
        getline(cin,name);
        
        cout<<"ENTER THE DESINATION : ";
        getline(cin,designation);
    }
    void output(){
        cout<<"NAME IS : "<<name<<endl;
        cout<<"DEGIGNATION IS : "<<designation<<endl;
    }
};
class DEP:public staff{
    string department;
    double salary;
    public:
    void input1(){
        cout<<"ENTER THE DEPARTMENT : ";
        getline(cin,department);
        cout<<"ENTER THE SALARY : ";
        cin>>salary;
        cin.ignore();
    }
    void output1(){
        cout<<"DEPARTMENT IS : "<<department<<endl;
        cout<<"SALARY IS : "<<salary<<endl;
    } 
};
class AWARD:public DEP{
   
    
    string award;
    public:
    
    void input2(){
        cout<<"ENTER THE AWARD : ";
        getline(cin,award);
       
    }
    void output2(){
        cout<<"AWARD IS : "<<award<<endl;

    } 
};


int main(){
    AWARD employee;
    employee.input();
    employee.input1();
    employee.input2();
    cout<<"\nSTAFF DETAILS :\n";
    employee.output();
    employee.output1();
    employee.output2();
    return 0;
}

