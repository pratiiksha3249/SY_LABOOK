#include<iostream>
using namespace std;
class Myarray{
    public:
                 int *a,i,n;
    void accept(int n){
        this->n=n;
        a=new int[n];
        cout<<"enter n float no:";
        for(i=0;i<n;i++){
            cin>>a[i];

        }


    }
    void disp(){
        cout<<"alternative no is:";
        for(i=0;i<n;i=i+2){
         cout<<a[i]<<endl;
        }
    }

};
int main(){
Myarray ob;
ob.accept(5);
ob.disp();


}