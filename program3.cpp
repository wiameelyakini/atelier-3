#include <iostream>
using namespace std;
class complexe{ 
  public :
      double somme() ; 
       double  produit( ) ; 
       double soustraction() ; 
       double division(); 
  double r1 , r2 , i1 , i2 ;
  complexe (){ 
     cout<<"veuillez entrer la partie reelle du nombre 1 : "; 
        cin>>r1;
     cout<<"veuillez entrer la partie imaginaire du nombre1 : ";
        cin>>i1;
     cout<<"veuillez entrer la partie reelle du nombre2 : "; 
        cin>>r2;
      cout<<"veuillez entrer la partie imaginaire du nombre2 : ";
        cin>>i2;
  }
};

 double complexe::somme(){ 
 double r3 , i3 ;
 r3= r1 + r2 ;
 i3 = i1 + i2 ;
 cout<<"la somme de ces deux nombres complexes est \n " <<r3<<"+"<<i3<<+"i \n" ;

 }
 double complexe::soustraction(){ 
 double r3 , i3 ;
 if(r1 > r2){
     r3= r1 - r2 ;
     i3 = i1 - i2 ;
 }
 else{
 r3= r2 - r1 ;
 i3 = i2 - i1 ;}
 cout<<"la soustraction de ces deux nombres complexes est \n " <<r3<<"+"<<i3<<+"i \n" ;

 }
 double complexe::produit( ){
     double r3 , i3 ;
  if(r1==0){
    r3= -(i2*i1);
    i3= r2*i1;
  }
  else if (r2==0){
     r3= -(i2*i1);
    i3= r1*i1;
  }
  else if (i2==0){
     r3= -(r2*r1);
    i3= r2*i1;
  }
  else if (i1==0){
     r3= (r2*r1);
    i3= r1*i2;
  }
  else {
    r3 = (r1*r2) - (i1*i2);
     i3 = (r1*i2) + (i1*r2);}
      cout<<"le produit de ces deux nombres complexes est \n " <<r3<<"+"<<i3<<+"i \n" ;};
double complexe::division(){ 
    double r3 , i3 , r4 , i4 , r5 , i5 ;
    if (i2==0){
        r3= r1/r2;
        i3 = i1/r2;
     }
   else if (r2==0){
        r3= i1/i2 ;
        i3 = -r1/i2;
     }
   else{
   r3 = ( r1*r2 + i1*i2)/ (r2*r2 + i2*i2);
   i3 = ((i1*r2) + (r1 *i2)) / ((r2*r2) + (i2*i2));


   }
cout<<"le produit de ces deux nombres complexes est \n " <<r3<<"+"<<i3<<+"i \n" ;
};
int main(){
int operation ; 

complexe monobjet ;
do 
    {
        cout<<"1. soustraction"<<endl;
        cout<<"2. addition"<<endl;
        cout<<"3. division "<<endl;
        cout<<"4. multiplication"<<endl;
        cout<<"0. Quitter"<<endl;
        cout<<"votre operation est: ";
        cin>>operation;
        cout<<endl;
 switch(operation) 
        {
            case 0 : break;
            case 1 : monobjet.soustraction() ;
            break;

            case 2 : monobjet.somme();
            break;

            case 3 : monobjet.division();
            break;
            
            case 4: monobjet.produit( );
            break;
        }
    }while (operation!=0);
    return 0;
}

