Tipo de lista a utilizar: Lista doblemente enlazada

char titulares(string pPalabra, string pFecha);  /*Este metodo recibiria 2 strings, uno correspondiente a la palabra
                                               que se desea buscar en los titulares y un segundo string para la fecha
 Metodos de la lista a utilizar

 int buscarElementoPalabra(string pPalabra);
 
 string mostrarElementoPosicion(int pPosicion);*/

void agregarTitular(int pRelevancia, string pTitular); /*Este metodo tambien recibe dos parametros, el primero correspondiendo
                                                     a la relevancia o popularidad que se desee establecer a dicho titular
                                                     y el segundo siendo un string con el titular que se desea agregar
 Metodos de la lista a utilizar

 void agregarPosicion(string pInfo, int pPosicion);*/

void mostrarTitulares(); /*Este metodo utilizaria un ciclo for para recorrer el array con los titulares y desplegar los mismos
                         que se encuentran ordenados segun su relevancia desde tiempo atras
 Metodos de la lista a utilizar

 void mostrarElementos();*/

void eliminarTitulares(char pListaPalabras); /*Este metodo recibira un array con palabras separadas por comas y eliminara cualquier 
                                               titular del array principal que posea alguna de las palabras dadas haciendo uso de un ciclo for
 Metodos de la lista a utilizar

 int buscarElementoPalabra(string pPalabra);
 
 void eliminarPosicion(int pPosicion);*/

void buscarTitulares(char pListaPalabras); /*Este metodo recibira un array con palabras separadas por comas y buscara
                                             cualquier titular del array principal que posea alguna de las palabras dadas
 Metodos de la lista a utilizar

 int buscarElementoPalabra(string pPalabra);
 
 string mostrarElementoPosicion(int pPosicion);*/

void manipularRelevancia(int pPosicionTitular, int pModificacion); /*Este metodo recibe dos parametros tipo integer, estos
                                                                   parametros corresponden respectivamente a la posicion
                                                                   actual del titular al que se desea aplicar el cambio
                                                                   y la cantidad de "puntos" de relevancia que se le
                                                                   sumaran o restaran
 Metodos de la lista a utilizar

 void eliminarPosicion(int pPosicion);

 void agregarPosicion(string pInfo, int pPosicion);*/
