#include <stdio.h>
#include <string.h>



int main()
{
    char s[1000][1000];
    
    int i, j, k;
    for(i=0;i<1000;i++){
        gets(s[i]);
        if(strcmp(s[i], "exit") == 0) break;
    }
    
      
    
    for(i=0;i<1000;i++){
        if(strcmp(s[i], "exit") == 0) break;
        int n = strlen(s[i]);
        int temp;
        for (j = 0; j < n-1; j++) {
        for (k = j+1; k < n; k++) {
         if (s[i][j] > s[i][k]) {
            temp = s[i][j];
            s[i][j] = s[i][k];
            s[i][k] = temp;
         }
      }
   }
        int z, y;
        for(z = 0; z < n; z++){  
        if(s[i][z] == ' '){  
            for(y=z;y<n;y++)  
        {  
            s[i][y]=s[i][y+1];  
        }  
        n--;  
        }  
    }  
    for(z = 0; z < n; z++){  
        if(s[i][z] == ' '){  
            for(y=z;y<n;y++)  
        {  
            s[i][y]=s[i][y+1];  
        }  
        n--;  
        }  
    } 
    for(z = 0; z < n; z++){  
        if(s[i][z] == ' '){  
            for(y=z;y<n;y++)  
        {  
            s[i][y]=s[i][y+1];  
        }  
        n--;  
        }  
    } 
    for(z = 0; z < n; z++){  
        if(s[i][z] == ' '){  
            for(y=z;y<n;y++)  
        {  
            s[i][y]=s[i][y+1];  
        }  
        n--;  
        }  
    } 
    for(z = 0; z < n; z++){  
        if(s[i][z] == ' '){  
            for(y=z;y<n;y++)  
        {  
            s[i][y]=s[i][y+1];  
        }  
        n--;  
        }  
    } 
    printf("%s\n", s[i]); 
        
    }
    
    
    
    
    
    return 0;
}