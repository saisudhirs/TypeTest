#include<stdio.h>
#include<string.h>

void main(){
    int width, height, q, k=0, y=0;
    scanf("%d\n", &height);
    scanf("%d\n", &width);    

    int graph[height][width];
    memset(graph, -1, width*height*sizeof(int));

    for(int a=0; a<width; a++){
        scanf("%d", &q);
        graph[height-q-1][y] = 0;
        y++;
    }

    for(int l=0; l<height; l++){
        for(int m=0; m<width; m++){
            if(graph[l][m] < 0)
                printf("%c ", '.');
            else
                printf("%d ", graph[l][m]);
        }
        printf("\n");
    }

}

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
