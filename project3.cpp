#include<iostream>
using namespace std;
class account{
    int acno1,acno2,ifsc,pin,amount,wamount,wadd,pin2;
    char name[100];
    public:
    int choice;
    void newaccount();
    void add();
    void withdraw();
    void display();
    void accountstatus();
    void checkstatus();
};
void account :: newaccount(){
     cout<<"                HDFC bank              "<<endl<<endl<<endl<<endl;
     cout<<"---------ACCOUNT REGISTRATION FORM---------"<<endl;
     cout<<"Enter the account number: ";
     cin>>acno1;
     cout<<"Enter the IFSC code: ";
     cin>>ifsc;
     cout<<"Enter your name: ";
     cin.ignore();
     cin.get(name,100);
     cout<<"Enter the amount with which you wnat to start, minimum amount is 500:";
     cin>>amount;
     cout<<"Set a four digit PIN for your account: ";
     cin>>pin;
     cout<<endl<<endl<<endl;
     cout<<"Account created successfully."<<endl;
}
void account :: add(){
    cout<<"Enter your account number: ";
    cin>>acno2;
    if(acno2 == acno1){
        cout<<"-------ACCOUNT STATUS--------"<<endl;
        cout<<"Account number: "<<acno1<<endl;
        cout<<"IFSC code: "<<ifsc<<endl;
        cout<<"Name registered with account: "<<name<<endl;
        cout<<"Avalaible amount in your account: "<<amount<<endl<<endl<<endl;
        cout<<"Enter the amount you want to deposit: ";
        cin>>wadd;
        cout<<"Enter the pin: ";
        cin>>pin2;
        if(pin2 == pin){
        amount = amount + wadd;
        cout<<"Rs"<<wadd<<" deposited successfully to your account with account number "<<acno1<<endl;
        cout<<"Available amount in your account: "<<amount;
        }
        else{
            cout<<"Incorrect pin!!"<<endl;
        }
    }
    else{
        cout<<"No accounts registered with this account number!!"<<endl;
        exit;
    }
}
void account :: withdraw(){
    cout<<"Enter the account number: ";
    cin>>acno2;
    if(acno2 == acno1){
        cout<<" -----------ACCOUNT STATUS------------"<<endl;
        cout<<"Account number: "<<acno1<<endl;
        cout<<"IFSC code: "<<ifsc<<endl;
        cout<<"Name registered with account: "<<name<<endl;
        cout<<"Avalaible amount in your account: "<<amount<<endl<<endl<<endl;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>wamount;
        cout<<"Enter the pin: ";
        cin>>pin2;
        if(pin2 == pin){
        amount = amount - wamount;
        cout<<wamount<<" withdrawed successfully from account number "<<acno1<<endl;
        cout<<"Available amount in your account: "<<amount<<endl<<endl<<endl;
        }
        else{
            cout<<"Incorrect pin!!"<<endl;
        }
    }
    else{
        cout<<"No account registered with this account number!!"<<endl;
        exit;
    }
}
 void account :: accountstatus(){
    cout<<"Enter the account number: ";
    cin>>acno2;
    if(acno2 == acno1){
        cout<<" -----------ACCOUNT STATUS------------"<<endl;
        cout<<"Account number: "<<acno1<<endl;
        cout<<"IFSC code: "<<ifsc<<endl;
        cout<<"Name registered with account: "<<name<<endl;
        cout<<"Avalaible amount in your account: "<<amount<<endl<<endl<<endl;
 }   else{
     cout<<"Incorrect pin!!!"<<endl;
     
 }
}
void account :: display(){
    cout<<"           HDFC BANK           "<<endl<<endl<<endl<<endl;
    cout<<"   -- Main menu -- "<<endl<<endl<<endl;
    cout<<"1. Register new account"<<endl<<endl;
    cout<<"2. Deposit money to your account "<<endl<<endl;
    cout<<"3. Withdraw money form your account"<<endl<<endl;
    cout<<"4. Get the account status"<<endl<<endl;
   
}
void account :: checkstatus(){
     cout<<"Choose your option:";
    cin>>choice;
  switch(choice){
        case 1:
        newaccount();
        display(); 
        break;
        case 2:
        add();
        display();     
        break;
        case 3:
        withdraw();
        display();
        break;
        case 4:
        accountstatus();
        display();
        break;
        default:
        cout<<"Invalid option!!";
    }
 }
 int main(){
   int i,choicee;
    account acc;
    acc.display();
    cout<<"Enter a option:";
    cin>>choicee;
    switch(choicee){
        case 1:
        acc.newaccount();
        acc.display();
        acc.checkstatus();
        break;
        case 2:
        acc.add();
        acc.display();
        acc.checkstatus();
        break;
        case 3:
        acc.withdraw();
        acc.display();
        acc.checkstatus();
        break;
        case 4:
        acc.accountstatus();
        acc.display();
        acc.checkstatus();
        break;
        default:
        cout<<"Invalid option !!";
    }
    return 0;
}
