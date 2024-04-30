/*
#include<iostream>
using namespace std;
class room_reservation{
    static int roomcount;
    int roomNumber;
    string name;
    
    public:
    void reservation();
    void display();
    static int getroomcount();
      
};
int room_reservation::roomcount=0;
void room_reservation::reservation(){
    cout<<"ENTER THE ROOM NUMBER : ";
    cin>>roomNumber;
    cout<<"ENTER THE NAME : ";
    cin>>name;
    
    roomcount++;
}
void room_reservation::display(){
    cout<<"ROOM NUMBER : "<<roomNumber<<endl;
    cout<<"NAME : "<<name<<endl;
    
}
int room_reservation::getroomcount(){
    return roomcount;
}
int main(){
    room_reservation room1;
    room1.reservation();
    room_reservation room2;
    room2.reservation();
    room_reservation room3;
    room3.reservation();
    room_reservation room4;
    room4.reservation();
    cout<<"\nDISPLAY ALL DETAILS: \n";
    room1.display();
    room2.display();
    room3.display();
    room4.display();
    cout<<"\nCOUNT : "<<room_reservation::getroomcount();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
*/
#include<iostream>
using namespace std;
class room_reservation{
    static int roomcount;
    int roomNumber;
    string name;
    
    public:
    void reservation(int roomNumber,string name){
        this->roomNumber=roomNumber;
        this->name=name;
        roomcount++;
}
    static int getroomcount(){
    return roomcount;
}
    void display(){
    cout<<"ROOM NUMBER : "<<roomNumber<<endl;
    cout<<"NAME : "<<name<<endl;
    
}
};
int room_reservation::roomcount=0;

int main(){
    room_reservation room1;
    room1.reservation(102,"JOHN ALEXA");
    room_reservation room2;
    room2.reservation(103,"MEGHA SHRI");
    
    cout<<"DISPLAY ALL DETAILS: \n";
    room1.display();
    room2.display();
    cout<<"\nCOUNT : "<<room_reservation::getroomcount();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
