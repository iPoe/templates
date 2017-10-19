#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
class Lista:public vector<T>
{
	public:
		Lista();
		void add(T element);
		T eliminar(int pos);
		void mostrar();
		int longitud();
		void insertar(int pos, T element);
		int buscar(T element);
};


template<class T>
Lista<T>::Lista():vector<T>(){}

template<class T>
void Lista <T>:: add(T element)
{
	this->push_back(element);
}

template <class T>
T Lista<T>::eliminar(int pos)
{
	T elem = this->at(pos);
	this->erase(this->begin()+pos);
	return elem;
}

template<class T>
void Lista <T>::mostrar()
{
	int n=this->size();
	for(int i=0; i<n;i++)
		cout<<this->at(i)<<", ";
	cout<<endl;
}
template <class T>
int Lista <T>::longitud()
{
	int n=this->size();
	return n;
}

template <class T>
void Lista <T>::insertar(int pos,T element)
{
	this->insert(this->begin()+pos,element);
}

template <class T>
int Lista<T>::buscar(T element)
{
	if(find(this->begin(),this->end(),element)==this->end())
		return 0;
	else
		return 1;
}

int main()
{
	Lista <int> list;
	list.add(1);
	list.add(2);
	list.add(3);
	list.mostrar();
	list.eliminar(0);
	list.mostrar();
	list.insertar(1,10);
	list.mostrar();
	int n=list.longitud();
	cout<<"size of the list: "<<n<<endl;
	cout<<list.buscar(2)<<endl;


}
