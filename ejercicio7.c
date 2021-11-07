#include<stdio.h>
int main(){
  int alumno[15]={0},i=0;
   for(i=0;i<15;i++){
     printf("\ningrese la nota del alumno %d: ",i+1);
     scanf("%d",&alumno[i]);
   }
   for(i=0;i<15;i++){
     if(alumno[i]>8){
       printf("\n\nel alumno numero %d tiene mas de 8\n",i+1);
     }
   }
  return 0;
}
