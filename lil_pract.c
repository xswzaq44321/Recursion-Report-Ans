#include <stdio.h>

void explore(int layer){
	static int nthExplore = 0;
	++nthExplore;
	printf("I'm in layer %d!\n", layer);
	// if not experienced enough, don't go below 5.
	if(layer == 5 && nthExplore < 20){
		printf("I better not go below layer 5...\n");
		return;
	}else if(layer == 10){
		printf("Hits the bottom!\n");
		return;
	}
	explore(layer + 1);
}

int main(){
	for(int i = 0; i < 4; ++i){
		explore(1);
	}
}
