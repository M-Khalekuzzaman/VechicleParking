#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
int bus_amount,bus_count = 0;
int rishka_amount,rishka_count = 0;
int car_amount,car_count = 0;
int cycle_amount,cycle_count = 0;
int motorCycle_amount,motorCycle_count = 0;
fordelay(int j)
{
    int i,k;
    for( i = 0 ; i<j ; i++)
    {
        k = i;
    }
}
main_menu()
{
    int opt;
    printf("\n\n\t\t\t\t $$$$$$$$$ Welcome To Main-Menu $$$$$$$$$$$");
    printf("\n\n");
    printf("\n 1. Bus");
    printf("\n 2. Rishka");
    printf("\n 3. Car");
    printf("\n 4. Cycle");
    printf("\n 5. Motor-Cycle");
    printf("\n\n Enter choice your option : ");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1 :
        bus();
        break;
    case 2 :
        rishka();
        break;
    case 3 :
        car();
        break;
    case 4 :
        cycle();
        break;
    case 5 :
        motor_cycle();
        break;
    default :
        printf("\n Your option in not correct !!");
    }
    int ans;
    printf("\n\n Do you want to another vehicle [y/n] : ");
    scanf("%d",&ans);
    if(ans == 1)
    {
        system("CLS");
        main_menu();
    }
    else if(ans == 0)
    {
        int n;
        printf("\n Are you seen vehicle details[y/n] :");
        scanf("%d",&n);
        if(n == 1)
        {
            system("CLS");
            vehicle_details();
        }
        else
            {
                system("CLS");
                printf("\n Thanks for garage !!!!");
                close();
            }
    }
    else
    {
        printf("\n Thanks !!!!!! ");
    }

}

bus()
{
    system("CLS");
    int bus_num;
    printf("\n\n\t\t\t\t ####### Welcome To Bus Garage Side ########");
    printf("\n\n\n Enter your number of bus : ");
    scanf("%d",&bus_num);
    bus_amount = 1500 * bus_num;
    bus_count = bus_count + bus_num;
    printf("\n Tk : %d\n",bus_amount);
    printf(" Number of bus : %d\n",bus_count);

}

rishka()
{
    system("CLS");
    int rishka_num;
    printf("\n\n\t\t\t\t ####### Welcome To Rishka Garage Side ########");
    printf("\n\n\n Enter your number of Rishka : ");
    scanf("%d",&rishka_num);
    rishka_amount = 500 * rishka_num;
    rishka_count = rishka_count + rishka_num;
    printf("\n Tk : %d\n",rishka_amount);
    printf(" Number of rishka : %d\n",rishka_count);

}
car()
{
    system("CLS");
    int car_num;
    printf("\n\n\t\t\t\t ####### Welcome To Car Garage Side ########");
    printf("\n\n\n Enter your number of Car : ");
    scanf("%d",&car_num);
    car_amount = 1000 * car_num;
    car_count = car_count + car_num;
    printf("\n Tk : %d\n",car_amount);
    printf(" Number of car : %d\n",car_count);

}
cycle()
{
    system("CLS");
    int cycle_num;
    printf("\n\n\t\t\t\t ####### Welcome To Cycle Garage Side ########");
    printf("\n\n\n Enter your number of Cycle : ");
    scanf("%d",&cycle_num);
    cycle_amount = 100 * cycle_num;
    cycle_count = cycle_count + cycle_num;
    printf("\n Tk : %d\n",cycle_amount);
    printf(" Number of cycle : %d\n",cycle_count);

}
motor_cycle()
{
    system("CLS");
    int motorCycle_num;
    printf("\n\n\t\t\t\t ####### Welcome To Motorcycle Garage Side ########");
    printf("\n\n\n Enter your number of Motorcycle : ");
    scanf("%d",&motorCycle_num);
    motorCycle_amount = 200 * motorCycle_num;
    motorCycle_count = motorCycle_count + motorCycle_num;
    printf("\n Tk : %d\n",motorCycle_amount);
    printf(" Number of motorCycle : %d\n",motorCycle_count);

}
vehicle_details()
{
    printf("\n\t\t\t******** Welcome To Shakib Garage Details *********");
    printf("\n\n\n Your Input Vehicle Details !");
    printf("\n Bus Input : %d\n",bus_count);
    printf(" Rishka Input : %d\n",rishka_count);
    printf(" Car Input : %d\n",car_count);
    printf(" Cycle Input : %d\n",cycle_count);
    printf(" Motor-Cycle Input : %d\n",motorCycle_count);
    int total_amount = bus_amount + rishka_amount + car_amount + motorCycle_amount + cycle_amount;
    printf("\n Total amount : %d\n",total_amount);

}

int main()
{
    printf("\n\t\t\t*********** Welcome To Shakib Garage ************");
    printf("\n\t\t\t          ---------------------------");
    printf("\n\n\n Loading next");
    for(int i = 0 ; i<=6 ; i++)
    {
        fordelay(100000000);
        printf(".");

    }
    printf("\n Press any key to continue next step....!");
    getch();
    system("CLS");
    main_menu();

    getch();
}
