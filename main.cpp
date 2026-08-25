#include <iostream>
#include "CLASESPROGRAH.h"

using namespace std;

/* CLASE PROGRA 2: 20/8

PROPIEDADES DE MI OBJETO, TODA LA INFORMACION DEL OBJETO
EL COMPORTAMIENTO DEL OBJETO, LO QUE PUEDE REALIZAR. SE EMPAQUETA EN UNA CLASE.
DATOS Y COMPORTAMIENTOS DE UN OBJETO QUE SE COMUNICA CON OTRO OBJETO A TRAVES DE METODOS (LAS ACCIONES QUE PUEDE REALIZAR)

CLASE: FECHA
"CLASEFECHA.H"
"CLASEFECHA.CPP"

un destructor tiene el mismo nombre de clase tiene virguilla.
no recibe parametros.
no devuelve nada.
se ejecuta cuando salgo del ambito donde fue declarado el objeto.
si declaro en el main sera cuando termina el programa
si declaro en funcion cuando termina la funcion se ejectuta el destructor

*/

/*int main()
{
{


    Fecha obj(3,3,1989); //parentesis para pasar valores a funcion
    obj.Mostrar();
    cout << endl;
}
system ("pause");
    return 0;

/*
Fecha vec [10]; // obj se llama el objeto, Fecha es el tipo de dato
// for (int i=0; i<10; i++){
vec[i].Cargar();
}
for (int i=0; i<10; i++){
   vec [i].Mostrar();
   }

  /cout << endl;
    Fecha otroObjeto;

     // obj.Cargar();
     //otroObjeto = obj; // puedo copiar la informacion de un objeto a otro

    // obj.setDia(3);
    // obj.setMes(3);
    // obj.setAnio(1989);

    // if (obj.getMes()%2 == 0)

    //otroObjeto.Mostrar();
    return 0;
}*/


/*
int main (){

Ejemplo var;
var.setCodigo("AAAA");
cout << var.getCodigo() << endl;

/* si no es const hacemos char *p
char *p = var.getCodigo();
strcpy ((char *) p, "BBBB");
cout << var.getCodigo()<< endl;

// casteo: "en esta linea de codigo hace de cuenta que tal parte de codigo hace que sea de esta otra manera" rompes el encapsulamiento.

return 0;
}
*/

/*
HACER UNA CLASE PARA REPRESENTAR A LOS ALUMNOS DE LA FRGP.
LOS MISMOS DEBEN TENER LA SIGUIENTE INFORMACION:
-LEGAJO
-NOMBRE Y APELLIDO
-DIRECCION
-TELEFONO
-DIA, MES Y AÑO DE NACIMIENTO

ADEMAS DEBE TENER LOS METODOS NECESARIOS PARA CARGAR Y MOSTRAR LA INFORMACION POR CONSOLA.
AGREGAR LOS SETTERS Y GETTERS PARA TODAS LAS PROPIEDADES.
*/

int main (){

Alumno obj();
obj.Mostrar();
cout << endl;
return 0;

}


