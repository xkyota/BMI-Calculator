#include <stdio.h>

int main(void){
    int w;
    double h, h_s, bmi;

    printf("Enter your weight(kg) and height(m) >>> ");
    scanf("%d %lf", &w, &h);

    h_s = h * h;
    bmi = w / h_s;

    if (bmi < 18.5)
    {
        printf("Underweight \n");
    } 
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Normal\n");
    } 
    else if (bmi >= 25 && bmi < 30)
    {
        printf("Overweight \n");
    } 
    else
    {
        printf("Obese \n");
    }

    printf("Your BMI is %.2f \n", bmi);

    return 0;
}
