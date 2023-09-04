#include "lista.h"
#include <iostream>


int main(void)
{
    listadoble miLista;
    string myString1 = "Esta es una cadena de texto larga número 1. Puede contener múltiples líneas y caracteres especiales.";
    string myString2 = "Aquí tienes otra cadena completamente diferente.";
    string myString3 = "Esto es un tercer ejemplo de texto distinto.";
    string myString4 = "Cadena número cuatro con contenido único.";
    string myString5 = "Otra línea diferente para la quinta entrada.";
    string myString6 = "Sexto ejemplo de texto distinto del anterior.";
    string myString7 = "Séptima cadena con contenido único y diferente.";
    string myString8 = "Una octava línea de texto completamente distinta.";
    string myString9 = "Noveno ejemplo de texto único y diferente.";
    miLista.agregarInicio(&myString8);
    miLista.agregarFinal(&myString9);
    miLista.agregarInicio(&myString7);
    miLista.agregarInicio(&myString6);
    miLista.agregarInicio(&myString5);
    miLista.agregarInicio(&myString4);
    miLista.agregarTitular(&myString3, 3);
    miLista.agregarInicio(&myString2);
    miLista.agregarInicio(&myString1);
    miLista.mostrarTitulares();
    miLista.buscarTitulares("ejemplo");
    miLista.getSize();
    miLista.eliminarTitulares("línea");
    miLista.getSize();

    return 0;
}