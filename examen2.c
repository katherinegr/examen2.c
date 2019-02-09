#include<stdio.h>
#include<cs50.h>
int main(void){

      string name= get_string("¿cual es el nombre de los tres?");
      printf("hola %s \n", name);

 float tempc= get_float("cual es la temperatura actual");
       printf("%f",tempc);

 float tempf= 9/5*tempc+32;
       printf("la temperatura en grados f es:%f",  tempf);
}
