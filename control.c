#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <sys/time.h>
#include<windows.h>

//specific function definitions
int instant();
int paragraph();
int freestyle();
void graphing(int, float y_graph[]);
void loading();


long current_timestamp() {
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
    return milliseconds;
}



int main() {
    system("cls");
    char op0;
    printf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("     %c     TYPE TEST     %c\n",204,185);
    printf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n     Welcome to Type Test!\n\n     A project by\n     %c\n     %c%c%c%c %c Sai Sudhir\n     %c%c%c%c %c Saranga\n     %c%c%c%c %c Sai Rahul\n\n",203,204,196,196,196,175,204,196,196,196,175,200,196,196,196,175);
    printf("Choose your mode: \n%c 1. Timed\n%c 2. Instant\n%c 3. Paragraph\n%c 4. Freestyle\n\n%c ",175,175,175,175,175);
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

        
        int z = 2;
        char space[2];
        int l1_temp1 = l1;

        while (l1_temp1>0) {
            system("cls");


            int l1_temp2 = l1_temp1;
            while(key[l1 - l1_temp2] != ' ') {
                printf("%c", key[l1 - l1_temp2]);
                l1_temp2--;
            }
            printf("%d %d", l1_temp1, l1_temp2);
            printf("\n%s\n%s", key, input);

            space[0] = getch();
            printf("%s\n", space);            

            strcat(input, space);

            

            if (key[l1- l1_temp1] != ' ') {
                if (space[0] != ' ')
                    l1_temp1--;
                else
                    l1_temp1 = l1_temp2;
            
            } else if(key[l1- l1_temp1] != '*')
                break;


        }
        

        /*

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

    */

}

int paragraph() {
    char op1;
printf("\n%c%c%c %c%c  You are in Paragraph Mode  %c%c %c%c%c\n\n",174,174,174,174,174,175,175,175,175,175);
    printf("Choose your sub-mode: \n%c 1. Simple\n%c 2. Punctuations\n%c 3. Numbers\n%c 4. Difficult\n\n%c ",175,175,175,175,175);
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
    loading();

    long long inst_start, inst_stop, start, stop;
    float inst_time, time;
    int input_len;
    char input[1000], a[2];
    int l1, l2, word_count = 1, score = 0;
    l1 = strlen(key);
    input_len = l1;

    printf("Text: %s\n", key);

    system("cls");
    
    printf("\n\nCharacters left: %d\n\nKey:   %s\n\nInput: %s", input_len, key, input);
    printf("\n\n***\n%s\nTime taken: 0.000, CPM: 0.00, WPM: 0.00, Words: 0", input);

    float y_graph[input_len];

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
        y_graph[input_len] = wpm;

        system("cls");
    
        printf("\n\nCharacters left: %d\n\nKey:   %s\n\nInput: %s", input_len-1, key, input);

        printf("\n\n***\n\nTime taken: %.3f, CPM: %.2f, WPM: %.2f, Words: %d", inst_time, cpm, wpm, word_count); 
        
    }

    //main clock stop
    stop = current_timestamp();

 
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
    time = (stop - start)/1000.0;
    int errors = l1 - score;
    float accuracy = ((score) * 100) / l1;
    float time_min = time / 60.0;
    float cpm = score / time_min;
    float wpm = word_count / time_min;

    system("cls");
    //stats output
    printf("\n\n*****\n");
    printf("\nYour Score is %d/%d\nTime taken is %.3f seconds\n", score, l1, time );

    printf("\nAccuracy: %.2f%%\nCPM: %.2f\nWPM: %.2f\nErrors: %d\n\n*****\n\n", accuracy, cpm, wpm, errors);

    //graph 
    char op2;
    printf("Do you want to see wpm graph? (y/n): \n");
    scanf("%s", &op2);

    if (op2 == 'y' || op2 == 'Y') 
        graphing(l2, y_graph);

    return 0;

}

int freestyle() {

    long long inst_start, inst_stop, start, stop;
    float inst_time, time;
    int input_len;
    char input[1000], a[2];
    int l2, word_count = 1;


        printf("\n%c%c%c %c%c  You are in Freestyle Mode  %c%c %c%c%c\n\n",174,174,174,174,174,175,175,175,175,175);
    printf("-----\nEnter the number of characters to be input: ");
    scanf("%d", &input_len);
    float y_graph[input_len];

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
        y_graph[input_len] = wpm;

        system("cls");
        printf("\n\nCharacters left: %d\n\nInput: %s", input_len, input);

        printf("\n***\n\nTime taken: %.3f, CPM: %.2f, WPM: %.2f, Words: %d", inst_time, cpm, wpm, word_count); 

    }

    //main clock stop
    stop = current_timestamp();

    system("cls");

    l2 = strlen(input);
    time = (stop - start)/1000.0;
    float time_min = time / 60.0;
    float cpm = l2 / time_min;
    float wpm = word_count / time_min;

    printf("\n*****\n%s\nTotal Time taken: %.3f, CPM: %.2f, WPM: %.2f\n", input, time, cpm, wpm); 

    //graph 
    char op2;
    printf("Do you want to see wpm graph? (y/n): \n");
    scanf("%s", &op2);

    if (op2 == 'y' || op2 == 'Y') 
        graphing(l2, y_graph);

    return 0;
}

void graphing(int l2, float y_graph[]) {
    int width, height, q, k=0, y=0;   
    width = l2;
    height = 130; //largest displayable wpm
    int y_label=height-1;

    int graph[height][width];
    memset(graph, -1, width*height*sizeof(int));

    for(int a=0; a<width; a++){
        q = y_graph[a];
        graph[height-q-1][y] = 0;
        y++;
    }

    for(int l=0; l<height; l++){
        
        printf("%.3d| ", y_label);
        
        for(int m=0; m<width; m++){
            if(graph[l][m] < 0)
                printf("%c ", '.');
            else
                printf("%d ", graph[l][m]);
        }
        printf("*\n");
        y_label--;
    }
    }

void loading()
{
    int arr[61]; arr[60] = 93; arr[0] = 91;

    for(int y=1;y<60;y++)
        arr[y] = 196;

    for(int x=0;x<=60;x++)
        printf("%c",arr[x]);

    for(int z=1;z<60;z++)
    {
        system("cls");
        arr[z] = 219;
        puts("Loading...\n");
        for(int x=0;x<=60;x++)
        {
            printf("%c",arr[x]);
        }
        Sleep(0.3);
    }
    system("cls");
}
