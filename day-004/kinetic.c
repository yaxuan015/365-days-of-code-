#include <stdio.h>

int main(void)
{
    double mass, velocity, kineticEnergy;

    printf("Enter mass (kg): ");
    scanf("%lf", &mass);

    printf("Enter velocity (m/s): ");
    scanf("%lf", &velocity);

    kineticEnergy = 0.5 * mass * velocity * velocity;

    printf("Kinetic energy: %.2f J\n", kineticEnergy);

    return 0;
}