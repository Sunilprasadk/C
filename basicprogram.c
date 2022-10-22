#include <stdio.h> //pre-processor
#define PI 3.14 //CONSTANT VALUE

int main(){
    int a = 50;//integer - %d
    char letter = 'c'; //character - %c
    char str[50] = "Hai"; //string - %s
    float decimal = 0.2; //float - %f
    
    int userValue;
    
    const int SUNIL_ID=1; //constant
    
    printf("The id is : %.2f \n", PI);
    
    printf("Enter the value :");
    scanf("%d", &userValue);
    
    printf("The value is : %d", userValue);

    return 0;
}