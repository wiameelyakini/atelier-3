#include<iostream>
using namespace std;
class Personne {
	private :
		      string nom;
		      string prenom;
		      string date_naissance;
	public:
		  Personne(string nom,string prenom,string date_naissance)
		   {
		   	this->nom=nom;
		   	this->prenom=prenom;
		   	this->date_naissance=date_naissance;
		   }
	    virtual void afficher()
	          {
	          	cout <<"Nom="<<nom<<" Prenom="<<prenom<<" date de naissance="<<date_naissance;
			  }
};

class Employe:public Personne {
	
	protected :
		        float salaire;
	public :
		     Employe(string nom,string prenom,string date_naissance,float salaire) : Personne(nom,prenom,date_naissance)
		     {
		     	this->salaire=salaire;
			 }
		void afficher()
		{
			Personne::afficher();
			cout <<" Salaire= "<<salaire <<" ";
		}
	
};

class Chef:public Employe{
	protected :
		        string service;
	public :
		    Chef(string nom,string prenom,string date_naissance,float salaire,string service) : Employe(nom,prenom,date_naissance,salaire)
		    {
		    	this->service=service;
			}
};
class Directeur:public Chef{
	protected:
		string societe;
		public:
			Directeur(string nom,string prenom,string date_naissance,float salaire,string service,string societe): Chef(nom,prenom,date_naissance,salaire,service)
			{
				this->societe=societe;
			}
};

int main()
{
	int i;
	Personne *T[5];
	T[0]=new  Personne("Nom1","Prenom1","Date1");
	T[1]=new Employe("Nom2","Prenom2","Date2",10000);
	
	for(i=0;i<2;i++)
	 {
	    T[i]->afficher();
		cout<<endl;	
	 }
	    
}
