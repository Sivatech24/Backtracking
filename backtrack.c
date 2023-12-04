#include<stdio.h>

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

void backtrack(int elements[], int start, int n)
{
    if(start == n-1)
    {
        printarray(elements, n);
        return;
    }
    for(int i=start;i<n;i++)
    {
        swap(&elements[start],&elements[i]);

        backtrack(elements, start+1, n);
    }
}
int main()
{
    int elements[]={1,2,3};
    int size=sizeof(elements)/sizeof(elements[0]);
    backtrack(elements, 0, size);
    return 0;
}