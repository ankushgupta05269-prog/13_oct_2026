#include<iostream>
using namespace std;
class student{
    public: //overloading
    void add(int a){
        cout<<"value is a:"<<a;
    };
    void add (int a,int b){
        cout<<"sum of a & b is "<<a+b;
    };
    void add(int a,int b,int c){
        cout<<"sum of a & b & c is "<<a+b+c;
    }
};
int main(){
    student obj;
    obj.add(10);
    obj.add(10,20);
    obj.add(10,20,30);
    return 0;
}