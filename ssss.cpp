#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;
struct Estudiante{
		int **notas;
		string nombre;
	};
main(){
	Estudiante *estudiante;
	int fila_estudiante=0,columna_estudiante=0;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila_estudiante;
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna_estudiante;
	
	estudiante = new Estudiante[fila_estudiante];
	estudiante ->notas = new int *[fila_estudiante];
	for (int i=0;i<fila_estudiante; i++){
		estudiante ->notas[i] = new int[columna_estudiante];
	}

cout<<"---------- Ingreso Notas ----------"<<endl;

		for (int i=0;i<fila_estudiante; i++){
			cout<<"_____________________________"<<endl;
			cin.ignore();
			cout<<"Ingrese Nombre Estudiante: ";
			getline(cin,(estudiante + i) -> nombre);
			for (int ii=0;ii<columna_estudiante; ii++){
				cout<<"Ingrese Nota:"<<"["<<ii<<"]: ";
				cin>>*(*(estudiante->notas+i)+ii);
			}
		}
cout<<"______________________________";

		for (int i=0;i<fila_estudiante; i++){
			cout<<"_______________ Nota ("<< i <<") _______________"<<endl;
			 cout<<(estudiante + i) -> nombre<<endl;
			for (int ii=0;ii<columna_estudiante; ii++){
				cout<<*(*(estudiante->notas+i)+ii)<<endl;
			}
			
		}
	for (int i=0;i<fila_estudiante; i++){
	delete[] estudiante ->notas[i];
	}
	delete[] estudiante;
	system("PAUSE");

}
