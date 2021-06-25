#include<iostream>
using namespace std;
class Main{
	private:
		int a, b;
		float x, y;
    public:
        void swap(float a, float b){
			a = a + b;
			b = a - b;
			a = a - b;
			cout<<a<<", "<<b<<endl;
		}
		void swap(int a, int b){
			a = a + b;
			b = a - b;
			a = a - b;
			cout<<a<<", "<<b<<endl;
		}
};
int main(){
	Main a;
    a.swap(1.2f,6.12f);
	a.swap(1,6);
	return 0;
}