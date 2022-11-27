///Упорядочить строки целочисленной прямоугольной матрицы по возрастанию количества одинаковых элементов в каждой строке.
/// Найти номер первого из столбцов, не содержащих ни одного отрицательного элемента.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/// Static method
int main(){
    int n;
    printf("Введите ранг матрицы: ");
    scanf("%d", &n);

    int arr[9] = {1, 2, 3,
                  2, 2, 2,
                  3, 1,1};

    int flag_arr[3] = {1, 1, 1};
    int arr_sorted[9] = {0};

    // Находим столбец без отрицательного
    for (int j = 0; j < 3; j++){
        for (int i=j; i<9; i+=3){
            if(arr[i]<0){
                flag_arr[j] = 0;
            }
        }
    }

    for (int i = 0; i<3; i++){
        if (flag_arr[i] == 1){
            printf("Столбец без единого отрицательного -- №%d\n", i+1);
        }
    }

    int equals[3] = {0};

    int buff;
    for(int i = 0; i<9; i+=3){
        buff = arr[9 - 1 - i];
        for (int j = 0; j<3; j++){
            if (arr[9 - (i + j) - 1] == buff){
                equals[3 - 1 - i/3]++;
                buff = arr[9 - (j+i) -1];
            }
        }
        printf("\n  Кол-во повторяющихся цифр в %d-й строке  =  %d \n", (9 - i)/3, equals[3 - 1 - i/3]);
    }

    for (int i = 0; i<3; i++){
        printf("Итого в %d-й строке %d повторяющихся чисел \n", n-i, equals[i]);
    }
}