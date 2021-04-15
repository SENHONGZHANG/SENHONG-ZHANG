#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int readOption();
double volumeOfSphere(double radius);
double areaOfSquare(double sideLength);
double surfaceAreaOfCube(double edgeLength);

int main() {
        
        double radius;
        double sideLength;
        double edgeLength;
        
        do {
                switch(readOption()) {
                        case 1 :
                                printf("Enter the side length (cm) : ");
                                scanf("%lf", &sideLength);
                                printf("Area of the square : %.2lf (cm)", areaOfSquare(sideLength));
                                break;
                        case 2 :
                                printf("Enter the radius (cm) : ");
                                scanf("%lf", &radius);
                                printf("Volume of sphere : %.2lf (cm)", volumeOfSphere(radius));
                                break;
                        case 3 :
                                printf("Enter the edge of the cube (cm) : ");
                                scanf("%lf", &edgeLength);
                                printf("Surface area of the cube : %.2lf (cm)", surfaceAreaOfCube(edgeLength));
                                break;
                        case 4:
                                printf("Goodbye!");
                                exit(0);
                }
                printf("\n\n");
        } while(1);
        
}

int readOption() {
        int option;
        printf("1) Compute the area of a square \n");
        printf("2) Compute the volume of a sphere \n");
        printf("3) Compute the surface area of a cube \n");
        printf("4) Quit \n");
        printf("Enter an option : ");
        scanf("%d", &option);
        printf("\n");
        return option;
}

double areaOfSquare(double sideLength) {
        return sideLength * sideLength;
}

double volumeOfSphere(double radius) {
        return ( 4 * PI * radius * radius * radius ) / 3;
}

double surfaceAreaOfCube(double edgeLength) {
        return 6 * edgeLength * edgeLength;
}