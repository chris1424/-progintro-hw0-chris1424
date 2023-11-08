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
//make faction that does the collatz with a variable
int main() {
     long start, end, num, max_length = 0, max_num = 0;
//initialize mag_length and max_num ,variables we will need in for 
    printf("Εισαγάγετε πρωτο ακεραιο εύρους: ");
    scanf("%ld", &start);
    printf("Εισαγάγετε δευτερο ακεραιο εύρους: ");
    scanf("%ld",&end); 
    //scans user's type while we are asking him for two intigers
    
    
   if(start<1){
    printf("0.\n");
   }
    else if (end<1){

        printf("0.\n");}
    else
    //created this if in case the user typed 0 or a smaller number
   {
    for (num = start; num <= end; num++) {
        unsigned long length = collatz(num);
        printf("%ld",num);
 if (length > max_length) {
            max_length = length;
            max_num = num;
        }
    //in case none of the variables given are 0 or smaller the for finds the number with the biggest length, once it has checked ecery single intiger between the 2 the user typed
   }
   }
    if (start>0){
        if (end>0){
    //this is in case one of the intigers are 0 or smaller so it wont print the following ,also if there isn't any mistakes it will print it correctly
    printf("Ο αριθμός με το μέγιστο μήκος ακολουθίας Collatz στο εύρος %ld -  %ld είναι %ld με μήκος %ld.\n", start, end, max_num, max_length);

    return 0;
}

}

}

