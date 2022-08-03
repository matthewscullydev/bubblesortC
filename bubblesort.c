#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define arraysize 10

//vars
//
//


int array[arraysize];



int main() {

    int printArray();
    int bubbleSort();

    srand(time(NULL));

   
    for (int i = 0; i < arraysize; i++){
    
        int number = rand() % 360;
 
        array[i] = number;

    }
        
    
    printArray();
    printf("\n");
    bubbleSort();
    printArray();
    return 0;
}



int printArray(){

    for (int i = 0; i < arraysize; i++){
    
        printf("%d\n",array[i]);
    
    }
    
    return 0;

}

int bubbleSort(){



    for(int i = 0; i < arraysize; i++){

        for(int j = 0; j < arraysize-i-1; j++){

            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }
    }
    return 0;
}


