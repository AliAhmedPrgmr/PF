#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr){
    int temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}

void SortFunction(int *arr, int *size, int order){
    int i, j, key;
    for(i=1;i<*size;i++){
        key = arr[i];
        j = i - 1;
        if(order == 1){
            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
        } else {
            while(j>=0 && arr[j] < key){
                arr[j+1] = arr[j];
                j--;
            }
        }
        arr[j+1] = key;
    }
}

int main(){
    printf("Question 2:\n");
    int a=1, b=2, c=3;
    swaped(&a, &b, &c);
    printf("%d %d %d\n\n", a, b, c);

    printf("Question 3:\n");
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p1 = arr1;
    int sum = 0, i;
    for(i=0;i<10;i++) sum += *(p1+i);
    printf("%d\n\n", sum);

    printf("Question 4:\n");
    float a2[20] = {3.2,1.5,9.1,4.4,7.8,2.2,6.6,8.9,5.1,0.5,11.2,10.3,14.6,13.4,12.2,15.1,16.3,18.9,17.5,19.7};
    float *p2 = a2;
    float max1 = *p2, max2 = *p2;
    for(i=1;i<20;i++){
        if(*(p2+i) > max1){
            max2 = max1;
            max1 = *(p2+i);
        } else if(*(p2+i) > max2 && *(p2+i) != max1){
            max2 = *(p2+i);
        }
    }
    printf("%f\n\n", max2);

    printf("Question 5:\n");
    int a3[8] = {5,2,9,1,7,3,8,6};
    int size = 8;
    int order;
    printf("Enter order (1 Ascending, 2 Descending): ");
    scanf("%d", &order);
    SortFunction(a3, &size, order);
    for(i=0;i<size;i++) printf("%d ", a3[i]);
    printf("\n\n");

    printf("Question 6:\n");
    int a4[10];
    for(i=0;i<10;i++) a4[i] = i * i;
    for(i=0;i<10;i++) printf("%d ", *(a4+i));
    printf("\n");

    return 0;
}