#include<iostream>
#include<cmath>
using  namespace std;

class Vecteur3D {
	private :
		      float x,y,z;
	public :
		    Vecteur3D(float x=0,float y=0,float z=0)
		    {
		    	this->x=x;
		    	this->y=y;
		    	this->z=z;
			}
		    Vecteur3D somme(Vecteur3D V)
		     {
		     	Vecteur3D  S;
		     		S.x=this->x+V.x;
		     		S.y=this->y+V.y;
		     		S.z=this->z+V.z;
		    
		        return S;
			 }
			 
			 float  produit(Vecteur3D  V)
			    {
			    	float P;
			    		P=this->x*V.x + this->y*V.y + this->z*V.z;
			    	return P;
				}
			bool  coincide(Vecteur3D  V)
			  {
			  	return  ( this->x==V.x &&  this->y==V.y  && this->z==V.z);
			  }
			void   afficher()
			{
				cout <<"("<<x<<","<<y<<","<<z<<")" << endl;
			}
			float norme()
			{
				return sqrt(x*x+y*y+z*z);
			}
	        Vecteur3D*  normax(Vecteur3D *V)
	        {
	        	if(this->norme() > V->norme())
	        	   return this;
	        	else 
	        	     return V;
			}       
};

int main()
{
	Vecteur3D V1(7,7,7),V2(2,4),V3,*V4;
	V1.afficher();
	V2.afficher();
	V3.afficher();
	
	cout << " La norme de V1 est : "<<V1.norme()<<endl;
	
	
	V3=V1.somme(V2);
	cout << "La somme de V1 et V2 est : ";
	V3.afficher();
	
	cout << "le produit de V1 et V2 est : "<<V1.produit(V2)<<endl;
	
	cout<<"le vecteur qui a la plus grande norme entre V1 et V2 est : " ;
	V4=V1.normax(&V2);
	V4->afficher();
		
}
