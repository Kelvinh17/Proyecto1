#include <stdio.h>
#include <stdlib.h>
int conversion (int num, int base,int []);
int main(int argc, char *argv[])
{
  int num,base,i,k;
  int residuo[10];
  printf("Programa que convierte un numero de base 10 a cualquier base\n");
  printf("Escribe el numero de base 10\n");
  scanf("%d",&num);
  printf("Escribe a la base que se desea convertir\n");
  scanf("%d",&base);
  k=conversion (num,base,residuo);
   for(i=k-1;i>=0;i--){
                     printf("%d ",residuo[i]);
                     }
                     printf("\n\n");
  system("PAUSE");	
  return 0;
}
int conversion (int num, int base, int residuo[])
{
     int i;
     for(i=0;num>0;i++){// fijate la condicion del for
                         residuo[i]=num%base; // primero guardas el residuo
                         num/=base; // despues dividis a num
                         }
     return i;
}
 
