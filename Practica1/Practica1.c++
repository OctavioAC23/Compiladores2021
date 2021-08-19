#include <bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

int opc=0;
int main(){
cout<<"Elige una opcion \n 1.- AFD \n 2.-AFN"<<endl;
cin>>opc;
}

class transicion{
public:
	int estado_objetivo;
	char simbolo;
	transicion(){
	estado_objetivo=0;
	simbolo='E';
}
	transicion(int estado_objetivo,char simbolo){
	this->estado_objetivo=estado_objetivo;
	if(simbolo=='E'||(simbolo>='a'&&simbolo<='z'))
		this->simbolo=simbolo;
	else throw "El simbolo no forma parte del conjunto";
}
};

class estado{
private:
	int buscar_transicion(int estado_objetivo,char simbolo){
	 int i;
	 for(i=0;i<transiciones.size();i++){
	 if(transiciones[i].estado_objetivo==estado_objetivo&&transiciones[i].simbolo==simbolo)
		return i;
	}
	return -1;
}
public:
	vector<transicion>transiciones;
	estado(){
	transiciones = vector<transicion>();
	}
	estado(vector<transicion>transiciones){
	this->transiciones=transiciones;
	}
	void agregar_transicion(transicion transicion){
	transiciones.push_back(transicion);
	}
	void eliminar_transicion(int estado_objetivo,char simbolo){
		int transicion;
		transicion=buscar_transicion(estado_objetivo,simbolo);
		if(transicion!=-1)
		transiciones.erase(transiciones.begin()+transicion);
	}
	};
