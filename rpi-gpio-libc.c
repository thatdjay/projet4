//librairies utilisées
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    FILE *fp; //créer un objet file

    char exportPath[] = "/sys/class/gpio"; //emplacement pour l'export
    char direction[] = "/sys/class/gpio/gpio"; //emplacement pour définir la dérection(in ou out)
    char gpioPath[] = "/sys/class/gpio/gpio"; //emplacement de la gpio

    strcat(exportPath, argv[1]);
    strcat(exportPath, "/export"); //permet l'utilisation du gpio choisi

    strcat(direction, argv[1]); //indique quel gpio utiliser
    strcat(direction, "/out"); //et est mis en sortie

    strcat(gpioPath, argv[1]);

    fp = fopen(gpioPath, "w"); //permet d'utiliser le fichier du gpio

    if(atoi(argv[2]) == "on") fputs(fp, "1"); //si l'état désiré est haut
    if(atoi(argv[2]) == "off") fputs(fp, "0"); //si l'état désiré est bas

    fclose(fp); //ferme le ficher


    return 0;
}