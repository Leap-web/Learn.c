#include <stdio.h>
int main(){
   // Variables for the first operation (sum of arrays )
    int array1[3]= {1,2,3};
    int array2[3]= {4,5,6};
    int array3[3];
    int k;

    // Summing arrays 
    for( k=0; k<3; k++){  // loop over elements of array3
        array3[k]= array1[k] + array2[k]; // sum over elements of the 2 arrays
        }
        printf("The output must be = { "); 
        for( k=0; k<3; k++){ // loop over element to print only 3 elements of array
        printf("%d ", array3[k]);
        }
        printf("}");
        
    // Variables for the second operation (different of arrays )
    int array5[3]= {2,3,4};
    int array6[3]= {8, 8,7};
    int array7[3];
    int i;
    // Subtracting arrays
    for( i=0; i<3; i++){
    array7[i]= array5[i]- array6[i];
    }
    

    printf("\nTHE OUTPUT MUST BE = { ");
    for( i=0; i<3; i++){
    printf("%d", array7[i]);
  }
    printf("}");
    return 0;
}
        
        
        
        



    

    
    
    
    
    
    
    
    
    
    

        




