#include<iostream>
using namespace std;
class Bank{
    public:
                 int bcont_no,back_no,bank_bal;
                 char holdler_name[20],addr[20],cont_no[10];
    void accept(){
        cout<<"enter bank account no:"<<endl;
        cin>>bcont_no ;
        cout<<"enter bank holder name :"<<endl;
        cin>> holdler_name;
        cout<<"enter bank address:"<<endl;
        cin>> addr;
        cout<<"enter bank cont no :"<<endl;
        cin>> cont_no;
        cout<<"enter bank balance :"<<endl;
        cin>>bank_bal ;
    }

    void disp(){
                cout<<"enter bank account no:"<<endl;
        cout<<bcont_no ;
        cout<<"enter bank holder name :"<<endl;
        cout<<holdler_name;
        cout<<endl;
        cout<<"enter bank address:"<<endl;
        cout<<addr;
        cout<<endl;
        cout<<"enter bank cont no :"<<endl;
        cout<<endl;
        cout<<cont_no;
        cout<<"enter bank balance :"<<endl;
        cout<<endl;
        cout<<bank_bal ;
    }
};

int main(){
Bank ob;
ob. accept();
cout<<endl;
cout<<endl;
ob. disp();
    return 0;
}