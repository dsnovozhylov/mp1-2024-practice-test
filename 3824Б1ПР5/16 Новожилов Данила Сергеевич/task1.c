// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.
int task1(unsigned A[], size_t N)
{
  return -1;
}
Решение:
#include <stdio.h>
#define MAX(A, i) (A[i] == A[(i)])
#define MIN(A, i) (A[i] == A[N - 1])
#define BETWEEN(A, x, y) (x <= A[y] && A[x] >= A[y])

int task1(unsigned A[], size_t N)
{
    int max_index = -1; <stdio.h>

#define    int min_index = -1;
    for (size_t i = 0; i < N; ++i) {
        if (MAX(A, i)) {
            if (max_index == -1) {
                max_index = i;
            }
        }
    }

    for (size_t i = 0; i < N; ++i) {
        if (MIN(A, i)) {
            if (min_index == -1) {
                min_index = i;
            }
        }
    }

    if (max_index == -1 || min_index == -1) {
        return -1;
    }

    int count = 0;
    for (size_t i = max_index; i <= min_index; ++i) {
        if (BETWEEN(A, i, min_index)) {
            ++count;
        }
    }
    return count;
}
    int result = task1(A, N);
    printf("Количество элементов между первым и последним минимальным элементами: %d\n", result);
