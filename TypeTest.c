#include<stdio.h>
#include<string.h>


int main() {
    char key[] = "Hello World!";
    char i[1000];
    int l, score = 0;

    printf("%s\n", key);

    scanf("%[^\n]s", i);
    l = strlen(i);
    for(int j = 0; j < l; j++){
        if(i[j] == key[j]) {
            score += 1;
            printf("%c == %c, Score = %d\n",i[j], key[j], score);
        
        } else {
            printf("%c != %c\n",i[j], key[j]);
        }
        
    }
    printf("\nYour Score is %d", score);
}