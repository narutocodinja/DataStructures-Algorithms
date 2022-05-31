int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int * arr3 = new int[arr1Size+arr2Size]; // creating new array
    int i = 0, j = 0, k = 0;
    while(i < arr1Size && j < arr2Size){
        if(arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    }
    while(i < arr1Size) arr3[k++] = arr1[i++];
    while(j < arr2Size) arr3[k++] = arr2[j++];
    
    return arr3; // returning array
}
