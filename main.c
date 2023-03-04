#include <stdio.h>
#include <stdlib.h>

void linearsearch(int item, int arr2[], int len);

int main()
{
    int val;
    int arr[]={19,100,3,5,40,-1,32,7};

    printf("Please enter the value to search it : \n");

    scanf("%d", &val);

    linearsearch(val, arr,8);

    return 0;
}

void linearsearch(int item, int arr2[], int len)
{
    int i;
    for(i=0; i<len; ++i)
    {
        if(item == arr2[i])
        {
            printf("%d Founded at index %d\n", item,i);
            return;
        }
    }
    printf("The value is not in the array.");
}
