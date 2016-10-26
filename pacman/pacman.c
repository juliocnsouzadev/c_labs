#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"

char** map;
int lines;
int columms;

void readMap() {
	FILE* f;
	f = fopen("map.txt", "r");
	if(f == 0) {
		printf("Fail reading map");
		exit(1);
	}

	fscanf(f, "%d %d", &lines, &columms);
	mallocMap();
	
	for(int i = 0; i < 5; i++) {
		fscanf(f, "%s", map[i]);
	}

	fclose(f);
}

void mallocMap() {
	map = malloc(sizeof(char*) * lines);

	for(int i = 0; i < lines; i++) {
		map[i] = malloc(sizeof(char) * columms + 1);
	}
}

void freeMap() {
	for(int i = 0; i < lines; i++) {
		free(map[i]);
	}

	free(map);
}

int main() {
	
	readMap();

	for(int i = 0; i < lines; i++) {
		printf("%s\n", map[i]);
	}

	freeMap();

    char end;
    scanf(" %c", &end);
}