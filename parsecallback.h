#pragma once
#define VALUES 2
#define KEYS 2//Puede cambiarse el numero para la cantidad de claves y valores que se deseen

int parseCallback(char *key, char *value, void *userData);

typedef struct
{
	char *  key[KEYS];
	char *  value[VALUES];
}userData;