#include<iostream>
using namespace std;
class staff{
    protected:
    string name;
    string designation;
    public:
    void putdetails(){
        cout<<"ENTER THE NAME : ";
        cin>>name;
        cout<<"ENTER THE DESIGNATION : ";
        cin>>designation;
    }
    void getdetails(){
        cout<<"NAME IS : "<<name<<endl;
        cout<<"DESIGNATION IS : "<<designation<<endl;
    }
};
class SALARY : public staff{
    protected:
    string department;
    float salary;
    public:
    void putsalary(){
        putdetails();
        cout<<"ENTER THE DEPARTMENT : ";
        cin>>department;
        cout<<"ENTER THE SALARY : ";
        cin>>salary;
    }
    void getsalary(){
        getdetails();
        cout<<"DEPARTMENT IS : "<<department<<endl;
        cout<<"SALARY IS : "<<salary<<endl;
    }
    
};
class Award : public SALARY{	 	  	 	   	  	   	    	 	   	     	 	
    protected:
    string award;
    public:
    void putAward(){
        putsalary();
        cout<<"ENTER THE AWARD : ";
        cin>>award;
    }
    void getaward(){
        getsalary();
        cout<<"AWARD IS : "<<award<<endl;
    }
    
};
int main(){
    Award s1;
    s1.putAward();
    cout<<"\nSTAFF DETAILS GIVEN BELOW :\n";
    s1.getaward();
    return 0;
}