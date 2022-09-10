#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>


void call_geometric(int optionGemoetric, int left, int top, int right, int bottom, int x, int y, int radius){
    int gd = DETECT, gm;


    // Libary on linux
    initgraph(&gd, &gm, NULL);
    switch (optionGemoetric)
    {
        case 1:
            rectangle(left, top, right, bottom);
            break;
        case 2:
            circle(x, y, radius);
            break;
        case 3:
            bar(left + 300, top, right + 300, bottom);
            break;
        case 4:
            ellipse(x, y + 200, 0, 360, 100, 50);
            break;
        case 5:
            line(left - 10, top + 150, left + 410, top + 150);
            break;
    }

    getch();
    // delay(500000);
    closegraph();

}

int main()
{
    //Start general program
    int left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
    int optionGemoetric;

    printf("\t***** Input what geometric form that you whish? *****\n");
    printf("\t\t***** 1 - Retangle *****\n");
    printf("\t\t***** 2 - Circle *****\n");
    printf("\t\t***** 3 - Bar *****\n");
    printf("\t\t***** 4 - Ellipse *****\n");
    printf("\t\t***** 5 - Line *****\n");
    scanf("%d", &optionGemoetric);

    // Libary on linux
    // initgraph(&gd, &gm, NULL);
    switch (optionGemoetric)
    {
        case 1:
                printf("\t\t Input the parameters (Rectangle): \n");
                printf("\t\t Left:");
                scanf("%d", &left);
                printf("\n\t\t Top:");
                scanf("%d", &top);
                printf("\n\t\t Right: ");
                scanf("%d", &right);
                printf("\n\t\t Bottom: ");
                scanf("%d", &bottom);
                call_geometric(optionGemoetric, left, top, right, bottom, x=0, y=0, radius=0);
            break;
        case 2:
                printf("\t\t Input the parameters (Circle): \n");
                printf("\t\t X:");
                scanf("%d", &x);
                printf("\n\t\t Y:");
                scanf("%d", &y);
                printf("\n\t\t Radius: ");
                scanf("%d", &radius);
                call_geometric(optionGemoetric, left=0, top=0, right=0, bottom=0, x, y, radius);
            break;
        case 3:
                printf("\t\t Input the parameters (Bar): \n");
                printf("\t\t Left:");
                scanf("%d", &left);
                printf("\n\t\t Top:");
                scanf("%d", &top);
                printf("\n\t\t Right: ");
                scanf("%d", &right);
                printf("\n\t\t Bottom: ");
                scanf("%d", &bottom);
                call_geometric(optionGemoetric, left, top, right, bottom, x=0, y=0, radius=0);
            break;
        case 4:
                printf("\t\t Input the parameters (Ellipse): \n");
                printf("\t\t X:");
                scanf("%d", &x);
                printf("\n\t\t Y:");
                scanf("%d", &y);
                call_geometric(optionGemoetric, left, top, right, bottom, x, y, radius=0);
            break;
        case 5:
                printf("\t\t Input the parameters (Line): \n");
                printf("\t\t Left:");
                scanf("%d", &left);
                printf("\n\t\t Top:");
                scanf("%d", &top);
                call_geometric(optionGemoetric, left, top, right=0, bottom=0, x=0, y=0, radius=0);
            break;
        default:
            printf("\n\n Invalid option");
            exit(0);
            break;
    }

    //Finish general program   
    return 0;
}