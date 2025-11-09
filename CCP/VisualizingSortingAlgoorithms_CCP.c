#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// ======================= COMMON HELPER =======================
void printArray(int arr[], int size) {
    for (int k = 0; k < size; k++)
        printf("%d ", arr[k]);
    printf("\n");
}

// ======================= INSERTION SORT =======================
void insertionSort(int array[], int len) {
    int i, j, temp;
    printf("\n--- Starting Insertion Sort ---\n");
    printf("Initial Array: ");
    printArray(array, len);

    for (i = 1; i < len; i++) {
        j = i;
        printf("\nPass %d: Considering element %d (at index %d)\n", i, array[i], i);
        
        while (j > 0 && array[j - 1] > array[j]) {
            temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            printf("  Swapped %d and %d. Array state: ", array[j], array[j - 1]);
            printArray(array, len);
            j--;
        }
    }

    printf("\n--- Sorting Complete ---\n");
    printf("Sorted Array: ");
    printArray(array, len);
}

// ======================= MERGE SORT =======================
void Merge(int arr[], int p, int q, int r, int size)
{
	int n1,n2,i,j,k;
	n1 = q - p + 1;  //Calculating array size for left array 
	n2 = r - q;      //Calculating array size for right array 
	
	int *LeftArray = malloc((n1 + 1) * sizeof(int));  //allocation of dynamic memory
	int *RightArray = malloc((n2 + 1) * sizeof(int)); 
	
	if (LeftArray == NULL || RightArray == NULL) 
	{
    	printf("Memory allocation failed!\n");  //Error handling
    	exit(1);
	}
	
	for (i=0; i<n1; i++)
		LeftArray[i] = arr[p + i ];  //Filling the sub array with values from the original array
	
	for (j=0; j<n2; j++)
		RightArray[j] = arr[q + 1 + j ]; 
	
	LeftArray[n1]= INT_MAX;  //Trying to put infinty in last cell of the sub arrays 
	RightArray[n2]= INT_MAX; //but 1/0 will give error so we just store the max value
	
	i=0; j=0;    			//Re-initializing the pointers of left and right sub arrays
								
	for (k=p; k<=r; k++)     
	{
		if (LeftArray[i] <= RightArray[j])
		{
			arr[k] = LeftArray[i];
			i++;					  	//Comparing both arrays with each other
		}								//and storing them in the original array in the right order
		else
		{
			arr[k] = RightArray[j];
			j++;
		}
	}
	
	printf("Merged [%d, %d]: ", p, r); //Printing for Visualization
    printArray(arr, size);				//not a neccessary step
	printf("\n");
	
    free(LeftArray);
    free(RightArray); // free the memory since it was manually allocated
}

void divideArray(int arr[], int p, int r, int size)
{
    if (p < r)
    {
        int q = (int)((p+r)/2);  //Finding mid-point

        // Printing the current segment before dividing
        printf("Dividing Array [%d..%d]: ", p, r); 		//For Visualization only
        for (int i = p; i <= r; i++)					//Not neccessary steps
            printf("%d ", arr[i]);
        printf("\n");

        // Recursion calls
        divideArray(arr, p, q, size);
        divideArray(arr, q + 1, r, size);

        // Printing left and right subarrays before merging
        printf("\n");
		printf("Left Array [%d..%d]: ", p, q); 		//For Visualization only
        for (int i = p; i <= q; i++)				//Not neccessary steps
            printf("%d ", arr[i]);
        printf("\n");

        printf("Right Array [%d..%d]: ", q + 1, r); //For Visualization only
        for (int i = q + 1; i <= r; i++)			//Not neccessary steps
            printf("%d ", arr[i]);
        printf("\n");

        // Merging the subarrays
        Merge(arr, p, q, r, size);
    }
}

// ======================= BUBBLE SORT =======================
void bubbleSort(int arr[], int len, int order) {
    int temp;
    printf("\n--- Starting Bubble Sort (%s) ---\n",
           order == 1 ? "Ascending" : "Descending");
    printf("Initial Array: ");
    printArray(arr, len);

    for (int i = 0; i < len - 1; i++) {
        printf("\nPass %d:\n", i + 1);
        for (int j = 0; j < len - 1 - i; j++) {
            int condition = (order == 1) ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);
            if (condition) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printf("  Swapped %d and %d. Array state: ", arr[j], arr[j + 1]);
                printArray(arr, len);
            }
        }
    }

    printf("\n--- Sorting Complete ---\n");
    printf("Sorted Array: ");
    printArray(arr, len);
}

// ======================= MAIN FUNCTION =======================
int main() {
    int len, choice;

    printf("Enter the length of array: ");
    if (scanf("%d", &len) != 1 || len <= 0) {
        printf("Invalid length entered.\n");
        return 1;
    }

    int arr[len];
    printf("Enter %d numbers:\n", len);
    for (int i = 0; i < len; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
    }

    printf("\nSelect Sorting Algorithm:\n");
    printf("1. Insertion Sort\n");
    printf("2. Merge Sort\n");
    printf("3. Bubble Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insertionSort(arr, len);
            break;

        case 2:
            printf("\n--- Starting Merge Sort ---\n");
            divideArray(arr, 0, len - 1, len);
            printf("\n--- Sorting Complete ---\nSorted Array: ");
            printArray(arr, len);
            break;

        case 3: {
            int order;
            printf("\n1: Ascending\n2: Descending\nEnter order: ");
            scanf("%d", &order);
            if (order != 1 && order != 2) {
                printf("Invalid option!\n");
                return 1;
            }
            bubbleSort(arr, len, order);
            break;
        }

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
