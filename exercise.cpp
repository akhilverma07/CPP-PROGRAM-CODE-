/*
/ factorial and binomial cofficient calculate code
#include<iostream>
using namespace std;
int factorial(int num){
    int a;
    if(num<=1){
        return 1;
    }
    else{
       a= num*factorial(num-1);
    }
    return a;
}
int binomial(int num,int r){
    int a=factorial(num);
    int b=factorial(r);
    int c=factorial(num-r);
    return a/(b*c);
    }
int main(){
    int d=binomial(5,2);
    cout<<d;

    return 0;
}

//fibonaie series
#include<iostream>
using namespace std;
int fibona(int n)
{
    if(n<2){
        return n;
    }
    return fibona(n-2)+fibona(n-1);
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
void prime(int n){
    int count =0;
    if(n>0){
        for(int i=2;i<n;i++){
            if(n%i==0){
                count += 1;
            }
        }
    }else{
        cout<<"NUMBER IS LESS THEN 1 \n";
    }
    if(count ==0){
        cout<<"NUMBER IS PRIME \n";
    }else{
        cout<<"NOT PRIME NUMBER\n";
    }
}

void invertedstrar(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
              cout<<  "* ";   
        }
        cout<<endl;
    }
   // cout<<endl;
}


void upperstrar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
              cout<<  "* ";   
        }
        cout<<endl;
    }
    //cout<<endl;
}
void reverse(int n){
    int i=n;
    int reve=0;
    while(i>0){
        int last=i%10;
        i /=10;
        reve=(reve*10)+last;
        
    }
    cout<<reve<<endl;
}

void uppernumber(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
    }
}
//hollow cyclinder pattern 
void hollowcyclinder(int row,int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i == 1 || i == row || j == 1 || j == col){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<"\n";
    }
}
int main(){

    //FACTORIAL OF A NUMBER CODE
    int number;
    cout<<"ENTER THE NUMBER FOR FACTORIAL : ";
    cin>>number;
    cout<<"THE FACTORAIL OF "<<number<<" IS : "<<factorial(number)<<endl;


    //FIBONACCI SERIES CODE
    int number1;
    cout<<"ENTER THE TERMS YOU WANT FOR FIBONACCI SERIES : ";
    cin>>number1;
    cout<<"THE FIBONACCO SERIES OF : ";
    for(int i=0;i<number1;i++){
        cout<<fibona(i)<<" ";
    }
    


    //PRIME NUMBER CHECK CODE
    int number2;
    cout<<"ENTER THE NUMBER FOR CHECKING NUMBER IS PRIME OR NOT : ";
    cin>>number;
    prime(number2);
    cout<<endl;


    //REVERSE A NUMBER
    int number4;
    cout<<"ENTER THE NUMBER : ";
    cin>>number4;
    reverse(number4);

    //PATTERN PRINTING
    
    int number3;
    cout<<"ENTER THE NUMBER FOR  PATTERN : ";
    cin>>number3;
    invertedstrar(number3);
    upperstrar(number3);
    uppernumber(number3);
    hollowcyclinder(4,5);


//upper star
*
**
***
****
for(int i=1;i<=4;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}
//reverse star this type print code
****
***
**
*
for(int i=1;i<=4;i++){
    for(int j=0;j<4-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

//number print this type print code
1
12
123
1234
for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}


this type print code
A
BC
DEF
GHIJ

char ch='A';
for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
}
//this type print code
   *
  **
 ***
****

void inverpattern(int num){
    for(int i=1;i<=num;i++){
      for(int j=1;j<=num-i;j++){
            cout<<(" ");
      }
      for(int Z=1;Z<=i;Z++){
                cout<<("*");
        }
        cout<<"\n";
    }
}


//this type print code
A
AB
ABC
ABCD

for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
        cout<<char(j+64);
    }
    cout<<endl;
}



 return 0;
}


#include <iostream>
using namespace std;
class mammals{
    public:
   
    void printinfo1(){
        cout<<"I am mammal\n";
        
    }



};
class marineanimals{
    public:
    
    void printinfo2(){
        cout<<"I am a marine animal\n";
        
    }

};
class Bluewhale:public mammals,marineanimals{
    public:
    
    void printinfo(){
        printinfo1();
        printinfo2();
        cout<<"I belong to both the categories: Mammals as well as Marine Animals\n";
        
    }


};
int main(){
    Bluewhale object;
    object.printinfo();

    return 0;
}

#include<iostream>
using namespace std;
class circle{
    protected:
    float radius;
    float height;
    float length;
    public:
    void putinput(){
        cout<<"ENTER THE RADIUS : ";
        cin>>radius;
        cout<<"ENTER THE HEIGHT : ";
        cin>>height;
        cout<<"ENTER THE LENGTH : ";
        cin>>length;
    }
};
class cone : public circle{
    public:
    void putcone(){
        cout<<"ENTER THE CONE DETAILS : \n";
        putinput();
    }
    void getcone(){
        cout<<"THE CONE DETAILS : \n";
        cout<<"SURFACE AREA IS : "<<3.14*radius*length<<endl;
        cout<<"VOLUME IS : "<<0.5*3.14*radius*radius*height<<endl;
    }
};
class hemisphere : public cone{
    public:
    void puthemisphere(){
        cout<<"ENTER THE HEMISPHERE DETAILS : \n";
        putinput();
    }
    void gethemisphere(){
        cout<<"THE HEMISPHERE DETAILS : \n";
        cout<<"SURFACE AREA IS : "<<3*3.14*radius*radius<<endl;
         cout<<"VOLUME IS : "<<(2/3)*3.14*radius*radius*radius<<endl;
    }

};
class cylinder : public hemisphere{
     public:
    void putcylinder(){
        cout<<"ENTER THE CYLINDER DETAILS : \n";
        putinput();
    }
    void getcylinder(){
        cout<<"THE CYLINDER DETAILS : \n";
        cout<<"SURFACE AREA IS : "<<2*3.14*radius*(radius+height)<<endl;
         cout<<"VOLUME IS : "<<3.14*radius*radius*height<<endl;
    }


};
int main(){
    cylinder c1;
    c1.putcylinder();
    hemisphere c2;
    c2.puthemisphere();
    cone c3;
    c3.putcone();


    c1.getcylinder();
    c2.gethemisphere();
    c3.getcone();

    return 0;
}
*/

#include <iostream>
using namespace std;


int main(){
    
    return 0;
}