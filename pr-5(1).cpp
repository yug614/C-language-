#include <stdio.h>

int main() {
    int size, i;
    
   
    printf("Enter the size of the array: ");
    scanf("%d", &size);
   
 
    int a[size];
    printf("Enter elements:\n");
    
    for (i = 0; i < size; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    
    
    printf("Negative elements in the array: \n");
    for (i = 0; i < size; i++) {
        if (a[i] < 0) {
            printf("%d ", a[i]);
        }
    }
    
    
}
