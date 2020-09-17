#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "add_nbo.h"

int main(int argc, char** argv){
	if(argc!=3){
		return 1;
	}
	
	uint32_t x1;
	uint32_t x2;

	FILE* fp1 = fopen(argv[1], "r");
	FILE* fp2 = fopen(argv[2], "r");
	

	fread(&x1, sizeof(x1), 1, fp1);
	fread(&x2, sizeof(x2), 1, fp2);
	fclose(fp1);
	fclose(fp2);
	
	add_nbo(x1, x2);
}
