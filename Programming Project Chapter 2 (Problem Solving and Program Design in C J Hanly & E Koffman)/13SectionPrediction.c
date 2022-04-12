#include <stdio.h>

int main (void){
    int students, sections, leftOver;

    printf("Enter the number of students enrolled in the batch => ");
    scanf("%d", &students);

    sections = students / 30;
    leftOver = students % 30;

    printf("There are %d students enrolled in the batch.\nThere will be %d section required with %d students left over", students, sections, leftOver);

    return 0;
}