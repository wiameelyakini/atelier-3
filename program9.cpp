#include<iostream>
using namespace std;

class Test {
	public :
		      static int cmp;
		      void call()
		      {
		      	cmp++;
		      	cout << "J'ai été appelé : " << cmp << endl;
			  }
};

Test::cmp=0;

int main()
{
    Test T1,T2;
	T1.call();
	T2.call();
}
