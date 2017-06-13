#include <stdio.h>

int main()
{
  int i,j,tamn=4;
  int matriz1[4][4];
  int matriz2[4][4];
  printf("\n Ola, meu nome é Luis Bruno e minha matricula na Unilasalle é 0050014918 \n");
  
  for(i=0;i<=3; i++)
  {
   for(j=0;j<=3; j++)
  {
    printf("Matriz 1- Entre com a linha %d, coluna %d:", i+1,j+1);
    scanf("%d", &matriz1[i][j]);
    }
    printf("\n");
  }
  printf("\n...\n\n");
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
  {
  printf("Matriz 2- Entre com a linha %d, coluna %d:", i+1,j+1);
    scanf("%d", &matriz2[i][j]);
    }
    printf("\n");
  }
  printf("\n...\n\n");
 
  printf("\n Resultado:");
  printf("\n soma das duas Matrizes:\n");
  
   for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      printf("%d\t", matriz1[i][j]+matriz2[i][j]);
    }
   printf("\n");
    }
  printf("\n");
  printf("Diagonal Secundaria da Matriz: \n");
  
  for(i=0;i<=3;i++)
    
  {
    for(j=0;j<=3;j++)
    {
      if(j==tamn-1-i)
        printf("%d\t", matriz1[i][j]);
      
      else
        printf("0\t");
     }
    printf("\n");
  }
  
  printf("\n Multiplicação das duas Matrizes: \n");
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      printf("%d\t", matriz1[i][j] * matriz2[i][j]);
    }
    printf("\n");
    }
  printf("\n...\n");
   
printf("\n A minha maior dificuldade foi por a Multiplicação das Matrizes e a diagonal secundária!! \n ");

return 0;
}
