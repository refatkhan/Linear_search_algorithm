#include<stdio.h>
int main()
{
    /*declareing var for number of elements and searchkey*/

    int elementSize,searchKey,i;
    printf("Enter Total Number of Elements: ");

    /*take element size from user*/
    scanf("%d",&elementSize);

   /*array size declare by this we don't waste memory*/
    int arr[elementSize];

   /*using  loop for taking a lots of value of list*/
    printf("Enter %d Elements: ",elementSize);
    for(i=0; i<elementSize; i++)
    {
        scanf("%d",&arr[i]);
    }

   /*taking search value from user which they want to search*/
    printf("Enter the search value: ");
    scanf("%d",&searchKey);

  /*using loop for finding the value. since we have to check value one by one that's why we are using a loop*/
    for (i=0; i<elementSize; i++)
    {
        if (searchKey == arr[i]){
           printf("The elements found at %d number index.",i); /*you can use i+1 for print the location which start from 1
            break ;
        }

    }
    /*if we don't find this we will print this.*/
    if(i==elementSize)
    {
        printf("The search value don't found");
    }



    return 0;
}
