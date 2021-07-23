#include <iostream>
using namespace std;
#include <Math.h>
int menu();
void opcion1();
void opcion2();
int main() {
// Ariel Fernando Reyes Castellanos (11921023)
	int opc=0;
	while(opc!=3) {
		opc=menu();
	}


	return 0;
}


int menu() {
	cout<<endl;
	cout<<"...............Menu................."<<endl;
	cout<<"1....................... Sumatoria"<<endl;
	cout<<"2....................... Formula"<<endl;
	cout<<"3....................... Salir"<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl;
	int opc;
	cin>>opc;


	switch(opc) {
		case 1: {
			opcion1();
			return 1;
			break;
		}

		case 2: {
			opcion2();
			return 2;
			break;
		}

		case 3: {
			cout<<"Adios..."<<endl;
			return 3;
			break;
		}
		default: {
			cout<<"Eligio una opcion incorrecta"<<endl;
			return 0;
			break;
		}
	}
}


void opcion1() {
	cout<<"Ingrese el valor de K: "<<endl;
	int k=0;
	double total=0;
	cin>>k; // se le pide al usuario que ingrese el valor de K
	while(k<=0) {
		cout<<"Ingrese el valor de K: "<<endl;
		cin>>k;
	}


	int i=1;
	while(i<=k) {
		double parte_arriba = (2*i) - 1; // se hace la parte de arriba de la formula
		double parte_abajo = i*(i+1); // se hace la parte de abajo de la formula
		double formula = parte_arriba/parte_abajo; // se juntan estas dos partes
		total = total + formula; // se acumula el valor
		i++;
	}
	cout<<"La respuesta es: "<<total<<endl;
}

void opcion2() {

	cout<<"Ingrese la elevacion para e: "<<endl;
	int ele;
	cin>>ele;  // se le pide al usuario que ingrese la elevacion de euler

	double valor_e;
	valor_e = exp(ele); // se saca el valor de euler

	double part_down;
	part_down= 1 + valor_e;  // se crea la parte (1 + e^x)

	double parte_arriba;  // esto es 1/(1+ e^x)
	parte_arriba = 1/part_down;
	cout<<"La respuesta es: " << parte_arriba; // se imprime la respuesta

};
