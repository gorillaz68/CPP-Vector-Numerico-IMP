void capturar_num(int numero[],int tam){
    
    int i;
    for(i=0;i<tam;i++){
        cin>> numero[i];
        escribir_num(numero,i);
        //cout<< "ingrese el numero" <<i+1<<" :"<<numero[i];
    }
    
}
