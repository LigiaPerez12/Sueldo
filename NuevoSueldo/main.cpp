#include <iostream>

using namespace std;

int main() {
	int sueldoInicial, categoria, nuevoSueldo;
	
	cout<<"Ingrese el sueldo inicial: "<<endl;
	cin>>sueldoInicial;
	cout<<"Ingrese la categoria: "<<endl;
	cin>>categoria;
	/*else (categoria >=1, categoria>=2, categoria>=3, categoria>=4){*/
	if (categoria<=1, categoria<=2, categoria<=3, categoria<=4){
	
	switch (categoria){
		case 1:
			nuevoSueldo = sueldoInicial+(sueldoInicial * 15/100);
			break;
		case 2:
			nuevoSueldo = sueldoInicial+(sueldoInicial * 10/100);
			break;
		case 3:
			nuevoSueldo = sueldoInicial+(sueldoInicial * 8/100);
			break;
		case 4:
			nuevoSueldo = sueldoInicial+(sueldoInicial * 7/100);
			break;
		default:
			cout<<"Su categoria es incorrecta"<<endl; 
	}
	 } else {
		cout <<"Su categoria es incorrecta"<<endl;
	}
	
	cout<<"Su nuevo sueldo es: "<< + nuevoSueldo<<endl;
	cout<<"Su sueldo anterior era: "<< + sueldoInicial<<endl;
	
	return 0;
}
