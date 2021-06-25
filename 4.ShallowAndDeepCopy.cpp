#include<iostream>
using namespace std;
class Main{
	private:
		int x;
		int y;	
	public:
		Main(int a, int b){
			x = a;
			y = b;
		}	
		Main(Main& a){
			x = a.x;
			y = a.y;
		}	
		void display(){
			cout<<"x = "<<x<<", "<<"y = "<<y<<endl;
		}
};
int main(){
	int x, y;
	cout<<"Enter first and second number"<<endl;
	cin>>x >>y;	
	Main a1(x, y);
	a1.display();	
	cout<<"Shallow Copy" <<endl;
	Main a2 = a1;
	a2.display();	
	cout<<"Deep Copy" <<endl;
	Main a3(a1);
	a3.display();
	return 0;
}