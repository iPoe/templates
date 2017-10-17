#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Cola: public vector<T>
{
	public:
			Cola();
			void adicionar(T elem);
			T eliminar();
			void mostrar();

};

template<class T>
Cola<T>::Cola():vector<T>(){}

template<class T>
void Cola <T>::adicionar(T elem)
{
	this->insert(this->begin(),elem);

}

template<class T>
void Cola<T>::mostrar()
{
	int n= this->size();
	for(int i=0; i<n; i++)
		cout<<this->at(i)<<", ";
	cout<<endl;
}



int main()
{
	Cola <int> c;
	c.adicionar(3);
	c.adicionar(4);
	c.adicionar(5);
	c.mostrar();
}