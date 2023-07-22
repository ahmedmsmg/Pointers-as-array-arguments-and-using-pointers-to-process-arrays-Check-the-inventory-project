/*** Name: Ahmed Ghoneim..
 * This Program is made for the improvement of a computer factory inventory where
 * they can factor out how many computer they can build using the parts that currently
 * exists within the factory ***/


#include <stdio.h>

int find_minimum(int *a, int n);


int main() {

int N, K;

printf("Enter the number of parts (N): ");
scanf("%d", &N);

// input validation
if(N < 1 || N > 1000000) {
	printf("Invalid number of parts\n");
	printf("Must be in the range [1,1000000]");
	return 0;
}

printf("Enter number of part types (K): ");
scanf("%d", &K);

if(K < 1 || K > 10000) {
	printf("Invalid number of part types \n");
	printf("Must be in the range [1,10000]");
	return 0;
}
int a[K];

int j=0;
while(j<K) {
	a[j]=0;
	j++;
}

printf("Enter Part list: ");

// taking the input for the parts code
int i = 0;
for(i=0;i<N;i++) {
	int p;
	scanf("%d",&p);
	if(p<1 || p>1000) {
		printf("Invalid list of parts \n");
		printf("Part codes must be in the range [1,%d]",K);
		return 0;
	}
	a[p-1] = a[p-1] + 1;
}
//calling function find_minimum
int min;
min = find_minimum(a,K);
printf("The Factory can build %d computer(s)",min);

return 0;

}

int find_minimum(int *a, int n) {
int *l=(a+n);
int min = *a;

//finding the minimum in the array counter
while(a!=l){
	if(min>*a)
		min = *a;
	a++;	
}
return min;
}

