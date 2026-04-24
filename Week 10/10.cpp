#include <stdio.h>


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


void quickSort(char arr[], int low, int high) {
    if (low < high) {
        char pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        char temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void printChar(char arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

int main() {
    int a[] = {5, 2, 9, 1, 3};
    char b[] = {'z', 'a', 'k', 'b', 'm'};
    int c[] = {8, 4, 6, 2, 7};
    char d[] = {'d', 'x', 'a', 'q', 'c'};

    int n = 5;

    insertionSort(a, n);
    printf("Insertion Sort (Integers): ");
    printInt(a, n);

    bubbleSort(b, n);
    printf("Bubble Sort (Characters): ");
    printChar(b, n);

    selectionSort(c, n);
    printf("Selection Sort (Integers): ");
    printInt(c, n);

    quickSort(d, 0, n - 1);
    printf("Quick Sort (Characters): ");
    printChar(d, n);

    return 0;
}
