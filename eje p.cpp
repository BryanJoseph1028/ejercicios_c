#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Estudiante{
	int **notas;
	string nombre;
};
main(){
	Estudiante *estudiante;
	int fila_estudiante=0, columna_estudiante=0;
	cout<<"cuantos estudiantes desea ingresar";
	cin>>fila_estudiante;
	cout<<"cuantas notas desea ingresar";
	cin>>columna_estudiante;
	
	estudiante = new Estudiante[fila_estudiante];
	estudiante ->notas = new int *[fila_estudiante];
	for (int i=0; i<fila_estudiante; i++){
		estudiante ->notas[i] = new int *[columna_estudiante];
	}
	cout<<"--------------------------notas---------------------------";
	for (int i=0; i<fila_estudiante; i++){
		cout<<"_________________________"<<endl;
		cout<<"Ingrese nombre estudiante";
		getline(cin,(estudiante + 1)->nombre);
		cin.ignore();
		for (int ii=0; ii<columna_estudiante; ii++){
		cout<<"ingrese nota"<<"["<<ii<<"]: ";
		cin>>*(*(estudiante->notas+i)+ii);	
		}
	}
	cout<<"________________________";
	for (int i=0; i<fila_estudiante; i++){
	cout<<"_______nota"<<i<<"_______"<<endl;
	cout<<(estudiante+ i)->nombre<<endl;
	for (int ii=0; ii<columna_estudiante; ii++){
		cout<<"ingrese nota"<<"["<<ii<<"]: ";
		cin>>*(*(estudiante->notas+i)+ii);	
		}
		for (i=0; i<fila_estudiante; i++){
			delete[] estudiante->notas[i];
		}
		delete[] estudiante;
		system("PAUSE");
	}
}


