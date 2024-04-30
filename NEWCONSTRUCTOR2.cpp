#include<iostream>
using namespace std;
class RECTANGLE{
    float height,width,area,perimeter;
    
    public:
    RECTANGLE(){
        
        height=0;
        width=0;
        area=height*width;
        perimeter=2*(height+width);
    }
   
    RECTANGLE(float x,float y){
        
        height=x;
        width=y;
        area=height*width;
        perimeter=2*(height+width);
    }

    void display(){
        cout<<"HEIGHT : "<<height<<endl;
        cout<<"WIDTH : "<<width<<endl;
    }
    void getarea(){
        cout<<"AREA : "<<area<<endl;
    }
    void getperimeter(){
        cout<<"PERIMETER : "<<perimeter<<endl;
    }
};
int main(){
    float x=5;
    float y=50;
    RECTANGLE arr;
    cout<<"Default Constructor : "<<endl;
    arr.display();
    arr.getarea();
    arr.getperimeter();
    cout<<"\nParameterized Constructor  : "<<endl;
    RECTANGLE arr1(50,5);
    cout<<"\nOUTPUT IS : "<<endl;
    arr1.display();
    arr1.getarea();
    arr1.getperimeter();
    RECTANGLE arr2(45.7,2.5);
    cout<<"\nOUTPUT IS : "<<endl;
    arr2.display();
    arr2.getarea();
    arr2.getperimeter();
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	