 #include <stdio.h>
int max(int num1, int num2)
{
    return num1>num2?num1:num2 ;
}

int Rec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], Rec(A, n-1));
}
int main()
{
      int n;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
        int arr[n] ;
    printf("Enter the elements of the  array:");
    for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

    printf("Largest in given array is %d", Rec(arr, n));
    return 0;
}
