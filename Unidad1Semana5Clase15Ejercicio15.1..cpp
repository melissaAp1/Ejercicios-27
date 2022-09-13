// Ejercicio 15.1 del Periodo I
#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	while (numero <= 100){
		if (numero % 2 == 0){
			cout << numero << endl;
		}
		numero = numero + 1;
	}
}