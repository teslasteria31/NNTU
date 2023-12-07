#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab.h"

void save(track **arr, int *n)
{

	

	printf("\nHow much songs would you like to save? ");
	scanf("%d", n);
	
	
	
	if(*n <= 0) return;
	
	*arr = (track*)calloc(*n, sizeof(track));
	
	if(!arr) return;
	
	for(int i = 0; i < *n; i++){

		printf("\nEnter a name: ");
		scanf("%s", (*arr)[i].name);
		printf("Enter an album: ");
		scanf("%s", (*arr)[i].album);
		printf("Enter a composer: ");
		scanf("%s", (*arr)[i].composer);
	
	
	}
}

void read(track **arr, int *n)
{
	
	FILE *file = fopen("songs.txt", "r");

	if(!file) return;
	
	if(fscanf(file, "%d", n) != 1){
		fclose(file);
		return;
	}
	
	*arr = (track*)calloc(*n, sizeof(track));
	
	for(int i = 0; i < *n; i++){
		if(fscanf(file, "%s %s %s", ((*arr)[i].name), (*arr)[i].album, (*arr)[i].composer) != 3);
		break;
		
	}
	
	fclose(file);

}

void write(track *arr, int n)
{

	if(n <= 0) return;

	FILE *file = fopen("songs.txt", "w");

	if(!file){
		printf("Imposible to open file");
		return;
	}
	
	fprintf(file, "%d\n", n);
	
	for(int i = 0; i < n; i++){
	
		fprintf(file, "%s %s %s\n", arr[i].name, arr[i].album, arr[i].composer);
	}
	
	fclose(file);

}

void search(track *arr, int n)
{
	int option;
	
	system("clear");
	
	printf("Search:\n|1. By name\n|2. By album\n|3. By composer\n\n Enter your option: ");
	
	scanf("%d", &option);
	
	system("clear");
	
	switch(option)
	{
		case 1:{
		
			char tag[40];
			int found = 0;
			printf("Enter a name: ");
			
			scanf("%s", tag);
			
			for(int i = 0; i < n; i++)
			{
				if(!strcmp(arr[i].name, tag))
				{
					printf("A match has been found: %s %s %s\n", arr[i].name, arr[i].album, arr[i].composer);
					found = 1;
				}
			}
			
			if (!found) printf("Couldn't find any song, try again!\n\n");
			break;
		}
		
		case 2:
		{
		
			char tag[40];
			int found = 0;
			printf("Enter an album: ");
			
			scanf("%s", tag);
			
			for(int i = 0; i < n; i++)
			{
				if(!strcmp(arr[i].album, tag))
				{
					printf("A match has been found: %s %s %s\n", arr[i].name, arr[i].album, arr[i].composer);
					found = 1;
				}
			}
			
			if (!found) printf("Couldn't find any matches\n\n");
			break;
		}
		
		case 3:
		{
			char tag[40];
			int found = 0;
			printf("Enter a composer: ");
			
			scanf("%s", tag);
			
			for(int i = 0; i < n; i++)
			{
				if(!strcmp(arr[i].composer, tag))
				{
					printf("A match has been found: %s %s %s\n", arr[i].name, arr[i].album, arr[i].composer);
					found = 1;
				}
			}
			if (!found) printf("Couldn't find any matches\n\n");
			break;
		}
		
		default:
			printf("Sorry, but we don't have such kind of filter yet!\n");
			break;
		
	printf("%c",'\n');
	}
	
}

void print_db(track *arr, int n)
{
	if(!arr) 
	{
		printf("\nCan not find any song\n");
	}
	
	else 
	{
	
	for(int i = 0; i < n; i++)
		printf("\n|Song name: %s\n|Album: %s\n|Composer: %s\n\n", arr[i].name, arr[i].album, arr[i].composer);
		
	}

}
