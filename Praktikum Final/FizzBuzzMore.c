#include <stdio.h>
#include <string.h>

struct ganti{
    int kel;
    char s[25];
};


int main() {

    int t;
    scanf("%d", &t);
    
    struct ganti kata[t];
    
    int i;
    for(i=0;i<t;i++){
        scanf("%d", &kata[i].kel);
        scanf("%s", kata[i].s);
    }
    
    
    
    int n;
    scanf("%d", &n);
    
    
    
    int j, check;
    for(i=1;i<=n;i++){
        check = 0;
        for(j=0;j<t;j++){
            
            if(i % kata[j].kel == 0){
                printf("%s", kata[j].s);
                check = 1;
            } 
            }
        if(check == 0){
                printf("%d", i);
        }
        printf("\n");
    }
    
    
    return 0;
}
