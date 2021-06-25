#include <iostream>
using namespace std;
class F{
    private: int a;
    public:
    friend F read(F);
    friend int get(F);
};
class S{
    private: int a;
    public:
    friend S read(S);
    friend int get(S);
};
class T{
    private: int a;
    public:
    friend T read(T);
    friend int get(T);
};
F read(F x){
    int item;
    cout<<"Enter the value of a in class F "<<endl;
    cin>>item;
    x.a=item;
    return x;
}
int get(F x){
    return x.a;
}
S read(S x){
    int item;
    cout<<"Enter the value of a in class S "<<endl;
    cin>>item;
    x.a=item;
    return x;
}
int get(S x){
    return x.a;
}
T read(T x){
    int item;
    cout<<"Enter the value of a in class T "<<endl;
    cin>>item;
    x.a=item;
    return x;

}
int get(T x){
    return x.a;
}
int main(){
    F first; 
    S second; 
    T third;  
    first=read(first);
    second=read(second);
    third=read(third);
    cout<<"The value for a in class F : "<<get(first)<<endl;
    cout<<"The value for a in class S : "<<get(second)<<endl;
    cout<<"The value for a in class T : "<<get(third)<<endl;
    return 0;
}