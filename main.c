#include "stdio.h"

// <- однострочный комментарий
// ПРИМЕР 1
int main()                      // Объявление функции
{
    printf ("Welcome to C!\n"); // функция вывода в терминал
    return 0;                   // выход из функции. 0 - код успешного выполнения функции
}
//___________________//

/* <- многострочный комментарий */


// Задание 2
int main_2()
{
    printf("Welcome\n"); // символ "\n" переносит курсор на следующую строку
    printf("to\nC!\n");
    return 0;
}



// Задание 3
int main_3()
{
    printf("Welcome to C!\n"); // вся фраза в одну строку
    printf("Welcome");
    printf(" to C!\n"); // в одну строку через два принта
    printf("Welcome\nto C!"); // в две строки через один принт
    return 0;
}


// Задание 4

int main_4()
{
    int integer1, integer2, sum;
    printf("Vvedite pervoe celoe chislo\n");
    scanf("%d", &integer1);
    printf("Vvedite vtoroe celoe chislo \n");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Summa ravna %d\n", sum);
    return 0;
}



// Задание 5
int main_5()
{
    int int1, int2, int3, sum, mult;
    printf("Vvedite pervoe celoe chislo\n");
    scanf("%d", &int1);
    printf("Vvedite vtoroe celoe chislo \n");
    scanf("%d", &int2);
    printf("Vvedite tretye celoe chislo \n");
    scanf("%d", &int3);
    sum = int1 + int2 + int3;
    mult = int1 * int2 * int3;
    printf("Summa ravna  = %d", sum);
    printf("Multiplication equals = %d", mult);
    return 0;
}




// Задание 6
int main_6()
{
    int i1, i2, i3;      //  три переменные целого типа со знаком
    int ix=5, iy=-7;
    long int l1, l2;  //  длинные целые знаковые переменные- четыре байта
    long unsigned int  lu1=125, lu2=1234567;
    //под длинные целые беззнаковые переменные  выделяется по четыре байта  и в них записываются соответствующие значения
    float f1=-1.575, f2=3.14;   // переменные вещественного типа по четыре байта
    char let, symb='z', n_str='\n';  // символьные переменные, выделяется по одному байту
    short int s1=100, s2=50;    //   два байта
    const unsigned int u=113;   //целочисленная константа
    const float pi=3.14;        //   вещественная константа
    printf("Vvedite 3 celih chisla:\n");
    scanf("%d%d%d", &i1, &i2, &i3);
    printf("chislo1=%d\nchislo2=%d\nchislo3=%d\n", i1, i2, i3);
    printf("Celoe bez znaka ix = %d\nCeloe so znakom iy = %i\n", ix, iy);
    printf("Veshestvenoe f1 = %.3f\n Veshestvenoe f2 = %.2f\n", f1, f2);
    printf("Simvol symbl = %c\n Kod simvola %c = %d \n", symb, symb, symb);
}



// Задание 7
int main_7()
{
    double i1, i2, i3;      //  три переменные вещественного типа со знаком
    int ix=5, iy=-7;
    long int l1, l2;  //  длинные целые знаковые переменные- четыре байта
    long unsigned int  lu1=125, lu2=1234567;
    //под длинные целые беззнаковые переменные  выделяется по четыре байта  и в них записываются соответствующие значения
    double f1=-1.575, f2=3.14;
    char let, symb='z', n_str='\n';

    printf("Vvedite 3 veshestvennih chisla:\n");
    scanf("%lf%lf%lf", &i1, &i2, &i3); // %lf -- long float (вещественное ), %d -- decimal (целое)
    printf("chislo1=%f\nchislo2=%f\nchislo3=%f\n", i1, i2, i3);
    printf("Celoe bez znaka ix = %d\nCeloe so znakom iy = %i\n", ix, iy);
    printf("Veshestvenoe f1 = %.3f\n Veshestvenoe f2 = %.2f\n", f1, f2);
    printf("Simvol symbl = %c\n Kod simvola %c = %d \n", symb, symb, symb);
}



// Задание 8
int main_8()
{
    double num1, num2, num3;          //  три переменные вещественного типа со знаком
    double sum, mult, avg;
    printf("Vvedite 3 veshestvennih chisla:\n");
    scanf("%lf%lf%lf", &num1, &num2, &num3); // %lf -- long float (вещественное ), %d -- decimal (целое)
    sum = num1 + num2 + num3;
    avg = sum / 3;
    mult = num1*num2*num3;

    printf("Sum = %lf\n", sum);
    printf("Avg = %lf\n", avg);
    printf("Mult = %lf\n", mult);
}


// Инвидидуальное задание
#include "math.h"
int main_9()
{
    // R - радиус, l - длииа ребра, H - высота конуса
    // S(бок) = Pi*R*l
    // S(полн) = S (бок) + S (круга) = Pi *R*l + Pi*R^2
    // V = (Pi * R^2 * H)/3
    const double Pi = 3.141592; // С точностью до 7-го значащего числа
    double Sb;      // Площадь боковой поверхности конуса
    double Sp;      // Площадь полной поверхности конуса
    double V;       // объем конуса
    double R, l, H;

    printf("Vvedite Radius, dlinu rebra, visotu \n");
    scanf("%lf%lf%lf", &R, &l, &H); // %lf -- long float (вещественное ), %d -- decimal (целое)

    //double powered_R = pow(R, 2.0f); // возведение в квадрат
    Sb = Pi * R  * l;
    Sp = Sb + Pi * R*R; // используй pow(R, 2.0f)  для возведения в степень, на линуксе она почемв-то не работает
    V = (Pi * R* R * H)/3; // используй pow(R, 2.0f)  для возведения в степень, на линуксе она почемв-то не работает

    printf("S bokovoy poverhnosty = %lf\n", Sb);
    printf("S polnoy poverhnoty = %lf\n", Sp);
    printf("V = %lf\n", V);
}

