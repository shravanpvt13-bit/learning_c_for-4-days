#include<stdio.h>
int main()
{
    int notes[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int change,count=0,amt,price;
    printf("enter the paid amount\n");
    scanf("%d",&amt);
    printf("enter the price of the item\n");
    scanf("%d",&price);
    change = amt-price;
    for(int i=0;i<10;i++)
    {
       if(change>=notes[i]){
        count=change/notes[i];
        change=change%notes[i];
        printf("%d notes of %d\n",count,notes[i]);
       }
    }
    return 0;
}