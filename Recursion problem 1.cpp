#include<iostream>
using namespace std;
void menu(){
    int choice;
    cout<<"\n\n====RESTAURANT MENU====";
    cout<<"\n1.PIZZA";
    cout<<"\n2.BURGER";
    cout<<"\n3.Pasta";
    cout<<"\n4.Exit";

    cout<<"\nEnter your choice:";
    cin>>choice;

    if(choice==1){
        cout<<"You selected pizza";
        menu();
    }
    else if(choice==2){
        cout<<"You selected burger";
        menu();
    }
    else if(choice==3){
        cout<<"You selected pasta";
        menu();
    }
    else if(choice==4){
        cout<<"\nThank you";
    }
    else{
        cout<<"\nInvalid choice";
       menu();     
    }
    
}
int main(){
    menu();
    return 0;
}
