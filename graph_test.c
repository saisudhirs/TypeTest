#include<stdio.h>
#include<string.h>

void main(){
    int n, q, k=0, y=0;
    scanf("%d\n", &n);

    // int graph[n][10];
    // while(n>0){
    //     int  l;
    //     scanf("%d", &l);
    //     while(l>0){
    //         graph[l][k] = 1;
    //         l--;
    //     }
    //     n--;
    //     k++;
    // }
    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j < 10; j++)
    //         printf("%d ", graph[i][j]);
    //     printf("\n");
    // }
    

    int graph[n][5];
    memset(graph, -1, 5*n*sizeof(int));

    for(int a=0; a<5; a++){
        scanf("%d", &q);
        graph[n-q-1][y] = 0;
        y++;
    }

    for(int l=0; l<n; l++){
        for(int m=0; m<5; m++){
            if(graph[l][m] < 0)
                printf("%c  ", '.');
            else
                printf("%d  ", graph[l][m]);
        }
        printf("\n");
    }

}