long long getInversions(long long *arr, int n){
   long long int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] && i<j) c++;
        }
    }
    return c;
