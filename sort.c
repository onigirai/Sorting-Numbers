#include<stdio.h>

void sort(int n, int *arr);

int main(){
    
    //asks for the array size
    int size;
    do{
        printf("Array size: ");
        scanf("%i", &size);
    }while(size < 0);

    int arr[size];
    int i;
    
    //looping through the content of the array
    printf("Enter the elements of the array\n");

    for(i=0; i<size; i++){
        printf("(%i):", i+1);
        scanf("%i", &arr[i]);
    }
    
    //prints out entered array values
    printf("Given array:");

    for(i=0; i<size;i++){
        printf("%i ", arr[i]);
    }
    printf("\n");

    sort(size, arr);

    return 0;
}

//sorting function using pointers
void sort(int n, int *arr){

    int i, j, top;

    for (i=0; i<n; i++) { 
        for (j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + i)) { 
                top = *(arr + i); 
                *(arr + i) = *(arr + j); 
                *(arr + j) = top; 
            } 
        } 
    }

    printf("Array in ascending order: ");

    for(i=0; i<n; i++){
        printf("%i ", *(arr + i));
    }
}
