#include<iostream>
using namespace std;
class Course{
    protected:
    string code;
    string instructor;
    public:
    Course(string code,string instructor):code(code) ,instructor(instructor){}
        virtual void displayinfo()=0;
        virtual void specialFunctionality()=0;
    };
class lecture : public Course{
    private:
    int maxenrollment;
    public:
    lecture(string code,string instructor,int maxenrollment):Course(code,instructor),maxenrollment(maxenrollment){}
        void displayinfo() override{
            cout<<"COURSE CODE : "<<code<<endl;
            cout<<"INSTRUCTOR : "<<instructor<<endl;
            cout<<"MAX ENROLLMENT : "<<maxenrollment<<endl;
        }
        void specialFunctionality() override{
            cout<<"CHECKING ENROLLMENT STATUS FOR LECTURE \n";
        }
    };
class seminar : public Course{
    string topic;
    public:
    seminar(string code,string instructor,string topic):Course(code,instructor),topic(topic){}
        void displayinfo() override{
            cout<<"COURSE CODE : "<<code<<endl;
            cout<<"INSTRUCTOR : "<<instructor<<endl;
            cout<<"TOPIC : "<<topic<<endl;
        }
        void specialFunctionality() override{
            cout<<"STATUS FOR SEMINAR \n";
        }	 	  	 	   	  	   	    	 	   	     	 	
    
};
class lab : public Course{
    string equipment;
    public:
    lab(string code,string instructor,string equipment):Course(code,instructor),equipment(equipment){}
        void displayinfo() override{
            cout<<"COURSE CODE : "<<code<<endl;
            cout<<"INSTRUCTOR : "<<instructor<<endl;
            cout<<"EQUIPMENT : "<<equipment<<endl;
        }
        void specialFunctionality() override{
            cout<<"LISTING EQUIPMENT FOR LAB \n";
        }
    
};

int main(){
    Course* courses[3];
    courses[0]=new lecture("CSCI101","DR.SMITH",1000);
    courses[1]=new seminar("ENGL102","DR.Johnson","ENGLISH");
    courses[2]=new lab("CHEM103","DR.BROWN","LAB COATS");
    
    for(int i=0;i<3;i++){
        courses[i]->displayinfo();
        courses[i]->specialFunctionality();
        cout<<endl;
    }
    for(int i=0;i<3;i++){
       delete courses[i];
    }
    
    return 0;
}
	 	  	 	   	  	   	    	 	   	     	 	
