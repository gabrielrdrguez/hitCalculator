#include <stdio.h>
#include <stdlib.h>

void calcula_mage(){
int hit,lasthit=0,cont=0,soma=0,min,max;
printf ("Insira os hits \nInsira -1 para parar de contabilizar.\n");
scanf ("%d",&hit);
min=hit;
max=hit;
while (1){
    if (hit != lasthit){
        cont++;
        soma+=hit;
    }
    lasthit=hit;
    scanf ("%d",&hit);
    if (hit == -1) break;
    if (hit > max)
        {max=hit;}
    if (hit < min)
    {min=hit;}
};
printf ("Media: %d \n min: %d \n max: %d \n Hits contados: %d \n",soma/cont,min,max,cont);
};



void calcula_melee(){
int hit,cont=0,soma=0,min,max;
printf ("Insira os hits \nInsira -1 para parar de contabilizar.\n");
scanf ("%d",&hit);
min=hit;
max=hit;
while (1){
    cont++;
    soma+=hit;
    scanf ("%d",&hit);
    if (hit == -1) break;
    if (hit > max)
        {max=hit;}
    if (hit < min)
    {min=hit;}
};
printf ("Media: %d \n min: %d \n max: %d \n Hits contados: %d \n",soma/cont,min,max,cont);
};



int main (){

printf ("1. Runas/magias MS/ED \n2. Magias Melee\n");
int opcao;
scanf("%d",&opcao);
switch (opcao){

    case 1: calcula_mage(); break;
    case 2: calcula_melee();break;

}

system ("pause");
}
