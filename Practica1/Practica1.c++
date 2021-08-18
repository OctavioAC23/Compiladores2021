#include <bits/stdc++.h>

using namespace std;

int opc=0;
int main(){
cout<<"Elige una opcion \n 1.- AFD \n 2.-AFN"<<endl;
cin>>opc;
}

class automata{
public:
vector<int>nestados;
vector<char>letras;
int inicio;
};

class AFD:public automata{
private:
int aceptacion;
vector<char>transicion;
};

class AFN:public automata{
private:
vector<int>aceptacion;
vector<char>transicion;
};


