/*
 * menu.c
 *
 *  Created on: 21 févr. 2018
 *      Author: louis
 */

#include "menu.h"

void inputXml(){
	Profile * profile = NULL;
	char * input1 = NULL;
	char * input2 = NULL;
	char stamp = 0;
	profile = initProfile();
	input1 = malloc(150 * 1);
	input2 = malloc(50 * 1);

	checkFileExist();
	printf("Veillez entrer votre email : ");
	scanf("%c", &stamp);
	fgets(input1, 150, stdin);
	printf("Veillez entre votre id : ");
	fgets(input1, 50, stdin);

	strcpy(profile->email, input1);
	strcpy(profile->id, input2);
	printf("%s %s \n", profile->email, profile->id);
	addUser(profile, 1);

	freeProfile(profile);
	free(profile);
	free(input1);
	free(input2);
}

void outputXml(){
	Profile * profile = NULL;

	profile = initProfile();

	checkFileExist();
	printf("Veillez entrer votre email : ");
	fgets(profile->email, 150, stdout);
	printf("Veillez entre votre id : ");
	fgets(profile->id, 50, stdout);
	addUser(profile, 0);

	freeProfile(profile);
	free(profile);
}
