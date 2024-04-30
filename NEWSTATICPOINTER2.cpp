#include<iostream>
using namespace std;
class flight_reservation{
    static int flightcount;
    string flighno;
    string company;
    bool service_avalible;
    public:
    void reservation();
    void display();
    static int getflightcount();
      
};
int flight_reservation::flightcount=0;
void flight_reservation::reservation(){
    cout<<"ENTER THE FLIGHT NUMBER : ";
    cin>>flighno;
    cout<<"ENTER THE FLIGHT COMPANY NAME : ";
    cin>>company;
    cout<<"ENTER THE SERVICE AVALIBLE OR NOT,IF YES ENTER 1 OR ENTER 0 : ";
    cin>>service_avalible;
    flightcount++;
}
void flight_reservation::display(){
    cout<<"FLIGHT NUMBER : "<<flighno<<endl;
    cout<<"FLIGHT COMPANY NAME : "<<company<<endl;
    cout<<"FLIGHT SERVICE AVALIBLE : "<<service_avalible<<endl;
    
}
int flight_reservation::getflightcount(){
    return flightcount;
}
int main(){
    flight_reservation flight1;
    flight1.reservation();
    flight_reservation flight2;
    flight2.reservation();
    flight_reservation flight3;
    flight3.reservation();
    cout<<"\nDISPLAY ALL DETAILS: \n";
    flight1.display();
    flight2.display();
    flight3.display();
    
    cout<<"\nCOUNT : "<<flight_reservation::getflightcount();
}	 	  	 	   	  	   	    	 	   	     	 	