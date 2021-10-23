#include<stdio.h>
#include <stdlib.h> 
#include <time.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
int main() 
{ 
    int n;
	scanf("%d",&n);
	int Arr[n];
	for(int i=0;i<n;i++)
	//	scanf("%d",&Arr[i]);
    		Arr[i]=rand()%1000;
	
	 struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
	quickSort(Arr, 0, n-1); 
     clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    printf ("Total time = %f seconds\n",(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec)/2);
      
// for (int i=0; i < n; i++) 
     //   printf("%d ", Arr[i]); 
    return 0; 
} 
