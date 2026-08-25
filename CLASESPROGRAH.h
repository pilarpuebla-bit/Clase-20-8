#ifndef CLASESPROGRAH_H_INCLUDED
#define CLASESPROGRAH_H_INCLUDED



/* CLASE 20/8

  declaracion de propiedades.
  tienen que respetar el  encapsulamiento, la proteccion de informacion.
  porque los objetos se comunican con otros mediante metodos y las propiedades (datos) tienen que ser privadas con un clasificador de acceso.
  propiedades variables que almacenan informacion.
  metodos: acciones que tienen pueden ser setters y getters en la parte publica
  metodos set: establecer valores
  metodos get: conseguir valores
  el encapsulamiento tiene la ventaja de que vos sos el que marca los limites. por ejemplo no ponerle -1 a dia o 84 a dia porque no se puede. y nadie mas lo va  apoder cambiar.




 */
/*
  class Fecha {

 private:
    int dia;
    int mes;
    int anio;

 public:
     Fecha (int, int, int); //(valores por omision? estudair)
    void setDia (int d);// metodo para establecer un valor a dia  que recibe como parametro un entero. podees o no ponerle nombre  alos parametros.
    void setMes (int m);
    void setAnio (int a);
    int getDia ();// metodo para devolver un valor por fuera de la funcion. no necesita recibir nada, pq lo unico que hace es decirme q valor tiene dia.
    int getMes ();
    int getAnio ();
    void Cargar ();
    void Mostrar ();
    ~Fecha();

    // un constructor tiene el mismo nombre de la clase. puede o no recibir parametros. no devuelve nada, no es ni void.
    // puedo tener muchos constructores mientras los distinga con los paramertros que le pongo. sobrecarga de ?.

};
*/

/*
class Ejemplo {

// cadena de caracteres n caracteres +1 (para /0)

private: // 2 tipos de datos distintos
    char codigo[5];
    int cantidad;

public:
    void setCodigo (const char *); // char codigo es un vector asi que pasamos a la funcion con un puntero q va a ser constante.el get va a devolver la direccion de memoria
    const char * getCodigo (); // si no lo hago constante se rompe el encapsulamiento



};
*/

class Alumno {

private:
    int legajo;
   /* char nombre;
    char apellido;
    char direcc;
    char telefono;
    int dia;
    int mes;
    int anio;
    */

public:

    void setLegajo (int l);
    int getLegajo ();
    void Cargar();
    void Mostrar ();


};








#endif // CLASESPROGRAH_H_INCLUDED



