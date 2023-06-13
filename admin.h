#include "salida.h"
#include "operaciones.h"
#include "control.h"
#include "menu.h"
#include "captura.h"
#include "entrada.h"
void admin(){
    int tam=0,op=0;
    tam=leer_entrada();
    int numeros[tam];
    capturar_num(numeros,tam);
    op=menu();
    control(numeros,op,tam);
}
