void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}

void print_array(int a[], int n)
{
    for(int i = 0; i < n; i++){
        printf("%d",a[i]);
        if(i < n - 1) printf(",");
    }
    printf("\n");
}
