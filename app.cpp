

int sum(int arr[]){
    int total =0;
    for(int i =0; i <sizeof(arr)/sizeof(int);++i){
        total+= arr[i];
    }
    return total;
}

int product(int arr[]){
    int total =1;
    for(int i =0; i <sizeof(arr)/sizeof(int);++i){
        total= arr[i] * total;
    }
    return total;
}