#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;

struct Nodo{
	int valor;
	Nodo *siguiente;
};
void Add(Nodo *&,int);
void Remove(Nodo *&);
Nodo *fin = NULL;
main(){
	int valor1,valor2,valor3;
	Nodo *inicio = NULL;
	cout<<"Ingrese Valor 1: ";
	cin>>valor1;
	Add(inicio,valor1);
	
	cout<<"Ingrese Valor 2: ";
	cin>>valor2;
	Add(inicio,valor2);
	
	cout<<"Ingrese Valor 3:";
	cin>>valor3;
	Add(inicio,valor3);
	
	//cout<<"fin: "<<fin->valor<<endl;
	cout<<"Peek: "<<inicio->valor<<endl;
	Remove(inicio);
	cout<<"Peek: "<<inicio->valor<<endl;
	Remove(inicio);
	cout<<"Peek: "<<inicio->valor<<endl;
	Remove(inicio);
	cout<<"Peek: "<<inicio->valor<<endl;
}
void Add(Nodo *&inicio,int v){
	Nodo *add = new Nodo();
	add->valor = v;
	add->siguiente = NULL;
	
	if(inicio==NULL){
		inicio = add;
	}else{
		fin->siguiente =add;
		
	}
	fin = add;
}
void Remove(Nodo *&inicio){
	int v;
	v= inicio->valor;
	Nodo *cola = inicio;
	if(inicio==fin){
		inicio =NULL;
		fin=NULL;
		
	}else{
		inicio = inicio->siguiente;
	}
	
	delete cola;
}

