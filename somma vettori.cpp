#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int somma=0;
	int vettore[i];

	int cont=0;


	cout<<"quanti numeri vuoi inserire?" <<endl;
	cin>>i;

	
	for(cont=0;cont<i;cont++) {
		cout<<"inserisci il numero succesivo:'"<<endl;
		cin>>vettore[i];
		
		somma=somma+vettore[i];
		
}
	cout<<"la somma di tutti i numeri e/'"<<somma;		
	return 0;
	
}

