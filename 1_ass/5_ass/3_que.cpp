// Design two base classes Personnel (name, address, email-id, birth date) and Academic 
// (marks in tenth, marks in twelth, class obtained). Derive a class Bio-data from both these 
// classes. Write a C++ program to prepare a bio-data of a student having Personnel and 
// Academic information.


#include<iostream>
using namespace std;
class Personnel{
       public: char name[20],add[20],email[20],DOB[20];
       void acceptp(){
        cout<<"\n enter name add email DOB=:";
        cin>>name>>add>>email>>DOB;
       }

};
class Academic {
public: int tenm,twelthm,pclass;
        void accepta(){
            cout<<"enter marks of tenth twelth pclass=:";
            cin>>tenm>>twelthm>>pclass;
        }



};

class bio_data:public Personnel,public Academic{
           public:
      void P_data(){
            cout<<"\n personal info of student as name add email DOB=:"<<name<<"\t"<<add<<"\t"<<"\t"<<email<<"\t"<<DOB;
            
            cout<<"\n";
        cout<<" academic infor of student as marks of tenth twelth pclass="<<tenm<<"\t"<<twelthm<<"\t"<<pclass;
       
      }

};

int main(){

bio_data ob;
ob.acceptp();
ob.accepta();
ob.P_data();


}