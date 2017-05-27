#include "Ordenamiento.h"

vector<int> Ordenamiento::Bubblesort(vector<int> l){

	for (int i = 0; i < l.size()-1; ++i)
	{
		for (int j = 0; j < l.size()-i-1; ++j)
		{
			if(l[j]>l[j+1]){
				int aux=l[j];
				l[j]=l[j+1];
				l[j+1]=aux;
			}
		}
	}

	return l;
}

vector<int> Ordenamiento::Insercion(vector<int> l){
	int aux;
	for (int i = 1; i < l.size(); ++i)
	{
		aux=l[i];
		int j=i-1;
		while(j>=0 && l[j]>aux){
			l[j+1]=l[j];
			--j;
		}
		l[j+1]=aux;
	}
	return l;
}

vector<int> Ordenamiento::Seleccion(vector<int> l){
	int aux;
	for (int i = 0; i < l.size(); ++i)
	{
		int idx_men=Menor(l,i);
		if (idx_men!=i)
		{
			aux=l[i];
			l[i]=l[idx_men];
			l[idx_men]=aux;
		}
	}
	return l;
}

int Ordenamiento::Menor(vector<int> l,int i){
	int aux=l[i];
	int index=i;
	for (int j = i+1; j < l.size(); ++j)
	{
		if (aux>l[j])
		{
			aux=l[j];
			index=j;
		}
	}
	return index;
}

vector<int> Ordenamiento::Merge(vector<int> left,vector<int> right){
	vector<int> result;
	while((int)left.size()>0 || (int)right.size()>0){
		if ((int)left.size()>0 && (int)right.size()>0)
		{
			if ((int)left.front() <= (int)right.front())
			{
				result.push_back((int)left.front());
				left.erase(left.begin());
			}
			else{
				result.push_back((int)right.front());
				right.erase(right.begin());
			}
		} else if((int)left.size() >0){
			for (int i = 0; i < (int)left.size(); i++)
               result.push_back(left[i]);
            break;
		} else if ((int)right.size() > 0) {
            for (int i = 0; i < (int)right.size(); i++)
               result.push_back(right[i]);
            break;
      }
	}
	return result;
}

vector<int> Ordenamiento::MergeSort(vector<int> l){
	if (l.size() <= 1)
      return l;
 
   vector<int> left, right, result;
   int middle = ((int)l.size()+ 1) / 2;
 
   for (int i = 0; i < middle; i++) {
      left.push_back(l[i]);
   }

   for (int i = middle; i < (int)l.size(); i++) {
      right.push_back(l[i]);
   }
 
   left = MergeSort(left);
   right = MergeSort(right);
   result = Merge(left, right);
 
   return result;
}

void Ordenamiento::Imprimir(vector<int> l){
	for (int i = 0; i < l.size(); i++)
	{
		cout<<l[i];
	}
	cout<<endl;
}




