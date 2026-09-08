#include <stdio.h> 
#include <math.h> 
 
double add(double a, double b); 
double subtract(double a, double b); 
double multiply(double a, double b); 
double divide(double a, double b); 
double modulus(double a, double b); 
double power(double a, double b); 
 
int main() { 
 
    char op; 
    char choice; 
    char function; 
 
    double num1, num2; 
    double result; 
    double op_result; 
 
    printf("Enter the mathematical operator [+,-,*,/,%%,^]: "); 
    scanf(" %c", &op); 
 
    printf("Enter Number 1: "); 
    scanf("%lf", &num1); 
 
    printf("Enter Number 2: "); 
    scanf("%lf", &num2); 
 
    if (op == '+') { 
        result = add(num1, num2); 
    } 
    else if (op == '-') { 
        result = subtract(num1, num2); 
    } 
    else if (op == '*') { 
        result = multiply(num1, num2); 
    } 
    else if (op == '/') { 
 
        if (num2 == 0) { 
            printf("Cannot divide by zero.\n"); 
            return 1; 
        } 
 
        result = divide(num1, num2); 
    } 
    else if (op == '%') { 
 
        if (num2 == 0) { 
            printf("Cannot calculate modulus by zero.\n"); 
            return 1; 
        } 
 
        result = modulus(num1, num2); 
    } 
    else if (op == '^') { 
        result = power(num1, num2); 
    } 
    else { 
        printf("Invalid Operator\n"); 
        return 1; 
    } 
 
    printf("\nResult = %.2lf\n", result); 
 
    printf("\nDo you want to perform another operation on the result? [y/n]: "); 
    scanf(" %c", &choice); 
 
    if (choice == 'y') { 
 
        printf("Choose [s = sin, c = cos, q = square root, l = log]: "); 
        scanf(" %c", &function); 
 
        if (function == 's') { 
            op_result = sin(result); 
        } 
        else if (function == 'c') { 
            op_result = cos(result); 
        } 
        else if (function == 'q') { 
 
            if (result < 0) { 
                printf("Cannot find square root of a negative number.\n"); 
                return 1; 
            } 
 
            op_result = sqrt(result); 
        } 
        else if (function == 'l') { 
 
            if (result <= 0) { 
                printf("Log is only defined for positive numbers.\n"); 
                return 1; 
            } 
 
            op_result = log(result); 
        } 
        else { 
            printf("Invalid operation.\n"); 
            return 1; 
        } 
 
        printf("New Result = %.2lf\n", op_result); 
    } 
    else if (choice == 'n') { 
        printf("Calculator finished.\n"); 
    } 
    else { 
        printf("Invalid choice.\n"); 
        return 1; 
    } 
 
    return 0; 
} 
 
 
double add(double a, double b) { 
    return a + b; 
} 
 
double subtract(double a, double b) { 
    return a - b; 
} 
 
double multiply(double a, double b) { 
    return a * b; 
} 
 
double divide(double a, double b) { 
    return a / b; 
} 
 
double modulus(double a, double b) { 
    return fmod(a, b); 
} 
 
double power(double a, double b) { 
    return pow(a, b); 
}                                                                                                                                                                              
