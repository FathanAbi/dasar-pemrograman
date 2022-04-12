#include <stdio.h>

struct toko{
    int id;
    int harga;
    int hal;
};

int check(int *arr, int x, int n)
{
    int i;
    int status;
    for(i=0;i<n;i++)
    {
        if(x == arr[i]){
        status = 1;
        break;
        }
        else
        status = 0;
    } 

    return status;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    struct toko buku[n];
    int id[n];
    int index[10000];

    int i;
    for(i=0;i<n;i++){
        scanf("%d", &buku[i].id);
        id[i] = buku[i].id;
        index[buku[i].id] = i;
        scanf("%d", &buku[i].harga);
        scanf("%d", &buku[i].hal);
        
    }
    
    

    int x;
    scanf("%d", &x);



    int status;
    status = check(id, x, n);
    
    

    if(status== 0){
        printf("ID: %d\n", x);
        printf("Itu Buku Apa?");
    } else {
        printf("ID: %d\n", x);
        printf("Harga: %d\n", buku[index[x]].harga);
        printf("Banyak Halaman Buku: %d\n", buku[index[x]].hal);
    }

    
    


}

