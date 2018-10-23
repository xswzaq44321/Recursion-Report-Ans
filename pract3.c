#include <stdio.h>

void hannoi(int n, char from, char to, char buffer){
	if(n == 0)
		return;
	hannoi(n - 1, from, buffer, to); // move those above me to buffer
	printf("Ring %d from %c to %c\n", n, from, to);
	hannoi(n - 1, buffer, to, from); // move those back above me
}

int main(){
	int N;
	scanf("%d", &N);
	hannoi(N, 'A', 'C', 'B'); // from 'A' to 'C', buffer is 'B'
}
