#include iostream
using namespace std;
 
void swap(int a, int b)
int temp = a;
a = b;
b = temp;
 
 
int partition(int arr, int low, int high)
int pivot = arrhigh;
int i = low - 1;
 
for (int j = low; j high; j++)
if (arrj pivot)
i++;
swap(arri, arrj);
swap(arri + 1, arrhigh);
return i + 1;
 
 
void quickSort(int arr, int low, int high)
if (low high)
int pi = partition(arr, low, high);
 
quickSort(arr, low, pi - 1);
quickSort(arr, pi + 1, high);
 
 
void printArray(int arr, int size)
for (int i = 0; i size; i++)
cout arri ;
cout endl;
 
 
int main()
int arr = 10, 1000, 8, 9, 1, 5;
int n = sizeof(arr) / sizeof(arr0);
 
cout nieposortowany: ;
printArray(arr, n);
 
quickSort(arr, 0, n - 1);
 
cout posortowany: ;
printArray(arr, n);
 
return 0;