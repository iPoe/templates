#define DEFAULT_SIZE 128

template <class T> class vector {

	int capacidad;
	int cuenta;
	T *data;
	
	public:
	vector(){
		capacidad = DEFAULT_SIZE;
		cuenta = 0;
		data= new T[DEFAULT_SIZE];
	}
	
	vector(){delete[] data;}
	void mostrar();
	int insertar (T d);
	void ordenar();	
		
		
};
