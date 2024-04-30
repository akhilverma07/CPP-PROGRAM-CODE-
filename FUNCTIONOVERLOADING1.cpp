#include<iostream>
using namespace std;
class Booking{
    public:
    virtual void book()=0;
    virtual void view()=0;
    virtual void cancel()=0;
    virtual ~Booking() {}
};
class busbooking : public Booking{
    public:
    void book() override{
        cout<<"BUS TICKET BOOKED \n";
    }
    void view() override{
        cout<<"VIEWING BUS TICKET  \n";
    }
    void cancel() override{
        cout<<"CANCEL BUS TICKET \n";
    }
};
class trainbooking : public Booking{
    public:
    void book() override{
        cout<<"TRAIN TICKET BOOKED \n";
    }
    void view() override{
        cout<<"VIEWING TRAIN TICKET  \n";
    }
    void cancel() override{
        cout<<"CANCEL TRAIN TICKET \n";
    }
};
class moviebooking : public Booking{
    public:
    void book() override{
        cout<<"MOVIE TICKET BOOKED \n";
    }	 	  	 	   	  	   	    	 	   	     	 	
    void view() override{
        cout<<"VIEWING MOVIE TICKET  \n";
    }
    void cancel() override{
        cout<<"CANCEL MOVIE TICKET \n";
    }
};
int main(){
    Booking* bookingptr;
    bookingptr = new busbooking();
    bookingptr->book();
    bookingptr->view();
    bookingptr->cancel();
    delete bookingptr;
    
    bookingptr = new trainbooking();
    bookingptr->book();
    bookingptr->view();
    bookingptr->cancel();
    delete bookingptr;
    
    bookingptr = new moviebooking();
    bookingptr->book();
    bookingptr->view();
    bookingptr->cancel();
    delete bookingptr;
    
    return 0;
}

	 	  	 	   	  	   	    	 	   	     	 	
