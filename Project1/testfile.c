 /*#include<stdio.h>
 int main(){
     int i,j;printf("Enter the number (1 to 5): ");
     scanf("%d%d",&i,&j);
     int amount=0;
     amount+=100;
    if((i==1&&j==2)||(i==2&&j==3)||(i==3&&j==4)||(i==4&&j==5))
    {
        printf("Amount is %d\n", amount);
    }
    else if((i>=1&&j<=3)||(i>=2&&j<=4)||(i>=3&&j<=5))
    {
        printf("Amount is %d\n", amount*2);
    }
    else if((i>=1&&j<=4)||(i>=2&&j<=5))
    {
        printf("Amount is %d\n", amount*3);
    }
    else if(i>=1&&j<=5)
    {
        printf("Amount is %d\n", amount*4);
    }

 }
*/
//Booking Bus Ticket
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<unistd.h> // for sleep

#define MAX_SEATS 15


typedef struct a
{
    char name[20], place1[40], place2[50], num[15];
    char seat[2];
} new_fun;

char check(char *a);

void viewBookingStatus();
int calculateRemainingSeats();

int main()
{
    int amount=0,i,j,arr,arr1;
    new_fun e;
    system("cls");
    printf("\t __________________ \n");
    printf("\t/                  \\\n");
    printf("\t|    %c   %c   %c    %c|\n",-78,-78,-78,-80);
    printf("\t|                  |\n");
    printf("\t|__________________|\n");
    printf("____________(X)_____(X)________\n");

    char *depart[10]={"Salem(A)","Dharmapuri","Hosur(I)","Silkboard","Bangalore"};
    printf("\n\n\n %c %c %c %c WELCOME TO ACDK TRAVELS %c %c %c %c\n",3,3,3,3,3,3,3,3);
    printf("\n\nArrival : Salem      Departure  :  Bangalore\n\n");
    printf("\tEnter Name: ");
    scanf("%[^\n]s", e.name);
    printf("\tEnter Mobile number: ");
    scanf("%s", e.num);
    lable3:printf("\t\nFrom:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Bangalore");
   lable1: printf("\n\nEnter the arrival Number : ");
    scanf("%d",&i);
     i--;
    if(i<0||i>=4){
        printf("\nInvalid input 'i'");
        goto lable1;}

    arr=depart[i];
    strcpy(e.place1,arr);
    //scanf("%s", e.place1);
    printf("\t\nTo:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Bangalore");
   lable2: printf("\n\nEnter the departure Number : ");
    scanf("%d",&j);
    j--;
    if(j<1||j>5||j<i){
        printf("\nInvalid input 'j'\n");
        goto lable2;}


    arr1=depart[j];
    strcpy(e.place2,arr1);

    if (strcmp(e.place1, e.place2) != 0)
    {
        printf("LOADING.....\n");
        sleep(1);
    }
    else
    {
        printf("Enter the correct place");
        goto lable3;
        return 0;
    }
    amount=100;
    i++;
    j++;
    if((i==1&&j==2)||(i==2&&j==3)||(i==3&&j==4)||(i==4&&j==5))
    {
        printf("Amount is %d\n", amount);
    }
    else if((i==1&&j==3)||(i==2&&j==4)||(i==3&&j==5))
    {
        printf("Amount is %d\n", amount*=2);
    }
    else if((i==1&&j==4)||(i==2&&j==5))
    {
        printf("Amount is %d\n", amount*=3);
    }
    else if(i==1&&j==5)
    {
        printf("Amount is %d\n", amount*=4);
    }
    else
    {
        printf("Amount is %d\n", amount*=4);
    }
    printf("Available Seats\n");
    printf("A1 A2       A3 A4 A5 \nB1 B2       B3 B4 B5 \nC1 C2       C3 C4 C5");
    bcheck:
    printf("\nEnter the seat number: ");
    scanf(" %s", &e.seat);
    char a[5];
    strcpy(a,e.seat);
    int c = check(a);
    if(c!=0)
    {
        printf("This seat is available");
    }
    else
    {
        printf("This seat is already filled \n Please select another seat");
        goto bcheck;   // before check
    }


    printf("\n\nPayment process : Enter to continue....\n");
    getchar();
    getchar();
    printf("\nName: %s\t\tMbl number: %s\nFrom: %s\t\t\tTo: %s\nNo.of Seat: %s\n\n", e.name, e.num, e.place1, e.place2, e.seat);
    printf("\nBOOKING IS SUCCESSFULLY COMPLETED\n\n");
    int amt;
    amt=food();

    // Writing to CSV file using file handling
    FILE *file = fopen("booking_details.csv", "a"); // open file in append mode
    if (file != NULL)
    {
        fprintf(file, "%s,\t%s,\t%s,\t%s,\t%s,\t%d\n", e.name, e.num, e.place1, e.place2, e.seat, amount+amt);
        fclose(file);
        printf("\n\nBooking details saved successfully!\n");
    }
    else
    {
        printf("Error opening file!\n");
    }
    viewBookingStatus();

    int remainingSeats = calculateRemainingSeats();
    printf("Remaining seats: %d\n", remainingSeats);

    return 0;
}

void viewBookingStatus()
{
    FILE *file = fopen("booking_details.csv", "r");
    if (file != NULL)
    {
        printf("\nBooking Status:\n");
        printf("Name\tMobile\t\tFrom\t\tTo\t\tSeats\tAmount\n");
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
                printf("%s", line);

        }
        fclose(file);
    }
    else
    {
        printf("Error opening file!\n");
    }
}

int calculateRemainingSeats()
{
    FILE *file = fopen("booking_details.csv", "r");
    if (file != NULL)
    {
        int totalSeats = MAX_SEATS;
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            totalSeats--;
        }
        fclose(file);
        printf("\nIf you want to add one more seat for another person (Yes:1/ No:0): ");
        int y;
        scanf("%d",&y);
        if(y==1)
        {
            main();
        }
        return totalSeats;
    }
    else
    {
        printf("Error opening file!\n");
        return -1;
    }

}

char check(char *a)
{
    FILE *file = fopen("booking_details.csv", "r");
    if (file != NULL)
    {
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            if (strstr(line, a) != NULL)
            {
                fclose(file);
                return 0;
            }
        }
        fclose(file);
    }
    else
    {
        printf("Error opening file!\n");
    }
    return 1;
}
int food()
{


    char *veg[10]={"Dosa","Idlly","Pongal","Rice Sambar","Meals"};
    int amt1[]={20,20,60,70,120};
    char *non_veg[10]={"Chicken Biriyani","Mutton Biriyani","Prawn fry","Fish fry","BBQ"};
    int amt2[]={150,200,150,180,250};
    int i,j,arr,arr1;
    char opt[10];
    char type[10];
    printf("If you want food in Travel time (yes/no): ");
    scanf("%s",&type);
    if(strstr(type,"yes"))
    {
        printf("Which type of food you want like veg / non-veg (veg/non): ");
        //fflush(stdin);
        scanf("%s",&opt);
        if(strstr(opt,"veg"))
        {
            printf("----Menu----\n1.Dosa\n2.Idlly\n3.Pongal\n4.Rice Sambar\n5.Meals\n");
            scanf("%d",&i);
            i--;
            printf("%s\n",veg[i]);
            printf("Food amount is: $%d",amt1[i]);
            sleep(1);
            return amt1[i];

        }
        else
        {
            printf("----Menu----\n1.Chicken Biriyani\n2.Mutton Biriyani\n3.Prawn fry\n4.Fish fry\n5.BBQ\n");
            scanf("%d",&j);
            j--;
            printf("%s\n",non_veg[j]);
            printf("Food amount is: $%d",amt2[j]);
            sleep(1);
             return amt2[j];

        }
    }
    else
        return 0;
}

