#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
    char key[] = "Hello World!";
    char input[1000];
    int l1, l2, score = 0;

    printf("%s\n", key);

    time_t seconds1;
    seconds1 = time(NULL);

    scanf("%[^\n]s", input);

    time_t seconds2;
    seconds2 = time(NULL);

    printf("\n\n***\n\n");

    l1 = strlen(key);
    l2 = strlen(input);
    for(int j = 0; j < l1; j++){
        if(input[j] == key[j]) {
            score += 1;
            printf("%c == %c, Score = %d\n",input[j], key[j], score);
        
        } else {
            printf("%c != %c\n",input[j], key[j]);
        }
        
    }
    int time = seconds2 - seconds1;
    int errors = l1 - score;
    float accuracy = ((score) * 100) / l1;
    float time_min = time / 60.0;
    float cpm = score / time_min;

    printf("\n\n***\n");
    printf("\nYour Score is %d/%d\nTime taken is %d seconds\n", score, l1, time );

    printf("\nAccuracy: %.2f%%, CPM: %.2f, Errors: %d", accuracy, cpm, errors);
}
