#include<iostream>
using namespace std;
void showcase(){
    cout<<"\n***********MENU***********\n";
    cout<<"1.  BALANCE  "<<endl;
    cout<<"2.  DEPOSIT  "<<endl;
    cout<<"3.  WITHDRAW  "<<endl;
    cout<<"4.  EXIT  "<<endl;
}
int main(){
    int option;
    double balance =1000;
do{
    showcase();
    cout<<"CHOOSE OPTION : ";
    cin>>option;
    system("cls");
    switch (option){
    case 1:
        cout<<"BALANCE IS : "<<balance <<" $\n\n";
        break;
    case 2:
        double deposit;
        cout<<"DEPOSIT MONEY :";
        cin>>deposit;
        if(deposit < 0){
            cout<<"INVALID AMOUNT !!\n\n";
        }
        else{
           balance +=deposit;
           cout<<"DEPOSIT SUCCESSFULLY !!\n\n";
        }
        break;
    case 3:
        double withdraw;
        cout<<"WITHDRAW MONEY :";
        cin>>withdraw;
        if(withdraw < 0){
            cout<<"INVALID AMOUNT !!\n\n";
        }
        else if(withdraw <=balance){
             balance -=withdraw;
        }
        else{
            cout<<"NOT ENOUGH BALANCE !!\n\n";
        }
       break;
       case 4:
            cout<<"THANK YOU FOR VISTING ! \n\n";
            break;
        default:
            cout<<"PLEASE CHOOSE VALID OPTION !!! \n\n";
    }
}while(option !=4);
    return 0;
}