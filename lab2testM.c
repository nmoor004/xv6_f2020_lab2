#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	set_prior(20);
	int i, k;
	const int loop = 1000;
	for (i = 0; i < loop; i++) {
		asm("nop");
		for (k = 0; k < loop; k++) {
			asm("nop");
		}
		printf(1, "program M finished loop in %d\n", i);
	}
	exit();
}