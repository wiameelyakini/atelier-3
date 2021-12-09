#include<iostream>
using namespace std;
class Forme{
	protected:
		float hauteur, largeur;
    public :
			Forme(float h, float l)
			{
				hauteur=h;
				largeur=l;
			}
	virtual float Area()=0 ;
};
class Rectangle:public Forme{
	public:
		Rectangle(float h, float l):Forme(h,l)
		{}
		float Area() 
		{
			return largeur*hauteur;
		}
};
class Triangle:public Forme{
	public:
		Triangle(float h, float l):Forme(h,l)
		{}
		float Area() 
		{
			return (largeur*hauteur)/2 ;
		}
};
 
int main(){
	Forme *F1,*F2;
	Rectangle R(2,4);
	Triangle T(20,40);
	F1=&R;
	F2=&T;
	cout<<"l'air du triangle est:"<<F2->Area()<<endl;
	cout<<"l'air du rectangle est:"<<F1->Area()<<endl;
}
