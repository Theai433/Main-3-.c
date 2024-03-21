/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, volume, surface_area;

    // Prompt the user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume of the cylinder
    volume = M_PI * pow(radius, 2) * height;

    // Calculate the surface area of the cylinder
    surface_area = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;

    // Display the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}
