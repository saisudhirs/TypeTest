#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
    char key[] = "Hello World!";
    char i[1000];
    int l, score = 0;

    printf("%s\n", key);

    time_t seconds1;
    seconds1 = time(NULL);

    scanf("%[^\n]s", i);

    time_t seconds2;
    seconds2 = time(NULL);

    l = strlen(i);
    for(int j = 0; j < l; j++){
        if(i[j] == key[j]) {
            score += 1;
            printf("%c == %c, Score = %d\n",i[j], key[j], score);
        
        } else {
            printf("%c != %c\n",i[j], key[j]);
        }
        
    }
    printf("\nYour Score is %d\nTime taken is %d", score, seconds2 - seconds1);
}
