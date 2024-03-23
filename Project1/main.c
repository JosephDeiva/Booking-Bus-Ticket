/*#include<stdio.h>
#include<stdlib.h>
typedef struct a
{
    char name[20],place1[40],place2[50];
    int seat;
    long int num;

}new_fun;
int main()
{
    int am=100;
    int rev;
    int *ptr;
    prt=fopen("Bus booking.xls","w");
    new_fun e;
    printf("\n\t\t*WELCOME TO RAM TRAVELS*\n");
    printf("Enter Name: ");
    scanf("%[^\n]s",&e.name);
    printf("Enter Mobile number: ");
    scanf("%ld",&e.num);
    printf("From:");
    scanf("%s",&e.place1);
    printf("To:");
    scanf("%s",&e.place2);
    //printf("%s\n ",e.place1);
    //printf("%s",e.place2);

    rev=strcmp(e.place1,e.place2);
    //printf("%d",rev);
    if(rev!=0)
    {
        printf("LOADING.....\n");
        sleep(1);
    }
    else
    {
        printf("Enter the correct place");
        return 0;
    }
    if(1)
    {
        printf("Available Seats\n");
        printf("A1 A2       A3 A4 A5 \nB1 B2       B3 B4 B5 \nC1 C2       C3 C4 C5");
    }
    printf("\nEnter the number of seat: ");
        scanf("%d",&e.seat);
        switch(e.seat)
        {
            case 1:printf("Amount = %d",am*e.seat);
            break;
            case 2:printf("Amount = %d",am*e.seat);
            break;
            case 3:printf("Amount = %d",am*e.seat);
            break;
            case 4:printf("Amount = %d",am*e.seat);
            break;
            case 5:printf("Amount = %d",am*e.seat);
            break;
            case 6:printf("Amount = %d",am*e.seat);
            break;
            case 7:printf("Amount = %d",am*e.seat);
            break;

        }
        printf("\n\nPayment process : Enter to continue....\n");
        getch();
        printf("\nName: %s\t\tMbl number: %d\nFrom: %s\t\tTo: %s\nNo.of Seat: %d\n\n",e.name,e.num,e.place1,e.place2,e.seat);
        printf("\nBOOKING IS SUCCESSFULLY COMPLETED\n");
        return 0;

}*/
/*
#include<stdio.h>
#include<stdlib.h>
typedef struct a
{
    char name[20],place1[40],place2[50];
    int seat;
    long int num;

}new_fun;
int main()
{
    int amt=100;
    int rev;
    int *ptr;
    ptr=fopen("Bus booking.xls","w");
    new_fun e;
    printf("\n\t\t*WELCOME TO RAM TRAVELS*\n");

    //Passenger name
    printf("Enter Name: ");
    scanf("%[^\n]s",&e.name);

    //Passenger Number
    printf("Enter Mobile number: ");
    scanf("%ld",&e.num);

    //Place FROM and To
    printf("From:");
    scanf("%s",&e.place1);
    printf("To:");
    scanf("%s",&e.place2);

    //String compare
    rev=strcmp(e.place1,e.place2);

    if(rev!=0)
    {
        printf("LOADING.....\n");
        sleep(1);
    }
    else
    {
        printf("Enter the correct place");
        return 0;
    }
    //if(1)
    //{
        printf("Available Seats\n");
        printf("A1 A2       A3 A4 A5 \nB1 B2       B3 B4 B5 \nC1 C2       C3 C4 C5");
    //T}
    printf("\nEnter the number of seat: ");
        scanf("%d",&e.seat);
        switch(e.seat)
        {
            case 1:printf("Amount = %d",amt*e.seat);
            break;
            case 2:printf("Amount = %d",amt*e.seat);
            break;
            case 3:printf("Amount = %d",amt*e.seat);
            break;
            case 4:printf("Amount = %d",amt*e.seat);
            break;
            case 5:printf("Amount = %d",amt*e.seat);
            break;
            case 6:printf("Amount = %d",amt*e.seat);
            break;
            case 7:printf("Amount = %d",amt*e.seat);
            break;

        }
        printf("\n\nPayment process : Enter to continue....\n");
        getch();

        fprintf(ptr,"\nName: %s\t\tMbl number: %d\nFrom: %s\t\tTo: %s\nNo.of Seat: %d\n\n",e.name,e.num,e.place1,e.place2,e.seat);
        fclose(ptr);
        return 0;

}*//*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h> // for sleep

#define MAX_SEATS 15


typedef struct a
{
    char name[20], place1[40], place2[50], num[15];
    char seat[2];
} new_fun;

char check(char *a); // Function prototype
void viewBookingStatus();
int calculateRemainingSeats();

int main()
{
    int amount=0,i,j,arr,arr1;
    new_fun e;
    char *depart[10]={"Salem","Dharmapuri","Hosur","Silkboard","Majestic(Bangalore)"};
    printf("\n\t*WELCOME TO RAM TRAVELS*\n");
    printf("\n\nArrival : Salem      Departure  :  Bangalore\n\n");
    printf("\tEnter Name: ");
    scanf("%s", e.name);
    printf("\tEnter Mobile number: ");
    scanf("%s", e.num);
    lable1:printf("\tFrom:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Majestic(Bangalore)");
    printf("\n\nEnter the arrival Number : ");
    scanf("%d",&i);
    i--;
    arr=depart[i];
    strcpy(e.place1,arr);
    //scanf("%s", e.place1);
    printf("\tTo:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Majestic(Bangalore)");
    printf("\n\nEnter the departure Number : ");
    scanf("%d",&j);
    j--;
    arr1=depart[j];
    strcpy(e.place2,arr1);
    //scanf("%s", e.place2);

    if (strcmp(e.place1, e.place2) != 0)
    {
        printf("LOADING.....\n");
        sleep(1);
        //exit(1);
    }
    else
    {
        printf("Enter the correct place");
        sleep(1);
        goto lable1;
    }

    printf("Available Seats\n");
    printf("A1 A2       A3 A4 A5 \nB1 B2       B3 B4 B5 \nC1 C2       C3 C4 C5");
    bcheck:
    printf("\nEnter the seat number: ");
    scanf(" %s", &e.seat);
    char *a[5];
    strcpy(a,e.seat);printf("%s",a);
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

    printf("\n\nPayment process : Enter to continue....\n");
    getchar();
    getchar();
    printf("\nName: %s\t\tMbl number: %s\nFrom: %s\t\t\tTo: %s\nNo.of Seat: %s\n\n", e.name, e.num, e.place1, e.place2, e.seat);
    printf("\nBOOKING IS SUCCESSFULLY COMPLETED\n");

    // Writing to CSV file using file handling
    FILE *file = fopen("Booking_details.csv", "a"); // open file in append mode
    if (file != NULL)
    {
        fprintf(file, "%s,%s,%s,%s,%s,%d\n", e.name, e.num, e.place1, e.place2, e.seat, amount);
        fclose(file);
        printf("Booking details saved successfully!\n");
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
    FILE *file = fopen("Booking_details.csv", "a");
    if (file != NULL)
    {
        printf("\nBooking Status:\n");
        printf("Name\tMobile\tFrom\tTo\tSeats\tAmount\n");
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
    FILE *file = fopen("Booking_details.csv", "a");
    if (file != NULL)
    {
        int totalSeats = MAX_SEATS;
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            totalSeats--;
        }
        fclose(file);
        printf("If you want to add one more seat for another person (1/0)");
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
    FILE *file = fopen("Booking_details.csv", "a");
    if (file != NULL)
    {
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            if (strstr(line, a) != NULL) // Corrected usage of strstr
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
*//*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h> // for sleep

#define MAX_SEATS 15


typedef struct a
{
    char name[20], place1[40], place2[50], num[15];
    char seat[2];
} new_fun;

char check(char *a); // Function prototype

void viewBookingStatus();
int calculateRemainingSeats();

int main()
{
    int amount=0,i,j,arr,arr1;
    new_fun e;
    char *depart[10]={"Salem","Dharmapuri","Hosur","Silkboard","Majestic(Bangalore)"};
    printf("\n\t*WELCOME TO RAM TRAVELS*\n");
    printf("\n\nArrival : Salem      Departure  :  Bangalore\n\n");
    printf("\tEnter Name: ");
    scanf("%[^\n]s", e.name);
    printf("\tEnter Mobile number: ");
    scanf("%s", e.num);
    lable3:printf("\tFrom:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Majestic(Bangalore)");
    lable1:printf("\n\nEnter the arrival Number : ");
    scanf("%d",&i);
    if(i<1||i>=5){
        goto lable1;}
    i--;
    arr=depart[i];
    strcpy(e.place1,arr);
    //scanf("%s", e.place1);
    printf("\tTo:\n");
    printf("The Arrival & intermediate & Departure stops are : \n");
    printf("\n1. Salem");
    printf("\n2. Dharmapuri");
    printf("\n3. Hosur");
    printf("\n4. SilkBoard");
    printf("\n5. Majestic(Bangalore)");
    lable2:printf("\n\nEnter the Departure Number : ");
    scanf("%d",&j);
    if(j<1||j>5){
        goto lable2;}
    j--;
    arr1=depart[j];
    strcpy(e.place2,arr1);
    //scanf("%s", e.place2);
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
    else{
        printf("Amount is %d\n", amount*=4);
    }
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
    printf("\nBOOKING IS SUCCESSFULLY COMPLETED\n");

    // Writing to CSV file using file handling
    FILE *file = fopen("booking_details.csv", "a"); // open file in append mode
    if (file != NULL)
    {
        fprintf(file, "%s,%s,%s,%s,%s,%d\n", e.name, e.num, e.place1, e.place2, e.seat, amount);
        fclose(file);
        printf("Booking details saved successfully!\n");HHHH
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
        printf("Name\tMobile\tFrom\tTo\tSeats\tAmount\n");
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
        printf("If you want to add one more seat for another person (Yes=1/No=0): ");
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
            if (strstr(line, a) != NULL) // Corrected usage of strstr
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
*/
