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
		T getelemento(int pos);
		void setelemento(int pos, T element);
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

template<class T>
T Lista <T>::getelemento(int pos)
{

	T elem= this->at(pos);
	return elem;
}

template<class T>
void Lista <T>::setelemento(int pos, T element)
{
	this->at(pos)=element;
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
	cout<<"Element u want to search: ?"<<endl;
	int b;
	cin>>b;
	cout<<list.buscar(b)<<endl;
	int a=list.getelemento(0);
	cout<<a<<endl;
	list.setelemento(1,90);
	list.mostrar();

}
