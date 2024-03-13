#include<iostream>
using namespace std;

class circle{
public:
       
void calculate(float r=3.4f);
void disp(float r=3.4f);

};

void  circle::calculate(float r){
     float a=3.14*r*r;
         cout<<"area of circle:"<<a<<endl;

}

void circle::disp(float r){
         float c=2*3.14*r;

    cout<<"curcomferance of circle:"<<c<<endl;

}
int main(){
circle ob;
ob.calculate();
ob.disp();


}