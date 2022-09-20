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