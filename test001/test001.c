#include <stdio.h>
#include <string.h>
#include <mpi.h>

const int MAX_STRING = 100;

int main(int argc, char const *argv[])
{
	char greeting[MAX_STRING];
	int  comm_sz;
	int  my_rank;

	MPI_Init(NULL, NULL);
	
	return 0;
}