#include<iostream>
using namespace std;
class EMPLOYEE{
    protected:
    string name;
    int emp_id;
    string address;
    string mail_id;
    string mobile_number;
    float basic_pay;

    public:
    double gross_salary;
    double net_salary;
    void putdetails(){
        cout<<"ENTER THE NAME : ";
        cin>>name;
        cout<<"ENTER THE ID : ";
        cin>>emp_id;
        cout<<"ENTER THE ADDRESS : ";
        cin>>address;
        cout<<"ENTER THE EMAIL ID : ";
        cin>>mail_id;
        cout<<"ENTER THE MOBILE NUMBER : ";
        cin>>mobile_number;
    }
    void paygeneratedslip(){
        double DA=0.9*basic_pay;
        double HRA=0.9*basic_pay;
        double PF=0.1*basic_pay;
        double staff_club=0.2*basic_pay;
        gross_salary=basic_pay+DA+HRA;
        net_salary=gross_salary-PF-staff_club;
    }
    void getdetails(){
        cout<<"NAME IS : "<<name<<endl;
        cout<<"ID IS : "<<emp_id<<endl;
        cout<<"ADDRESS IS : "<<address<<endl;
        cout<<"EMAIL ID IS : "<<mail_id<<endl;
        cout<<"MOBILE NUMBER IS : "<<mobile_number<<endl;
        cout<<"GROSS SALARY IS : "<<gross_salary<<endl;
        cout<<"NET SALARY IS : "<<net_salary<<endl;
    }	 	  	 	   	  	   	    	 	   	     	 	
    
};
class Programmer : public EMPLOYEE{
    public:
    void inputProgrammer(){
        putdetails();
        cout<<"ENTER THE BASIC PAY : ";
        cin>>basic_pay;
    }
    void getdetailsprogrammer(){
       paygeneratedslip();
       getdetails();
    }
};
class Assistant_Professor : public Programmer{
    public:
    void inputAssistant_Professor(){
        cout<<"ENTER THE ASSISTANT PROFESSOR DETAILS  \n";
        inputProgrammer();
    }
    void getdetailsAssistant_Professor(){
       paygeneratedslip();
       getdetails();
    }
};
class Associate_Professor : public Assistant_Professor{
    public:
    void inputAssociate_Professor(){
        cout<<"ENTER THE ASSOCIATE PROFESSOR DETAILS  \n";
        inputProgrammer();
    }
    void getdetailsAssociate_Professor(){
       paygeneratedslip();
       getdetails();
    }
    
};
class Professor : public Associate_Professor{	 	  	 	   	  	   	    	 	   	     	 	
    public:
    void inputProfessor(){
        cout<<"ENTER THE PROFESSOR DETAILS  \n";
        inputProgrammer();
    }
    void getdetailsProfessor(){
       paygeneratedslip();
       getdetails();
    }
    
};
int main(){
    Professor p1;
    cout<<"ENTER THE PROGRAMMER DETAILS  \n";
    p1.inputProgrammer();
    
    Assistant_Professor p2;
    p2.inputAssistant_Professor();
    
    Associate_Professor p3;
    p3.inputAssociate_Professor();
    
    Professor p4;
    p4.inputProfessor();
    
    cout<<"\n\nDETAILS OF ALL EMPOLYEE AND THIER SALARY DETAILS :\n\n";
    cout<<"\n PROGRAMMER DETAILS \n";
    p1.getdetailsprogrammer();
    cout<<"\n ASSISTANT PROFESSOR DETAILS \n";
    p2.getdetailsAssistant_Professor();
    cout<<"\n ASSOCIATE PROFESSOR DETAILS \n";
    p3.getdetailsAssociate_Professor();
    cout<<"\n PROFESSOR DETAILS \n";
    p4.getdetailsProfessor();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
