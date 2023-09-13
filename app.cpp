

int sum(int arr[]){
    int total =0;
    for(int i =0; i <sizeof(arr)/sizeof(int);++i){
        total+= arr[i];
    }
    return total;
}