// Ejercicio 13.1 del Periodo I
#include <iostream>
using namespace std;

int main(){
	string dia;
	cout << "Ingrese un dia de la semana:  ";
	cin >> dia;
	if (dia == "sabado" or dia == "Sabado" or dia =="SABADO"){
		cout << "Feliz fin de semana" << endl;
	} else if (dia == "domingo" or dia == "Domingo" or dia =="DOMINGO"){
		cout << "Feliz descanso" << endl;
	} else {
		cout << "No es un dia valido";
	}	
}