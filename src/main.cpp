#include "Ordenamiento.h"

int main(int argc, char const *argv[])
{
	vector<int> numeros;
	numeros.push_back(6);
	numeros.push_back(9);
	numeros.push_back(5);
	numeros.push_back(7);
	numeros.push_back(1); 
	numeros.push_back(2); //(6,9,5,7,1,2)

	Ordenamiento A; //instancia de un objeto
    
	A.Imprimir(A.Bubblesort(numeros));
	A.Imprimir(A.Insercion(numeros));
	A.Imprimir(A.Seleccion(numeros));
	A.Imprimir(A.MergeSort(numeros));


	return 0;
}

