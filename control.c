#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <sys/time.h>

//specific function definitions
int instant();
int paragraph();
int freestyle();


long long current_timestamp() {
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
    return milliseconds;
}



int main() {
    char op0;
    printf("\nWelcome to *insert_title*!\n\n");
    printf("Choose your mode: \n1. Timed\n2. Instant\n3. Paragraph\n4. Freestyle\n");
    scanf("%c", &op0);

    switch(op0) {
        //case '1':
            //timed();
            //break;
        case '2':
            instant();
            break;
        case '3':
            paragraph();
            break;
        case '4':
            freestyle();
            break;
         
        default:
            printf("Wrong input");
            break;
    }

}

int instant() {
     char op1;
    printf("\nYou are in Instant Mode\n\n");
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

        long long start, stop;
        int word_count = 0;
        
        start = current_timestamp();

        
        int z = -1;
        while(z<l1) {
            //printf("%c\n", key[z]);
            
            int y = z;
            while(key[y] != ' '){
                printf("%c", key[y]);
                y++;    
            }
            printf("\n");
            scanf("%c", &input[z]);
            
            if(input[z] == ' '){
                word_count++;
            }
            z++;
            
            }
        
        stop = current_timestamp();

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
    
    //stats calculations
    float time = (stop - start)/1000.0;
    int errors = l1 - score;
    float accuracy = ((score) * 100) / l1;
    float time_min = time / 60.0;
    float cpm = score / time_min;
    float wpm = word_count / time_min;


    //stats output
    printf("\n\n***\n");
    printf("\nYour Score is %d/%d\nTime taken is %.3f seconds\n", score, l1, time );

    printf("\nAccuracy: %.2f%%, CPM: %.2f, WPM: %.2f, Errors: %d", accuracy, cpm, wpm, errors);

    return 0;

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

        long long start, stop;
        int word_count = 0;
        
        start = current_timestamp();

        
        int z = -1;
        while(z<l1) {
            scanf("%c", &input[z]);
            
            if(input[z] == ' '){
                word_count++;
            }
            z++;
            
            }
        
        stop = current_timestamp();

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
    
    //stats calculations
    float time = (stop - start)/1000.0;
    int errors = l1 - score;
    float accuracy = ((score) * 100) / l1;
    float time_min = time / 60.0;
    float cpm = score / time_min;
    float wpm = word_count / time_min;


    //stats output
    printf("\n\n***\n");
    printf("\nYour Score is %d/%d\nTime taken is %.3f seconds\n", score, l1, time );

    printf("\nAccuracy: %.2f%%, CPM: %.2f, WPM: %.2f, Errors: %d", accuracy, cpm, wpm, errors);

    return 0;
}

int freestyle() {

    long long inst_start, inst_stop, start, stop;
    float inst_time, time;
    int input_len;
    char input[1000], a[2];
    int l2, word_count = 1;
    
    printf("-----\nEnter the number of characters to be input: ");
    scanf("%d", &input_len);

    strcpy(input, "");


    //main clock start
    start = current_timestamp();

    for(input_len; input_len > 0; input_len--) {
        
        inst_start = current_timestamp();
        a[0] = getch();
        inst_stop = current_timestamp();

        //word counter
        if(a[0] == ' '){
            word_count++;
        }

        strcat(input, a);

        //instantaneous speed calc
        l2 = strlen(input);
        inst_time = (inst_stop - start)/1000.0;
        float time_min = inst_time / 60.0;
        float cpm = l2 / time_min;
        float wpm = word_count / time_min;

        system("cls");
        printf("\n\nCharacters left: %d\n\nInput: %s", input_len, input);

        printf("\n***\n%s\nTime taken: %.3f, CPM: %.2f, WPM: %.2f, Words: %d", input, inst_time, cpm, wpm, word_count); 

    }

    //main clock stop
    stop = current_timestamp();

    system("cls");

    l2 = strlen(input);
    time = (stop - start)/1000.0;
    float time_min = time / 60.0;
    float cpm = l2 / time_min;
    float wpm = word_count / time_min;

    printf("\n*****\n%s\nTotal Time taken: %.3f, CPM: %.2f, WPM: %.2f", input, time, cpm, wpm); 

    return 0;
}
