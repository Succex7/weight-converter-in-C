#include <stdio.h>

int main() {

    // WEIGHT CONVERTER

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n \n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n \n");
    printf("Enter you choice (option 1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to pounds
        printf("Enter the weight in kilograms (kg): ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }

    else if(choice == 2){
        // pounds to kilograms
        printf("Enter te weight in pounds (): ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }

    else{
        printf("Invalid choice! Please enter 1 or 2");
    }
    return 0;
}