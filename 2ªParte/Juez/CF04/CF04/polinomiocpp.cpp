#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;

#include "polinomio.h"

//Roberto Torres Prensa

int opera(vector<polinomio> &valores, vector<int> &x) {
	int resultado;
	for (int i = 0; i < x.size(); i++) {
		int operador = x[i];
		return resultado = valores[i].getCoef() * pow(valores[i].getExpo(), operador);
	}
	
}



bool resuelveCaso() {
	int nValores, resultado, i = 0;
	polinomio p;
	vector<polinomio> valores;
	vector<int> x;

	cin >> valores[i];
	
	while (valores[i].getCoef() != 0 && valores[i].getExpo() != 0) {
		i++;
		cin >> valores[i];
	}

	cin >> nValores;
	for (int i = 0; i < nValores; i++) {
		cin >> x[i];
	}
	resultado = opera(valores,x);
	cout << resultado << resultado << "\n";
	return true;
}





int main() {
	// Para la entrada por fichero.
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
	while (resuelveCaso());

#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}