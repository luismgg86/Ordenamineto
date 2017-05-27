#include <iostream>
#include <vector>

using namespace std;

class Ordenamiento{

public: 
	//metodos de ordenamiento
	vector<int> Bubblesort(vector<int> l);
	void Imprimir(vector<int> l);
	int Menor(vector<int> l,int i);
	vector<int> Seleccion(vector<int> l);
	vector<int> Insercion(vector<int> l);
	vector<int> MergeSort(vector<int> l);
	vector<int> Merge(vector<int> left,vector<int> right);
};