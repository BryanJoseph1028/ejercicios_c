#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;
struct Nodo{
	int valor;
	Nodo *siguiente;
};
void Push(Nodo *&,int);
void Pop(Nodo *&);
main(){
	Nodo *pila=NULL;
	int valor1,valor2,valor3;
	cout<<"Ingrese Valor 1: ";
	cin>>valor1;
	Push(pila,valor1);
	
	cout<<"Ingrese Valor 2: ";
	cin>>valor2;
	Push(pila,valor2);
	
	cout<<"Ingrese Valor 3: ";
	cin>>valor3;
	Push(pila,valor3);
	
	cout<<"Peek:"<<pila->valor<<endl;
	Pop(pila);
	cout<<"Peek:"<<pila->valor<<endl;
	Pop(pila);
	cout<<"Peek:"<<pila->valor<<endl;
	Pop(pila);
	cout<<"Peek:"<<pila->valor<<endl;
	
}
void Push(Nodo *&pila,int v){
	Nodo *push = new Nodo();
	push->valor =v;
	push->siguiente = pila;
	pila=push;
	
}
void Pop(Nodo *&pila){
	int v;
	Nodo *pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
	delete pop;
}
