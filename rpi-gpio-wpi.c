#include "wiringPi.h" //inclus la librairie wiringpi

//librairies pour utiliser des strings
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char argv[])
{
    wiringPiSetupGpio(); //initialize la librairie
    pinMode(atoi(argv[1]), OUTPUT); //met la broche gpio sélectionnée en sortie

    if(argv[2] == "on") //si l'argument est on
    {
        printf("on"); //confirme en affichant "on" dans le terminal
        digitalWrite(atoi(argv[1]), HIGH); //met la broche à 1
    }
    else if(argv[2] == "off") //si l'argument est off
    {
        printf("off"); //affiche off
        digitalWrite(atoi(argv[1]), LOW); //met la briche à 0
    }else printf("Argument non valide") //ne fait rien si l'argument n'est pas valide

    return 0;
}