template<class Type>
void SelectionSort(Type a[], int n){
    for (int i=0; i<n-1; i++){
        int j = i;
        for (int k=i+1; k<n; k++){
            if (a[k]<a[j]) j = k;
        Type t = a[i]; a[i] = a[j]; a[j] = t;
        }
    }
}