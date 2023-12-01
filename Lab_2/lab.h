typedef struct track
{
	char name[40], album[40], composer[40];
	
}track;

void save(track **arr, int *n);
void write(track *arr, int n);
void read(track **arr, int *n);
void search(track *arr, int n);
