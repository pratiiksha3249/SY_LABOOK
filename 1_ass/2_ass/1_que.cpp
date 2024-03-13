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


// #include<iostream>
// using namespace std;

// inline float add(float w,float h){
// return w+h;
// }
// inline float sub(float w,float h){
// return w-h;
// }
// inline float multi(float w,float h){
// return w*h;
// }
// inline float div(float w,float h){
// return w/h;
// }
// int main(){
// float w ,h;
// cout<<"\n enter two no w h:";
// cin>>w>>h;
// cout<<"\n addtion:"<<add(w,h)<<endl;
// cout<<"\n sub:"<<sub(w,h)<<endl;
// cout<<"\n multiplication:"<<multi(w,h)<<endl;
// cout<<"\n division:"<<div(w,h)<<endl;

// }