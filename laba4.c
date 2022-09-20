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

    // TODO check sum of minumum
    int sum_for_min = 0;
    for(int i=0;i<index_min;i++){
        sum_for_min += arr[i];
    }

    printf("Сумма положительных равна = %d\n", sum);
    printf("Сумма до минимума равна = %d", sum);

    return 0;
};
