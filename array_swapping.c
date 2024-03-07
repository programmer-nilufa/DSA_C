// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5],i;
    //input
    printf("Enter your element:");
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    } 
    //output
    for(i=0; i<4; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    //shifting
    printf("\nAfter shifting:\n");
    for(i=4; i>=3; i--)
    {
        arr[i]=arr[i-1];
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    printf("\n");
    
    //insertion
    printf("Enter insertion into index 2 elements:");
    scanf("%d",&arr[2]);
    for(i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);
    }

    //swapping
    printf("\nAfter swapping:\n");
    int l=0;
    int h=4;
    int temp;
    while(l<h)
    {
        temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}