#include<iostream>
using namespace std;
class animal{
	protected:
		int age;
		string nom;
	public:
		animal(string nom,int age){
			this->nom=nom;
			this->age=age;
		}
	void set_value(int age){
		this->age=age;
	}
	void afficher(){
		cout<<"c est un animal, son nom "<<nom<<" et il a:"<<age<<" ans"<<endl;
	}
		 
};
class zebra:public animal{
	private:
		string origine;
	public:
		zebra(int age,string nom,string origine):animal(nom,age)
		{
			this->origine=origine;
		}
		void afficher()
		{
			animal::afficher();
			cout<<"sa race est :zebra"<<" et son origine"<<origine<<endl<<endl;
			
		}
};
class dolphin:public animal{
	private:
		string origine;
	public:
		dolphin(int age,string nom,string origine):animal(nom,age)
		{
			this->origine=origine;
		}
		void afficher()
		{
			animal::afficher();
			cout<<"sa race est : dolphin"<<"et son origine"<<origine<<endl<<endl;
			
		}
};
int main()
{
	zebra Z(4,"Nom1","afrique");
	dolphin D(2,"dodo","australie");
	Z.afficher();
	Z.set_value(13);
	Z.afficher();
	D.afficher();
	D.set_value(17);
	D.afficher();
}
