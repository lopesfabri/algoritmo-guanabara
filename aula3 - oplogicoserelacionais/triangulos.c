#include <stdio.h>

int main()
{
    int L1, L2, L3;
    int TRI = 0, EQ = 0, ES = 0;  
      
    printf("Digite o primeiro lado: ");
    scanf("%d", &L1);
    printf("Digite o segundo lado: ");
    scanf("%d", &L2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &L3);

    TRI = (L1 < L2 + L3) && (L2 < L1 + L3) && (L3 < L1 + L2); 
    
    EQ = (L1 == L2) && (L2 == L3);
    
    ES = (L1 != L2) && (L2 != L3) && (L3 != L1);

    printf("Pode formar um TRIANGULO: %d\n", TRI);   
    printf("O triangulo e EQUILATERO: %d \n", EQ);   
    printf("E um triangulo ESCALENO: %d \n", ES);    
}