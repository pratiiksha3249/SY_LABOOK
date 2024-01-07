#include<iostream>
using namespace std;

inline float area(float w,float h){
return w*h;
}

int main(){
float w ,h;
cout<<"\n enter width and hight for area of rectrangle....";
cin>>w>>h;
cout<<"\n area of rectrangle is..."<<area(w,h);
}