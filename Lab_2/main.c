#include "lab.h"
#include <stdlib.h>
#include <stdio.h>


int main() 
{

	system("clear");
	
	track *arr = NULL;
	
	int n = 0;
	int stopCycle = 0;

	while(stopCycle != 1)
	{
		int key;

		
		
		printf("\nSelect an option:\n |1 - Save a new song\n |2 - Watch the songs\n |3 - Searh a song\n |4 - Close Spotify\n\n Enter your option: ");
		scanf("%d", &key);

		

		switch(key){
			case 1:
			{
				int key2;
				
				printf("\n\nDo you wanna save a song?\n |1 - save a new song\n |2 - watch the list of songs\n\n Enter your option: ");
				scanf("%d", &key2);
				
				
				if(key2 == 1)
				{
					save(&arr, &n);

					if(!arr) 
						printf("this option can not be used by the moment\n");
					
					else
						printf("\nSaved %d musicial track(s)\n", n);

					write(arr, n);
				}
				
				else if(key2 == 2)
				{
					read(&arr, &n);
					
					if(!arr)
					{
						printf("The programm can not read it\n");
						stopCycle = 1;
						break;
					}
					else
					{
						printf("\nLoaded %d song(s)\n", n);
					}
						
				}
				
			continue;

			}

			case 2: 
			{
				if(!arr) 
				{
					printf("\nCan not find any song\n");
				}
				
				else 
				{
				
				for(int i = 0; i < n; i++)
					printf("|Song name: %s\n|Album: %s\n|Composer: %s\n\n", arr[i].name, arr[i].album, arr[i].composer);
					
				}
				
			continue;
			
			}
			
			case 3:
			{	
				if(!arr) break;
				
				else search(arr, n);
				
				continue;
			
			}
				
			
			case 4:
			{
				system("clear");
				printf("Goodbay, hope see you again!\n");
				
				break;
			}
		

			default:
				system("clear");
				printf("Sorry, but we don't have such an option yet\n");
				
				break;
			
		}	

		if(arr)
			free(arr);
		
		return 0;
	}

}
