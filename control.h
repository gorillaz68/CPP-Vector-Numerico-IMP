void control(int numero[],int op,int tam){
    int acum=0;
    switch(op){
        case 1:
            acum=sumar(numero,tam);
            escribir(acum);
            break;
        case 2:
            acum=restar(numero,tam);
            escribir(acum);
            break;
        case 3:
            acum=multiplicar(numero,tam);
            escribir(acum);
            break;
        case 4:
            acum=division(numero,tam);
            escribir(acum);
            break;
        case 5:
            escribir_salir();
            exit(0);
        default:
            escribir_exc();
            break;
    }
 
}
