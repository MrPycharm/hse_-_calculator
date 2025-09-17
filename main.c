#include <stdio.h>
#include <string.h>
// int main() {
//     printf("Hello, world!")
// }
int sm(float a, float b) {
    // return a + b;
    // if (int a == a) {
    //     int a = a 
    // }
    printf("%.2f\n", a + b);
}

int subtr(int a, float b) {
    // return a - b;
    printf("%.2f\n", a - b);
}

int mult(float a, float b) {
    // return a * b;
    printf("%.2f\n", a * b);
}

int divis(float a, float b) {
    if (b != 0) {
        // return a / b;
        printf("%.2f\n", a / b);
    }
    else {
        printf("Так нельзя, на 0 делят только либо очень умные, либо не очень\n");
        return 0;
    }
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d\n", result);
}

int main() {    
    printf("Привет, это калькулятор - первый проект на C от Саши \n");
    char action[] = "привет";
    while(1) {
        float a;
        printf("Введите первое число:  ");
        scanf("%f", &a);

        printf("Введите действие: умножить (*) | разделить (/) | прибавить (+) | вычесть (-) | факториал (!) | чтобы закончить: (стоп)  ");
        scanf("%s", &action);
        if (strcmp(action, "стоп") == 0) {
            break;
        }
        if (strcmp(action, "!") == 0) { 
            factorial(a); 
        }

        else {
            float b;
            printf("Введите второе число:  ");
            scanf("%f", &b);
            if (strcmp(action, "*") == 0) { mult(a, b); }
            if (strcmp(action, "/") == 0) { divis(a, b); }
            if (strcmp(action, "-") == 0) { sm(a, b); }
            if (strcmp(action, "+") == 0) { subtr(a, b); }
        }
    }

    
}

