int * removeEven( int *& Arr, int size ) {
  int *temp = new int[size];
  int j = 0;
  for(int i = 0; i < size; i++){
    if(Arr[i] % 2 != 0) temp[j++] = Arr[i];
  }
  Arr = temp;
  return Arr;
}
