#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This is studpid. Testing a comment.*/

const unsigned int MAX_SIZE=100;
typedef unsigned int uint;

// This function will be used to swap "pointers".
void swap(char**, char**);

// Bubble sort function here.
void bubbleSort(char**, uint);

// Read quotes from quotes.txt file file and add them to array. Adjust the size as well!
// Note: size should reflect the number of quotes in the array/quotes.txt file!
void read_in(char**, uint*);

// Print the quotes using array of pointers.
void print_out(char**, uint);

// Save the sorted quotes in the output.txt file
void write_out(char**, uint);

// Free memory!
void free_memory(char**, uint);

int main() {

    // Create array of pointers. Each pointer should point to heap memory where
    // each quote is kept. I.e. arr[0] points to quote N1 saved on the heap.
    char *arr[MAX_SIZE];

    // Number of quotes in the file quotes.txt. Must be adjusted when the file is read!
    uint size=MAX_SIZE; 
    
    read_in(arr, &size);

//    printf("--- Input:\n");
//    print_out(arr, size);
//    
//    bubbleSort(arr, size);
//    
//    printf("--- Output:\n");    
//    print_out(arr, size);
//    write_out(arr, size);
//    
//    free_memory(arr, size);
    
    return (0);
}

void read_in(char** str, uint* size){
    
   char name[MAX_SIZE][MAX_SIZE];
   
    
    FILE *quotes;
    quotes = fopen("C:\\Courses\\PROG20799\\NetBeans\\Assignment2\\quotes.txt", "r");
    
    if(quotes == NULL){
        printf("Unable to open file\n");
    }
    else{
        int i =0;
        
        while ( fgets(name[i], MAX_SIZE, quotes) != NULL ){
            
          
                
            
            printf("%s", name[i]);
        }
    
        fclose(quotes);
    }









}







