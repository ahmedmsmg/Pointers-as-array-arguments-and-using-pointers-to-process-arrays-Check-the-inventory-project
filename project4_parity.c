/*** Name: Ahmed Ghoneim...
 * This program is made to find whether all the elements inside an array
 * is even or odd.. If there is a mix between these two choices, then the program
 * simply prints "Not Good" ***/



#include <stdio.h>

// calling function find_parity
void find_parity(int *a, int n, int * all_even, int * all_odd);


int main() {



int N;
int odd = 0;
int even = 0;


printf("Enter the length of the array: ");
scanf("%d", &N);

int a[N];

int i = 0;
// taking the array inputs
while(i<N) {
        scanf("%d", &a[i]);
        i++;
}

//calling function find_parity
find_parity(a, N, &even, &odd);


if(even == 1 && odd == 0) {
        printf("good, all elements are even");
        }

if(even == 0 && odd == 1) {
        printf("good, all elements are odd");
        }

if(even == 1 && odd == 1) {
        printf("not good");
        }



return 0;
}

void find_parity(int *a, int n, int * all_even, int * all_odd){


        int i;
        
	// finding whether the input values are even or odd
        for(i=0;i<n;i++){
                if(*(a+i)%2 == 0) {
                     *all_even = 1;
                }
                if(*(a+i)%2 ==1) {
                     *all_odd = 1;
                }
        }

        

}


