#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char help_cmd[] = "help";
char clear_cmd[] = "clear";
char exit_cmd[] = "exit";

void help();
void exit_terminal();
void run_python();



int main()
{
   
    printf("Welcome to Nirvaha terminal.\n");
    printf("c\\user\\person1: ");
    char input[50];
          scanf("%s",&input);
   
    do
    {
        printf("> ");
  
        
        if (strcmp(input, "help") == 0)
        {
            help();
        }
        else if (strcmp(input, "clear") == 0)
        {
            printf("Clear command not implemented.\n");
        }
        else if (strcmp(input, "python") == 0)
        {
            run_python();
        }
        else if (strcmp(input, "exit") == 0)
        {
            exit_terminal();
        }
        else
        {
            printf("Unknown command: %s\n", input);
        }
        printf(">");
        scanf("%s", &input);
    }while(strcmp(input,"exit") != 0);
    return 0;
}

void help() {
    printf("Available commands:\n");
    printf("  help          - Show this help message\n");
    printf("  clear         - Clear the terminal screen (not implemented)\n");
    printf("  echo <text>   - Print the given text\n");
    printf("  exit          - Exit the terminal\n");
}

void exit_terminal() {
    printf("Exiting the terminal.\n Thank You!\n");
    exit(0);
}

void run_python(){
     printf("You can code in python now\n");
    FILE* fpyth;
    fpyth = fopen("temp_script.py", "w" );
    if(fpyth==NULL){
        printf("python not initialized");
    }
    else{
        printf("the  python file is created successfully\n");
    }
}