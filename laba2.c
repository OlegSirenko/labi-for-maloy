#include "stdio.h"
/// ЗАДАНИЕ 1
int main() // в примере функция определяется оператором void. Void функция не имеет return 0;
{ // main функция всегда должна возвращать int !!!!!!!
    int a, b, c;
    printf("Vvedite storoni treygolnika \n");
    scanf("%d%d%d", &a, &b, &c); // %lf -- long float (вещественное ), %d -- decimal (целое)
    if (a == b || b == c || c == a){
        printf("Treygolnik so storonami %d, %d, %d является равнобедренным", a, b, c);
    }
    else{
        printf("Treygolnik so storonami %d, %d, %d не является равнобедренным", a, b, c);
    }
    return 0;
}

/// ЗАДАНИЕ 2
#include "math.h"
int main_2()
{
    double S1, S2;
    const double Pi = 3.14159265359;
    double diameter, diagonal; // Диаметр круга и диагональ квадрата.
    printf("Введите площадь круга и квадрата\n");
    scanf("%lf%lf", &S1, &S2); // %lf -- long float (вещественное ), %d -- decimal (целое)
    diameter = 2 * sqrt(S1/Pi);
    diagonal = sqrt(S2);

    if (diameter <= diagonal){
        printf("Круг вписывается в квадрат");
        return 0;
    }
    if (diameter>= diagonal){
        printf("Квадрат вписывается в круг");
    }
    return 0;
}

/// ЗАДАНИЕ 3
#include "math.h"
/// !!! SMART VERSION !!! ///
int main_3(){
    int X;
    int power;
    double result;
    printf("Введите X и единицу измерения:\nМиллиметр:-4\nСантиметр: -3\nДециметр: -2\nМетр: 1\nКилометр: 3\n");
    scanf("%d%d", &X,&power);

    result =  X * pow(10, power);
    printf("X в степени %d = %f метров", power, result);
    return 0;
}

/// SWITCH VERSION ///
#include "math.h"
int main_4(){
    int X;
    int power;
    double result;
    printf("Введите X и единицу измерения:\nМиллиметр:1\nСантиметр: 2\nДециметр: 3\nМетр: 4\nКилометр: 5\n");
    scanf("%d%d", &X,&power);

    switch (power) { // СВИТЧ кста хуйня, если есть вариант не использовать свитч, то лучше не использовать
        default:
            printf("Введите корректное значение единиц измерения!");
            return 1;
        case 1: result = X * pow(10, -4);
        case 2: result = X * pow(10, -3);
        case 3: result = X * pow(10, -2);
        case 4: result = X * pow(10, 1);
        case 5: result = X * pow(10, 3);
    }

    printf("X в метрах = %f", result);
    return 0;
}