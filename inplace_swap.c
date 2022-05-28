
void inplace_swap(int *x, int *y);
void reverse_array(int a[],int cnt);
int main() 
{

    int a[] = {1,2,3,4,5};
    reverse_array(a,5);
}

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        /* code */
        inplace_swap(&a[first], &a[last]);
    }
    
}