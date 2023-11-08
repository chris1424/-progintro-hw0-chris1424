#include <stdio.h>

unsigned long collatz(unsigned long n) {
    unsigned long length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main() {
     long start, end, num, max_length = 0, max_num = 0;

    printf("Εισαγάγετε τον ελάχιστο ακέραιο του εύρους: ");
    scanf("%ld", &start);
    printf("Εισαγάγετε τον μέγιστο ακέραιο του εύρους: ");
    scanf("%ld",&end); 
    
    
    
   if(start<1){
    printf("0.\n");
   }
    else if (end<1){

        printf("0.\n");}
    else
   {
    for (num = start; num <= end; num++) {
        unsigned long length = collatz(num);
        printf("%ld",num);
 if (length > max_length) {
            max_length = length;
            max_num = num;
        }
    
   }
   }
    if (start>0){
        if (end>0){
    
    printf("Ο αριθμός με το μέγιστο μήκος ακολουθίας Collatz στο εύρος %ld -  %ld είναι %ld με μήκος %ld.\n", start, end, max_num, max_length);

    return 0;
}

}

}

