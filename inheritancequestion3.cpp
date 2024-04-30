#include<iostream>
using namespace std;
class Member{
    string name;
    int age;
    string phone_number;
    string address;
    float salary;
    
    public:
    void putdetails(){
        cout<<"ENTER THE NAME : ";
        cin>>name;
        cout<<"ENTER THE AGE : ";
        cin>>age;
        cout<<"ENTER THE PHONE NUMBER : ";
        cin>>phone_number;
        cout<<"ENTER THE ADDRESS : ";
        cin>>address;
        cout<<"ENTER THE SALARY : ";
        cin>>salary;
    }
    void getdetails(){
        cout<<"NAME IS : "<<name<<endl;
        cout<<"AGE IS : "<<age<<endl;
        cout<<"PHONE NUMBER IS : "<<phone_number<<endl;
        cout<<"ADDRESS IS : "<<address<<endl;
        cout<<"SALARY IS : "<<salary<<endl;
    }
};
class Employee : public Member{
    string specialization;
    string department;
    public:
    void putEmployee(){
        
        putdetails();
        cout<<"ENTER THE SPECIALIZATION : ";
        cin>>specialization;
        cout<<"ENTER THE DEPARTMENT: ";
        cin>>department;
    }	 	  	 	   	  	   	    	 	   	     	 	
    void getEmployee(){
       
        getdetails();
        cout<<"SPECIALIZATION IS : "<<specialization<<endl;
        cout<<"DEPARTMENT IS : "<<department<<endl;
    }
    
};
class Manager : public Member{
    string specialization;
    string department;
    public:
    void putmanager(){
        
        putdetails();
        cout<<"ENTER THE SPECIALIZATION : ";
        cin>>specialization;
        cout<<"ENTER THE DEPARTMENT: ";
        cin>>department;
    }
    void getmanager(){
        
        getdetails();
        cout<<"SPECIALIZATION IS : "<<specialization<<endl;
        cout<<"DEPARTMENT IS : "<<department<<endl;
    }
};
int main (){
    Employee E1;
    cout<<"ENTER THE EMPLOYEE DETAILS : \n";
    E1.putEmployee();
    Manager M1;
    cout<<"ENTER THE MANAGER DETAILS : \n";
    M1.putmanager();
    cout<<"\nTHE EMPLOYEE DETAILS : \n";
    E1.getEmployee();
    cout<<"\nTHE MANAGER DETAILS : \n";
    M1.getmanager();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	