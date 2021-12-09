#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass();
    ~Myclass();
};
Myclass::Myclass()
{
    cout<<"appel au constructeur"<<endl;
}
Myclass::~Myclass()
{
    cout<<"appel au destructeur"<<endl;

}
int main()
{
    Myclass M ;
    cout <<"fin"<<endl;
}

