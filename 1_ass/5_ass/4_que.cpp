// Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily 
// rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary) 
// from Employee. Write a C++ menu driven program to:
// i.Accept the details of ‘n’ employees and calculate the salary.
// ii. Display the details of ‘n’ employees.
// iii. Search a given Employee.
#include<iostream>
using namespace std;
int n;

class Employee{
public: int eno,sal;
         char ename[20];
         void Accepte(){
                    cout<<"\n enter eno ename =:";
                    cin>>eno>>ename;
         }

};
class Fulltime:public Employee{
    public: int daily_wages,no_of_days;
    void Acceptf(){
            cout<<"enter daily_wages and no_of_days=:";
            cin>>daily_wages>>no_of_days;

    }
    void calf(){
        
        cout<<"emp sal="<<daily_wages*no_of_days<<endl;
    }
    void dispf(){
        cout<<"emp no="<<eno<<endl;
        cout<<"emp name="<<ename<<endl;
        cout<<"emp daily_wages="<<daily_wages<<endl;
        cout<<"emp no of days="<<no_of_days<<endl;
        

    }

    void maxf(){


    }
};

class Parttime:public Employee{
public:  int no_of_hours,hourly_wages,sal;
              void Acceptp(){
                cout<<"enter no_of_hours and hourly_wages=:";
                cin>>no_of_hours>>hourly_wages;
              }

              void calp(){
                        cout<<"emp sal="<<no_of_hours*hourly_wages<<endl;

              }
              void dispp(){
                
        cout<<"emp no="<<eno<<endl;
        cout<<"emp name="<<ename<<endl;
        cout<<"emp no_of_hours ="<<no_of_hours<<endl;
        cout<<"emp hourlv wages="<<hourly_wages<<endl;
              }

            //   void maxp(){
            //     int max=0;
            //            for(int i=0;i<n;i++){
            //                  if(ob[i].sal>max){
            //                     max=ob[i];
            //                  }
            //            }
            //            cout<<"max sal emp is="<<ob[i];

            //   }
   
};

int main(){



// Parttime ob1[n];
int ch;
Fulltime ob[100];
do{
cout<<"1-enter n rec 2-display all rec 3-cal  sal   4-display max sal emp...... ";
 cin>>ch;
 switch (ch)
 {
case 1: cout<<"\n enter limit for records of emp..." ;
         cin>>n;
  for( int i=0;i<n;i++)
        ob[i].Accepte();
break;

case 2: 
 for( int i=0;i<n;i++)
        ob[i].dispf();

break;
case 3: 
 for( int i=0;i<n;i++)
        ob[i].Acceptf();

 for( int i=0;i<n;i++)
        ob[i].calf();

break;
//case 4:
// for(int i=0;i<1;i++)
//        ob[i].maxf();
//  }
 }
 
  }while(ch!=6);


    return 0;
}












// for( int i=0;i<n;i++){
//         ob[i].Accepte();
       
// }
// for( int i=0;i<n;i++){
//         ob[i].Accepte();
// }

// for( int i=0;i<n;i++){
//         ob[i].Acceptf();
// }

// for( int i=0;i<n;i++){
//         ob[i].dispf();
// }

