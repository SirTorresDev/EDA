#include<iostream>
#include<list>
#include<unordered_map>
#include<string>
using namespace std;
using DNI = string;
typedef struct {
	string artista;
	int duracion;
	list<DNI>::iterator itList;
}infoCancion;

unordered_map<DNI, infoConductor> conductores;
unordered_map<int, list<DNI>>por_puntos;

public:

	void addSong() {
		por_puntos[p].push_front(p);
		conductores[c].puntos = p;
		conductores[c].itLista = por_puntos[p].begin();
	}

	void quitar(DNI c, int p) {
		infoConductor& par = conductores[c];
		int nuevosPtos = max(0, par.puntos - puntos);
		if (nuevosPtos != par.puntos) {
			por_puntos[par.puntos].erase(par.itLista);
			insertar(c, nuevosPtos);
		}
	}


