#include<stdio.h>
int main(){
 int alumnos[30]={0},resultado[0],i=0;
   for(i=0;i<30;i++){
     printf("ingrese la nota del alumno %d: ",i+1);
       scanf("%d",&alumnos[i]);
        resultado[0]+=alumnos[i];
}
  printf("el promedio total es: %d",resultado[0]/30);

return 0;
}

