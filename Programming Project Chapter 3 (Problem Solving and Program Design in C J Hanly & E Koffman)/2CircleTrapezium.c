#include <stdio.h>

void drawCircle(void){
    printf("   --\n");
    printf("  /  \\\n");
    printf(" (    )\n");
    printf("  \\  /\n");
    printf("   --\n");

}

void drawTrap(void){
    printf("  ___\n");
    printf(" /    \\\n");
    printf("/      \\\n");
    printf("--------\n");
}


 
int main(void){
    drawCircle();
    drawTrap();
    printf("\n");
    drawCircle();
    drawTrap();
   

    return 0;
    }

