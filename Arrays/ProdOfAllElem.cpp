int * findProduct(int arr[], int size)  { 
    int * product = new int[size]; 
    int prod = 1, flag = -1, count = 0;

    for(int i = 0; i < size; i++){
      if(arr[i] != 0) prod *= arr[i];
      else{
        flag = i;
        count ++;
      }
    }
    if(count < 2){
    for(int i = 0; i < size; i++){
      if(flag == -1){
        product[i] = prod/arr[i];
      }
      else{
        if(flag == i) product[i] = prod;
        else product[i] = 0;
      }
    }
    }
    else{
      for(int i = 0; i < size; i++) product[i] = 0;
    }

    return product; 
} 
