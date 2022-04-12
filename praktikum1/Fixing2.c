#include <stdio.h>
#include <math.h>

unsigned long long primeCheck (unsigned long long p)
{
   unsigned long long i;
   int bool = 1;

   for (i =2; i <= p; i++){
      if(bool == 1){
      if (p % i == 0 && p != i){
         bool = 0;
      } else {
         bool = 1;
      }
   }
   }
   return bool;
}

unsigned long long int_pow(unsigned long long base, unsigned long long exp)
{
    unsigned long long result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}

int main (void)
{
    unsigned long long A1, A2, A3;
    int poinWisnu = 0;
    int poinRobot = 0;
    unsigned long long p1 = 2;
    unsigned long long p2 = 2;
    unsigned long long p3 = 2;
    unsigned long long n1;
    unsigned long long n2;
    unsigned long long n3;
    int check1 = 1;
    int check2 = 1;
    int check3 = 1;



    scanf("%llu %llu %llu", &A1, &A2, &A3);




   // ROUND 1

   if (A1 == 1){
       poinWisnu = poinWisnu + 1;
       check1 = 0;
   } else {
       while (check1 == 1 && p1 <= A1){

       for (p1 = p1; primeCheck(p1) == 1 && p1 <= A1 && check1 == 1; p1++){
           for (n1 = 1; n1 <= A1 / 2 && check1 == 1; n1++){
               if (A1 == int_pow(p1, n1)){
                   poinWisnu = poinWisnu + 1;
                   check1 = 0;
               }
           }

       }
   p1 = p1 + 1;
   }
   }
   if (check1 == 1){
       poinRobot = poinRobot + 1;
   }


   //ROUND 2

   if (A2 == 1){
       poinRobot = poinRobot + 1;
       check2 = 0;
   } else {
       while (check2 == 1 && p2 <= A2){

       for (p2 = p2; primeCheck(p2) == 1 && p2 <= A2 && check2 == 1; p2++){
           for (n2 = 1; n2 <= A2 / 2 && check2 == 1; n2++){
               if (A2 == int_pow(p2, n2)){
                   poinRobot = poinRobot + 1;
                   check2 = 0;
               }
           }

       }
   p2 = p2 + 1;
   }
   }
   if (check2 == 1){
       poinWisnu = poinWisnu + 1;
   }

   //ROUND 3

   if (A3 == 1){
       poinWisnu = poinWisnu + 1;
       check3 = 0;
   } else {
       while (check3 == 1 && p3 <= A3){

       for (p3 = p3; primeCheck(p3) == 1 && p3 <= A3 && check3 == 1; p3++){
           for (n3 = 1; n3 <= A3 / 2 && check3 == 1; n3++){
               if (A3 == int_pow(p3, n3)){
                   poinWisnu = poinWisnu + 1;
                   check3 = 0;
               }
           }

       }
   p3 = p3 + 1;
   }
   }
   if (check3 == 1){
       poinRobot = poinRobot + 1;
   }
 
   printf("%d %d %d\n", check1, check2, check3);
   printf("wisnu:%d Robot:%d\n", poinWisnu, poinRobot);
  


    if (poinWisnu > poinRobot){
        printf("Wisnu jangan mencuri!");
    } else {
        printf("Wisnu gagal mencuri");
    }



    return 0;
}
