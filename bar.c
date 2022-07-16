# include <stdio.h>
# include <stdlib.h>
# include <math.h> 

main() 
{
    char sexo; 
    int ingressoH = 10; 
    int ingressoM = 8;  
    int cerveja = 5; 
    int refrigerante =  3; 
    int espetinho = 7; 
    int couvert = 4; 
    int quantidadecerveja = 0 , quantidadeespetinho = 0, quantidaderefrigerante = 0;
    int consumo, total; 

    printf ("Digite o Sexo do cliente:\n"); 
    scanf ("%c", &sexo); 
    if (sexo == 'M' || sexo == 'm')
    {
         
        printf ("Digite a quantidade de cerveja\t");
        scanf ("%d", &quantidadecerveja); 

        printf ("Digite a quantidade de Espetinho\t");
        scanf ("%d", &quantidadeespetinho); 

        printf ("Digite a quantidade de Refrigerante\t");
        scanf ("%d", &quantidaderefrigerante); 
             printf("\n");
        consumo = (quantidadecerveja*cerveja) + (quantidadeespetinho*espetinho) + (quantidaderefrigerante*refrigerante);
        
        if (consumo > 30)
        {
            total = consumo + ingressoH;  

            printf ("Quantidade de Cervejas    %d\n",  quantidadecerveja); 
                printf("\n");
            printf ("Quantidade de Espetinhos  %d",  quantidadeespetinho); 
                printf("\n");
            printf ("Quantidade de Cervejas    %d",  quantidaderefrigerante); 
                printf("\n");
            printf ("counvert R$ 0,00");
                printf("\n");
            printf ("Ingresso R$ %d",ingressoH);
                printf("\n");
            printf ("O total da conta é  R$ %d",total); 

        }
        else
         {
            
             total = consumo + couvert + ingressoH; 
            
            printf ("Quantidade de Cervejas   %d",  quantidadecerveja); 
                printf("\n");
            printf ("Quantidade de Espetinhos %d",  quantidadeespetinho); 
                 printf("\n");
            printf ("Quantidade de Cervejas   %d",  quantidaderefrigerante); 
                printf("\n");
            printf ("counvert R$ ",ingressoH );
                printf("\n");
            printf ("Ingresso R$ ",ingressoH);
                printf("\n");
            printf ("O total da conta é  %d",total); 
         }
    }

    if (sexo == 'F'|| sexo == 'f')
    {
        printf ("Digite a quantidade de cerveja\t");
        scanf ("%d", &quantidadecerveja); 

        printf ("Digite a quantidade de Espetinho\t");
        scanf ("%d", &quantidadeespetinho); 

        printf ("Digite a quantidade de Refrigerante\t");
        scanf ("%d", &quantidaderefrigerante); 
             printf("\n");
        consumo = (quantidadecerveja*cerveja) + (quantidadeespetinho*espetinho) + (quantidaderefrigerante*refrigerante);

        if (consumo > 30)
        {
             total = consumo + ingressoH;  

            printf ("Quantidade de Cervejas    %d\n",  quantidadecerveja); 
                printf("\n");
            printf ("Quantidade de Espetinhos  %d",  quantidadeespetinho); 
                printf("\n");
            printf ("Quantidade de Cervejas    %d",  quantidaderefrigerante); 
                printf("\n");
            printf ("counvert R$ 0,00");
                printf("\n");
            printf ("Ingresso R$ %d",ingressoM);
                printf("\n");
            printf ("O total da conta é  R$ %d",total);
        }
        else 
        {
             total = consumo + couvert + ingressoM; 
            
            printf ("Quantidade de Cervejas   %d",  quantidadecerveja); 
                printf("\n");
            printf ("Quantidade de Espetinhos %d",  quantidadeespetinho); 
                 printf("\n");
            printf ("Quantidade de Cervejas   %d",  quantidaderefrigerante); 
                printf("\n");
            printf ("counvert R$ ",ingressoM );
                printf("\n");
            printf ("Ingresso R$ ",ingressoM);
                printf("\n");
            printf ("O total da conta é  %d",total); 
        }
       
    }
    if (sexo != 'M' || sexo !='m'|| sexo != 'F'|| sexo != 'f')
        {
           printf ("valor inválido"); 
        }


    return 0; 
}