#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void crear_archivo();
void abrir_archivo();
int main(){
	int op;
	char palabra [p];
	char repuesta [r];
		cout<<"------------------BIENVENIDO AL DICCIONARIO DEL PROGRAMADOR----------------------"<<endl;
		cout<<"ingrese su opcion"<<endl;
		cout<<"Ingreso de palabras..........................................................1"<<endl;
		cout<<"Ver las palabras.............................................................2"<<endl;
		cout<<"Salir........................................................................3"<<endl;
		cin>>op;
		switch(op){
		case 1:
	system("cls");
	crear_archivo();
	break;
	case 2:
	system("cls");	
	abrir_archivo();	
	break;
	case 3:
		system("cls");
	default:
	system("cls");
	cout<<"no valido"<<endl;
	break;	
}//fs	
	return 0;
}

void crear_archivo(){
	ofstream archivo;
	string texto;
	char continuar;
	int cod;	
	 
	 
	archivo.open("archivo.txt",ios::out);
	if (archivo.fail()){
	cout<<"No se pudo abrir o crear el archivo";
	exit(1);
	}
	else{
		do{
		fflush(stdin);
		cout<<"Ingrese su texto: ";
	    getline(cin,texto);
         cout<<"ingrese su traduccion";
		getline(cin,)  
		cout<<"Ingrese su codigo: ";
		cin>>cod;
		archivo<<cod<<endl;
		
		cout<<"¿Desea Agregar otro mas textos? s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
	}
}
void abrir_archivo() {
	ifstream archivo;
	string contenido;
	archivo.open("archivo.txt",ios::in);
	
	if (archivo.fail()){
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}else{
		do{
			getline(archivo,contenido);
			cout<<contenido<<endl;
		} while(archivo.eof()==false);
	
	archivo.close();
}
}

