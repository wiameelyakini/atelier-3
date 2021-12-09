#include<iostream>
using namespace std;
class Mere{
    public:
    	Mere(){}
    	void diplay(){
    		cout<<"je suis la mère"<<endl;
		}
		
};
class fille : public Mere {
	public:
		fille():Mere()
		{}
		void display()
		{
			cout<<"je suis la fille"<<endl;
		}
		};
int main(){
	fille f;
	f.display();
}



