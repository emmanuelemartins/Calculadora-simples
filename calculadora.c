#include<stdio.h>
int main(){
    char operacao;
    float numero1, numero2, resultado;
    
    printf("\nOlá! Sou uma calculadora simples\n");
    printf("Qual operação deseja fazer? (+, -, *, /): ");
    scanf("%c", &operacao);

    
    printf("\nDigite o primeiro número da operação: ");
    scanf("%f", &numero1);
    printf("\nAgora, o segundo número: ");
    scanf("%f", &numero2);

    
        switch(operacao) {
        case '+':
        resultado= numero1 + numero2; 
        break;

        case '-':
        resultado= numero1 - numero2;
        break;

        case '*':
        resultado= numero1 * numero2;
        break;

        case '/':
        if (numero1== 0 || numero2==0) {
            printf("\nNão existe divisão com 0\n");
            return 1;
        } else { resultado= numero1 / numero2;
        }
        break;
        
        default:
        printf("\nEssa operação é inválida!\n");
        return 1;

    
    } 
    printf("\n%.1f %c %.1f = %1.f\n", numero1, operacao, numero2, resultado);
    return 0;
}