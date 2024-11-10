#include <stdio.h>  

int main() {  
    int n, i;  
    float number, sum = 0.0;  

    // قراءة عدد الأرقام من المستخدم  
    printf("أدخل عدد الأرقام: ");  
    scanf("%d", &n);  

    // التحقق من العدد المدخل  
    if (n <= 0) {  
        printf("يرجى إدخال عدد موجب.\n");  
        return 1;  
    }  

    // قراءة الأرقام وحساب المجموع  
    for (i = 1; i <= n; i++) {  
        printf("أدخل الرقم %d: ", i);  
        scanf("%f", &number);  
        sum += number;  
    }  

    // حساب المتوسط  
    float average = sum / n;  
    printf("المجموع: %.2f\n", sum);  
    printf("المتوسط: %.2f\n", average);  

    return 0;  
}