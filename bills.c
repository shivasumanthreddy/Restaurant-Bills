#include <stdio.h>

int main(){
    char custname[20];
    int noitem=0,totalbill=0,n;
    printf("------------------Welcome to Restaurent Bills Portal------------------------");
    printf("\nEnter name of the customer : ");
    scanf("%s",&custname);
    printf("\nEnter number of items : ");
    scanf("%d",&noitem);
    printf("-----------Name of the items-------");
    printf("\nEnter 1 for Chicken curry");
    printf("\nEnter 2 for Chicken biryani");
    printf("\nEnter 3 for Chicken soup");
    printf("\nEnter 4 for Chicken noodles");
    printf("\nEnter 5 for Chicken friedrice");
    printf("\nEnter 6 for Mutton curry");
    printf("\nEnter 7 for Mutton  biryani");
    printf("\nEnter 8 for Mutton  soup");
    printf("\nEnter 9 for Mutton  noodles");
    printf("\nEnter 10 for Mutton  friedrice");
    printf("\nEnter 11 for Pulka");
    printf("\nEnter 12 for Springrolls");
    printf("\nEnter 13 for Paneer biryani");
    printf("\nEnter 14 for Mushroom fried rice");
    printf("\nEnter 15 for Manchuria ");
    while(noitem>0){
        printf("\nEnter the item number : ");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Chicken curry price is 180\n");
                totalbill=totalbill+180;
                break;
            case 2:
                printf("Chicken biryani price is 240\n");
                totalbill=totalbill+240;
                break;
            case 3:
                printf("Chicken soup price is 120\n");
                totalbill=totalbill+120;
                break;
            case 4:
                printf("Chicken noodles price is 220\n");
                totalbill=totalbill+220;
                break;
            case 5:
                printf("Chicken fried rice price is 220\n");
                totalbill=totalbill+220;
                break;
            case 6:
                printf("Mutton curry price is 250\n");
                totalbill=totalbill+250;
                break;
            case 7:
                printf("Mutton biryani price is 280\n");
                totalbill=totalbill+280;
                break; 
            case 8:
                printf("Mutton soup price is 150\n");
                totalbill=totalbill+150;
                break;
            case 9:
                printf("Mutton noodles price is 260\n");
                totalbill=totalbill+260;
                break;
            case 10 :
                printf("Mutton fried rice price is 260\n");
                totalbill=totalbill+260;
                break;
            case 11:
                printf("Pulka price is 10\n");
                totalbill=totalbill+10;
                break;
            case 12:
                printf("Springrolls price is 200\n");
                totalbill=totalbill+200;
                break;
            case 13:
                printf("Paneer biryani price is 180\n");
                totalbill=totalbill+180;
                break;
            case 14:
                printf("Mushroom fried rice price is 180\n");
                totalbill=totalbill+180;
                break;
            case 15:
                printf("Manchuria price is 120\n");
                totalbill=totalbill+120;
                break;             
            }
        noitem--;
    }
    printf("\n\n------------Your Bill-------------\n");
    printf("Name : %s",custname);
    printf("\nYour items bill is : %d",totalbill);
    printf("\n-------------Thank You -------------------");
    printf("\n-------------Visit Again---------------");
    return 0;
}