#include <stdio.h>

int main() {
	int i, j, n, primeCount, count, index;
	scanf("%d", &n);
    index = 0;
    primeCount = 0;
	i=1;
	while (primeCount < n/2) {
        count = 0;
	    for (j=1; j<=i; j++) {
	        if (i%j == 0) {
	            count++;
	        }
        }
	    if (count == 2) {
	        primeCount++;
	        index+=2;
	        printf("%d ", i);
	        printf("%d ", i * index);
	    }
	    i++;
	}

	return 0;
}
