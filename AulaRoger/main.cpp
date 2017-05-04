  #include <stdio.h>
 
float lerNumero() {
    float num;
    printf("Digite um numero por gentileza: ");
    scanf("%f",&num);
    return num;
}
 
float somar(float a, float b) {
    float soma = a + b;
    return soma;
}
 
float subtrair(float a, float b) {
    float soma = a - b;
    return soma;
}
 
float multiplicar(float a, float b) {
    float soma = a * b;
    return soma;
}
 
float dividir(float a, float b) {
    float soma = a / b;
    return soma;
}
 
void cabecalho() {
    printf("\n*****************************\n");
    printf("*******Calculadora*******\n");
    printf("*****************************\n");
    printf("\n");
}
 
void imprimir(float x) {
    if(x==24){
        printf("\nResultado: %.2f Seu resultado eh Numero do viado", x);
    printf("\n");}
    else if(x==69){
        printf("\nResultado: %.2f Seu resultado eh uma boa posiзгo", x);
    printf("\n");}
    else if(x==51){
        printf("\nResultado: %.2f Seu resultado eh uma Boa Idйia", x);
    printf("\n");}
    else if(x==13){
        printf("\nResultado: %.2f Seu resultado eh um puta azar", x);
    printf("\n");}
    else{
    printf("\nResultado: %.2f ", x);
    printf("\n");}
}
 
void menu() {
    int menuSelecionado;
    cabecalho();
    do {
        printf("\nDigite a opcao Desejada:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        scanf("%d", &menuSelecionado);      
         
        switch(menuSelecionado) {
            case 1: 
                float numA = lerNumero();
                float numB = lerNumero();
                float result = somar(numA, numB);
                imprimir(result);
                break;  
        }
        switch(menuSelecionado) {
            case 2: 
                float numA = lerNumero();
                float numB = lerNumero();
                float result = subtrair(numA, numB);
                imprimir(result);
                break;  
        }
        switch(menuSelecionado) {
            case 3: 
                float numA = lerNumero();
                float numB = lerNumero();
                float result = multiplicar(numA, numB);
                imprimir(result);
                break;  
        }
        switch(menuSelecionado) {
            case 4: 
                float numA = lerNumero();
                float numB = lerNumero();
                float result = dividir(numA, numB);
                imprimir(result);
                break;  
        }
    }while(menuSelecionado !=5);
    //ola48
}
 
main() {
    menu(); 
}

