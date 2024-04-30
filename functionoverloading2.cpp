#include<iostream>
using namespace std;
class Factor{
    public:
    virtual bool isfactor(int n,int m){
        return (m%n==0);
    }
};
class Divisibleby2 : public Factor{
    public:
    bool isfactor(int n,int m) override{
        return (m%2==0);
    }
};

class Divisibleby3 : public Factor{
    public:
    bool isfactor(int n,int m) override{
        return (m%3==0);
    }
};

int main(){
    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;
    Divisibleby2 obj1;
    Divisibleby3 obj2;
    
    bool isDivisibleby6=obj1.isfactor(2,num) && obj2.isfactor(3,num);
    if (isDivisibleby6){
        cout<<num<<" is divisible by 6.\n";
    }
    else{
        cout<<num<<" is not divisible by 6.\n";
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	

