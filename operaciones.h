int sumar(int numero[],int tam){
    int acum=0,i;
    for(i=0;i<tam;i++){
        acum=acum+numero[i];
    }
    return acum;
}
int restar(int numero[],int tam){
    int acum=numero[0],i;
    for(i=1;i<tam;i++){
        acum=acum-numero[i];
    }
    return acum;
}
int multiplicar(int numero[],int tam){
    int acum=numero[0],i;
    for(i=1;i<tam;i++){
        acum=acum*numero[i];
    }
    return acum;
}
int division(int numero[],int tam){
    int acum=numero[0],i;
    for(i=1;i<tam;i++){
        if(numero[i]!=0){
            acum=acum/numero[i];
        }else{
            cout<<"divizion entre zero"<<endl;
            exit(0);
        }
    }
    return acum;
}
