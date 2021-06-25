#include<iostream>
using namespace std;
class X{
	private:
		X(){
			cout<<"Private Constructor"<<endl;
		}
		friend class Y;
};
class Y{
	public:	
		Y(){
			X obj;
			cout<<"Public Constructor"<<endl;
		}
};
int main(){
	Y obj1;
	return 0;
}