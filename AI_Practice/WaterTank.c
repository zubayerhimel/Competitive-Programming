#include <stdio.h>

void getMotorAction(int i, int j);

int main()
{
    // get only binary input
    int ws, wl;
    printf("Water tank status: ");
    scanf("%d", & ws);
    printf("Water level status: ");
    scanf("%d", & wl);
    printf("\n");
    getMotorAction(ws, wl);

}

void getMotorAction(int perceptWaterStatus, int perceptWaterLevel)
{
    if(perceptWaterStatus == 1 && perceptWaterLevel == 1)
    {
        printf("Water tank is full.\n");
        printf("Action: Motor OFF\n");
    }
    else if(perceptWaterStatus == 1 && perceptWaterLevel == 0)
    {
        printf("Water tank is full.\n");
        printf("Action: Motor OFF\n");
    }
    else if(perceptWaterStatus == 0 && perceptWaterLevel == 1)
    {
        printf("Water tank is empty.\n");
        printf("Action: Motor ON\n");
    }
    else if(perceptWaterStatus == 0 && perceptWaterLevel == 0)
    {
        printf("Water tank is empty.\n");
        printf("Action: No action.\n");
    }
    else
    {
        printf("Invalid input\n");
    }

}