#include<iostream>
using namespace std;
class empolyee{
    int emp_id;
    string name,mail,destination;
    public:
    empolyee(int x,string y,string z,string a){
        emp_id=x;
        name=y;
        mail=z;
        destination=a;
    }
    void display(){
        cout<<"EMPLOYEE ID : "<<emp_id<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"EMAIL ID : "<<mail<<endl;
        cout<<"DESTINATION : "<<destination<<endl;
    }
};
int main(){
    int x;
    string y,z,a;
    for (int i=0;i<1;i++){
        cout<<"ENTER THE EMPOLYEE ID: ";
        cin>>x;
        cout<<"ENTER THE EMPOLYEE NAME: ";
        cin.ignore();
        getline(cin,y);
        cout<<"ENTER THE EMPOLYEE EMAIL ID : ";
        cin>>z;
        cout<<"ENTER THE EMPOLYEE DESTINATION : ";
        cin>>a;
    }
    empolyee arr(x,y,z,a);
    cout<<"\nOUTPUT IS : "<<endl;
    arr.display();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	





/*

#include<iostream>
using namespace std;
class empolyee{
    int emp_id;
    string name;
    string mail;
    string destination;
    public:
    empolyee(int x,string y,string z,string a){
        
        emp_id=x;
        name=y;
        mail=z;
        destination=a;
    }
    void display(){
        cout<<"EMPLOYEE ID : "<<emp_id<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"EMAIL ID : "<<mail<<endl;
        cout<<"DESTINATION : "<<destination<<endl;
    }
};
int main(){
    empolyee arr1(12,"Ashish Singh","ashish.12@gmail.com","Vellore");
    empolyee arr2(21,"Abhinav Shrivastva","abhinav.21@gmail.com","Mumbai");
    empolyee arr3(31,"RAJ Malhotra","raj.31@gmail.com","Lucknow");
    
    cout<<"OUTPUT IS : "<<endl;
    arr1.display();
    cout<<endl;
    arr2.display();
    cout<<endl;
    arr3.display();
    
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	

*/