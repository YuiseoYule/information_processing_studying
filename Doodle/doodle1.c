int newline();
int tab();
int Carriage();
int feed();
int end();
int backspace();

#include <stdio.h> 
int main() {       
    
    newline();
    tab();
    Carriage();
    feed();
    end();
    backspace();
    return 0;

} 

int newline() {       
    printf("\n newline:\n");

    printf("Hello, World!\n\\n\\n\\n"); 
    printf("Hello!\n");        
    
    
    return 0;

} 

int tab() {       
    printf("\n\n\n tab:\n");
    printf("Hello, World!\t"); 
    printf("Hello!");        
   
    
    return 0;

} 

int Carriage() {       
    printf("\n\n\n carriage:\n");    
    printf("Hello, World!\r"); 
    printf("Hello!");        
   
    
    return 0;

} 


int feed() {
    printf("\n\n\n feed:\n");    
    printf("Hello, World!\f"); 
    printf("Hello!");        
   
    
    return 0;

} 


int end() {
    printf("\n\n\n end:\n");    
    printf("Hello,\0 World!"); 
    printf("Hello!\n\n\n ");        
    printf("\n\n\n end_reference:\n");    
    printf("Hello, World!"); 
    printf("Hello!\n\n\n ");   
    
    return 0;

} 

int backspace() {
    printf("\n\n\n backspace:\n");    
    printf("Hello,\b\b\b World!"); 
    printf("Hello!\n\n\n ");        
    printf("\n\n\n back_reference:\n");    
    printf("Hello, World!"); 
    printf("Hello!\n\n\n "); 

    return 0;

} 