#include<stdio.h>
#include<string.h>
#include<time.h>

int paragraph();


int main() {
    char op0;
    printf("\nWelcome to *insert_title*!\n\n");
    printf("Choose your mode: \n1. Instant\n2. Paragraph\n3. Freestyle\n");
    scanf("%c", &op0);

    switch(op0) {
        //case 1:
            //instant();
            //break;
        case '2':
            paragraph();
            break;
        //case 3:
            //freestyle();
            //break; 
        default:
            printf("Wrong input");
            break;
    }

}

int paragraph() {
    char op1;
    printf("\nYou are in Paragraph Mode\n\n");
    printf("Choose your sub-mode: \n1. Simple\n2. Punctuations\n3. Numbers\n4. Difficult\n");
    scanf("%d", &op1);
char key[100];
    
 if (op1 == 1)
           {strcpy(key, "as for is am good not so let be");
            }
else if (op1 == 2)
           {strcpy(key, "He is as far not so, as so! thanks & not so much. Dear, you.");
            }
else if (op1 == 3)
           {strcpy(key, "you have 100 in a cent and 1 in a per cent so if you give 2 in 6 it is 33 per cent");
            } 
else if (op1 == 4)
            {strcpy(key, "This is not the 1st TypeTest in your life, I guess!");
            }
else {
        printf("Wrong input");

}   
    

        char input[100];
        int l1, l2, score = 0;
        l1 = strlen(key);

        printf("%s\n", key);

        time_t seconds1;
        seconds1 = time(NULL);

        int z = -1;
        while(z<l1) {
            scanf("%c", &input[z]);
            z++;}
        time_t seconds2;
        seconds2 = time(NULL);

        printf("\n\n***\n\n");

    
    
    l2 = strlen(input);
    for(int letter = 0; letter < l1; letter++){
        if(input[letter] == key[letter]) {
            score += 1;
            printf("%c == %c, Score = %d\n",input[letter], key[letter], score);
        
        } else {
            printf("%c != %c\n",input[letter], key[letter]);
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

    return 0;
}