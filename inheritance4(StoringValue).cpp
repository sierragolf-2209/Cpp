#include<iostream>
using namespace std;
class A{
	int a;
	public: A(){
		cout<<"is default of A";
	}
	A(int );
	void display();
};
A::A(int p){
	cout<<"in para of A";
	a=p;
}
void A::display(){
	cout<<a<<endl;
}
class B:public A{
	int b;
	public: B(int,int);
	void display();
};
B::B(int p,int q):A(p){
	cout<<"in para of B ";
	b=q;
}
void B::display(){
	A::display();
	cout<<b<<endl;
}
int main(){
	B bobj(10,20);
	bobj.display();
}
