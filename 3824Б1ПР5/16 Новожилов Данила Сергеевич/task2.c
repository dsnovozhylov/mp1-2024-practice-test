// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий в массиве.
int task2(unsigned A[], size_t n)
{
  return -1;
}
Решение:
#include <stdio.h>
int task2(int A[], int n)
{
    int series_count = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] == A[i+1]) {
            series_count++;
        }
    }
    return series_count;
}
    int result = task2(A, n);
    printf("Количество серий в массиве: %d\n", result);

    return 0;
}
