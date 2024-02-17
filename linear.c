#include<stdio.h>
int main()
{
    int elementSize,searchKey,i;
    printf("Enter Total Number of Elements: ");
    scanf("%d",&elementSize);

    int arr[elementSize];
    printf("Enter %d Elements: ",elementSize);
    for(i=0; i<elementSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search value: ");
    scanf("%d",&searchKey);
    for (i=0; i<elementSize; i++)
    {
        if (searchKey == arr[i]){
           printf("The elements found at %d number index.",i);
            break ;
        }

    }
    if(i==elementSize)
    {
        printf("The search value don't found");
    }



    return 0;
}
