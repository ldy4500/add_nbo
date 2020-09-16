#include "add_nbo.h"

int add_nbo(uint32_t x1, uint32_t x2){
	x1 = ntohl(x1);
	x2 = ntohl(x2);

	uint32_t result;
	result = x1 + x2;

	printf("%d(%x) + %d(%x) = %d(%x)", x1, x1, x2, x2, result, result);
	return 0;
}
