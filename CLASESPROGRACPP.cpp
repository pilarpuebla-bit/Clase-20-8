#include <iostream>
#include <cstring>
#include "CLASESPROGRAH.h"

using namespace std;

/*
     Fecha::Fecha (int d, int m , int a){ //constructor es un metodo con particularidades(no lo llame directamente, el constructor se ejecuta cuando se crea/declara el objeto.
                    // cuando no hay constructores se crea por defecto uno q no hace nada.
                    // al tener un constructor que espera recibir algo, espera si o si que lo use
     dia = d;
     mes = m;
     anio = a;
     cout << "soy el constructor" << endl;
     }


    void Fecha::setDia (int d){

        dia=d;
    }
    void Fecha::setMes (int m){
    mes=m;
    }
    void Fecha::setAnio (int a){
    anio=a;
    }
    int Fecha::getDia (){
    return dia;
    }
    int Fecha::getMes (){
    return mes;
    }
    int Fecha::getAnio (){
    return anio;
    }
    void Fecha::Cargar (){

    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;
    }
    void Fecha::Mostrar (){

        cout << dia << "/"<< mes << "/" << anio << endl;

    }
    Fecha::~Fecha (){
    cout  << "Se murio el objeto" << endl;
    }
*/
/*
    // creamos metodos
    void Ejemplo::setCodigo (const char *c){
    strcpy (codigo, c); // que es lo que quiero copiar, a donde lo quiero copiar
    }

    const char *Ejemplo::getCodigo (){ //para que se haga metodo tenes q especificar a que clase pertenece
    return codigo;
    }

*/


void Alumno::setLegajo(int l){
legajo = l;
}

int Alumno::getLegajo(){
return legajo;
}

void Alumno::Cargar(){

cout<<"ingrese legajo: " << endl;
cin >> legajo;

}

void Alumno::Mostrar(){
cout << "el legajo es: " << legajo << endl;
}






