/*	Author : LAURENT Louis
 * 	Date : 08/02/2018
 */
#include "createXml.h"
#include "menu.h"

// Génération d'un exemple
int main(int argc, char **argv){
	int END = 0;
	char choise = 0;
	while(END == 0){
		printf("Bonjour bienvenu sur l'application d'entrée et de sortie ");
		printf("Voulez-vous entrer ou sortir ? (e/s/o) : ");
		scanf("%c", &choise);
		switch(choise){
			case 'e':
				inputXml();
				break;
			case 's' :
				outputXml();
				break;
			case 'o' :
				END = 1;
				break;

		}
	}
	exit(EXIT_SUCCESS);
}

