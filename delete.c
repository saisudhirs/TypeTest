#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<sys/time.h>
#include<windows.h>

//specific function definitions
int instant();
int paragraph();
int freestyle();
int timed(int);
void graphing(int, float y_graph[]);
void loading();


//Misc. function definition
long current_timestamp() {
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
    return milliseconds;
}

int randomize(int lower, int upper){
    int num;

    srand(time(NULL));
    num = (rand() %(upper - lower + 1)) + lower;

    return num;
}

//Struct definition
struct line{
    int n;          //Word Count
    char l[200];    //Sentence
};

//Main 
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
        char op1;
        case '1':
            printf("\n%c%c%c %c%c  You are in Timed Mode  %c%c %c%c%c\n\n",174,174,174,174,174,175,175,175,175,175);
            printf("Choose the time limit: \n%c 1. 15 seconds\n%c 2. 30 seconds\n%c 3. 60 seconds\n\n%c ",175,175,175,175);
            op1 = getche();
            printf("-");

            switch(op1){
                case '1':
                    timed(15);
                    break;
                case '2':
                    timed(30);
                    break;
                case '3':
                    timed(60);
                    break;

                default:
                    printf("Wrong input");
                    break;
            }
            break;

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

//Instant mode
int instant() {
    char op1;
    
    printf("\nYou are in Instant Mode\n\n");

    char key[100];  

    // File handler
    FILE *f = fopen("Assets/Instant/1.txt", "r");
    char line[200];
    int size, count=0, j=0;
    
    //
    char input[100];
    int l1, l2, score = 0;
    l1 = strlen(key);

    // printf("%s\n", key);

    long long start, stop;
    int word_count = 0;
    
    start = current_timestamp();

    char s;
    char *tok;
    while(fgets(line, 200, f)){
        system("cls");
        tok = strtok(line, " ");
        printf("%s\n", tok);
        while(tok){
            s = getche();
            l1 += strlen(tok);

            if(s == ' '){
                tok = strtok(NULL, " ");
                count = 0;
                system("cls");
                printf("%s\n", tok);
            }

            else if(s == tok[count]){
                l2 += 1;

            }          
            count++;
        }


    }

    stop = current_timestamp();

    word_count = l2/5;
    float diff = (stop - start)/1000;
    float wpm = word_count/diff;

    printf("Your WPM is: %.3f\n", wpm);
    
    fclose(f);

    return 0;
}

//Paragraph mode
int paragraph() {
    char op1;
printf("\n%c%c%c %c%c  You are in Paragraph Mode  %c%c %c%c%c\n\n",174,174,174,174,174,175,175,175,175,175);
    printf("Choose your sub-mode: \n%c 1. Simple\n%c 2. Punctuations\n%c 3. Numbers\n%c 4. Difficult\n\n%c ",175,175,175,175,175);
    scanf("%d", &op1);
char key[200];
    
 if (op1 == 1)
           {strcpy(key, "as for is am good not so let be a smile is the easiest way out of a difficult situation");
            }
else if (op1 == 2)
           {strcpy(key, "He is as far not so, as so! thanks & not so much. Dear, you. in two sentences. However, it would not");
            }
else if (op1 == 3)
           {strcpy(key, "you have 100 in a cent and 1 in a per cent so if you give 2 in 6 it is 33 per cent hello 76fdr738 eded7127");
            } 
else if (op1 == 4)
            {strcpy(key, "This is not the 1st TypeTest in your life, I guess! “Yes! it is possible, although not useful,");
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
    int errors = score - l1;
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

//Freestyle mode
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

int timed(int time){
    time *= 1000;
    int n=0, score=0;
    char s[2];
    long long start, current, inst_start, inst_stop;
    float mid=0;
    

    start = current_timestamp();
    
    // File opening randomizer
    int randnum, len;
    char connum[2];
    char file_ext[] = ".txt";
    char file_prefix[] = "Assets/Timed/";

    randnum = randomize(0, 1);
    itoa(randnum, connum, 10);
    strcat(connum, file_ext);
    strcat(file_prefix, connum);

    FILE *f = fopen(file_prefix, "r");
    // FILE *f = fopen("Assets/Timed/0.txt", "r");
    char line[100];
    struct line lines[50];      
    //Array of structs of lines
    int size, count, j=0;
    //Populates line array
    while(fgets(line, 100, f)){
        count = 0;

        for(int i=0; i<strlen(line); i++){
            if(line[i] == ' '){
                count++;
            }
        }

        lines[j].n = count;
        strcpy(lines[j].l, line);
        j++;
    }

    size = sizeof(lines)/sizeof(lines[0]);
    count = 0;

    char current_line[500];
    int current_words;
    int word_count = 0, l1;

    int flag = 1;
    char input[200] = "\0";
    int input_len = strlen(input);
    float y_graph[input_len];



    loading();

    while(flag){
        current = current_timestamp();
        mid = current - start;
        if(mid > time)
            break;

        strcpy(current_line, lines[count].l);
        current_words = lines[count].n;
        printf("\n%s", current_line);

        // strcpy(input, "");

        l1 = strlen(current_line);

        j = 0;
        int count2 = 0;
        
        char* word = strtok(current_line, " ");
        word_count += 1;

        while(j < current_words){
            inst_start = current_timestamp();
            s[0] = getche();
            inst_stop = current_timestamp();

            current = current_timestamp();

            strcat(input, s);
            mid = current - start;
            if(mid > time)
                break;

            if(s[0] == ' '){
                word = strtok(NULL, " ");
                word_count += 1;
                count2 = 0;
                j++;
                continue;
            }

            else if(s[0] == word[count2]){
                score += 1;
            }



            count2++;

             //instantaneous speed calc
            input_len = strlen(input);
            float inst_time = (inst_stop - start)/1000.0;
            float time_min = inst_time / 60.0;
            float cpm = score / time_min;
            float wpm = word_count / time_min;
            y_graph[input_len] = wpm;

            // system("cls");
        
            // printf("\n\nCharacters left: %d\n\nKey:   %s\n\n", input_len-1, current_line);

            // printf("\n\n***\n\nTime taken: %.3f, CPM: %.2f, WPM: %.2f, Words: %d", inst_time, cpm, wpm, word_count); 
        
    }

            
        

        count++;
        system("cls");

        current = current_timestamp();
        mid = current - start;
        if(mid > time)
            break;
    }

    printf("\nYour score is: %d\n", score);

    time = (current - start)/1000.0;
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
        graphing(l1, y_graph);

    return 0;
}

//Graph plotting function
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

//Loading CLI screen
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