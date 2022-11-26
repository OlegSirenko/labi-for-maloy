#include "stdio.h"
#include <stdlib.h> // для рандома

int main_1()
{
    int n; // кол-во элементов массива
    printf("Введите кол-во элементов массива:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){ // генерация массива случайных чисел
        arr[i] = 5 + rand() % (21);; // генерация случайного числа от 5 до 25
        printf("%d\t", arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    int index_min = 0;
    int index_max = 0;

    // находим минимум и максимум
    for(int i=0; i<n; i++){
        if (max<arr[i]){
            max=arr[i];
            index_max = i;
        }
        if (min>arr[i]){
            min=arr[i];
            index_min = i;
        }
    }
    printf("\n\tmax = %d на месте %d\n\tmin = %d на месте %d\n ", max,index_max, min, index_min);

    // меняем местами
    arr[index_min] = max;
    arr[index_max] = min;

    printf("Новый массив выглядит так:\n");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

/// 12.	В одномерном массиве, состоящем из n вещественных элементов, вычислить:
/// - произведение положительных элементов массива;
/// - сумму элементов массива, расположенных до минимального элемента.

int main_2(){
    int n; // кол-во элементов массива
    int sum = 0;
    printf("Введите кол-во элементов массива:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){ // генерация массива случайных чисел
        //arr[i] = -10 + rand() % (21);; // генерация случайного числа от -10 до 10
        printf("Введите %d элемент массива: \n", i);
        scanf("%d",  &arr[i]);

        if (arr[i] > 0){
            sum += arr[i]; // сразу находим сумму положительных чисел.
        }
    }

    int min = arr[0];
    int index_min = 0; // не знаю как сделать красивее...

    for(int i=0;i<n;i++){ // ищем минимум
        if (min>arr[i]) {
            min = arr[i];
            index_min = i;
        }
    }
    printf("минимум = %d, indexmin = %d\n", min, index_min);


    int sum_for_min = 0;
    for(int i=0;i<=index_min;i++){
        sum_for_min += arr[i];
        printf("%d\n", arr[i]);
    }

    printf("Сумма положительных равна = %d\n", sum);
    printf("Сумма до минимума равна = %d\n", sum_for_min);
    return 0;
};


// ЗАДАНИЕ 3
int main(){
    int k, n, q;

    printf("Введите число q ");
    scanf("%d", &q);

    printf("Введите число элементов k массива X: ");
    scanf("%d", &k);
    printf("Введите число элементов n массива Y: ");
    scanf("%d", &n);

    int x[20] = {0};
    int y[20] = {0};

    int min_div;
    int min_sum;
    printf("Введите %d чисел для массива X через пробел\n", k);
    for (int i =0; i<k; i++){
        scanf("%d", &x[i]);
    }

    for (int i =0; i<k; i++){
        printf("%d Элемент масива -- %d\n",i, x[i]);
    }

    printf("Введите %d чисел для массива Y через пробел\n", n);
    for (int i =0; i<n; i++){
        scanf("%d", &y[i]);
    }

    for (int i =0; i<n; i++){
        printf("\n%d Элемент масива -- %d",i, y[i]);
    }

    // переменная min_div описывает минимальную разницу (q - (x[i] + y[i]))

    min_sum = (x[0] + y[0]);
    min_div = abs(q - min_sum); // берем по модулю, чтобы все разницы были положительными

    for (int i = 0; i<k;i++){  // Начинаем с 1 т.к. 0-й элемент мы уже затронули
        for (int j = 0; j<n; j++){
            if(abs(q - (x[i]+y[j])) <= min_div){
                min_sum = x[i] + y[j];
                min_div = abs(q - (x[i]+y[j]));
            }
        }
    }

    printf("\nНаиболее близкая к Q= %d cумма X[i]+Y[j]= %d", q, min_sum);

}