
#include <string.h>
#include <stdio.h>
#include <stdint.h>
void readline(char **argv) {

 printf("CS318> ");
 uint8_t key;
 char buffer[256];
 int buffer_index = 0;
 while(1){
  key = input_getc();
    printf("%c", key);
    
    if(key == 13){
        buffer[buffer_index] = '\0';
      //  printf("\nTHIS IS THE BUFFER: %s ", buffer);
        //printf("NEWLINE\n");
        //then a new line was pressed
      //  buffer[--buffer_index] = '\0';
        if(strcmp(buffer, "whoami") == 0){
            printf("\nAndreas Jaramillo\nCS318> ");
        } else if(strcmp(buffer, "exit") == 0){
            break;
        }
        else {
            printf("\nInvalid Command\nCS318> ");
        }
        buffer_index = 0;
        buffer[buffer_index] = '\0';
    }
    //  else if(key == 8){
    //     //this is for backspace
    //     //remove character
    //     if(buffer_index > 7) {
    //         buffer[buffer_index] = '\0';
    //         buffer_index--;
    //      //move back one
    //     }
    //       printf("\033[%dD", 1);
    //    //we dont do anything otherwise since we want the CS318> to stay there


    // }
    else {
        if (buffer_index >= 255) {
            printf("Maximum buffer size reached. ");

            // Reset buffer for the next input
            buffer_index = 0;
            buffer[buffer_index] = '\0';
        } else{
          //  printf("made it");
            buffer[buffer_index++] = (char)key;
        }
        
    }
 }
  
  //  while (1) { 
   //     key = input_getc();
    //    if(key == 1212){
     //        printf("%c", key);
      //  }
       
        
        // if (i > 0 && buffer[i - 1] == '\n') {
        //     buffer[i - 1] = '\0';
        // }

        // if(strcmp(buffer, "whoami") == 0){
        //     vprintf("Andreas Jaramillo\nCS318> ", NULL);
        // } else if(strcmp(buffer, "exit") == 0){
        //     break;
        // }
        // else {
        //     vprintf("Andreas Jaramillo\nCS318> ", NULL);
        // }
    //    i =0;
 // }
}