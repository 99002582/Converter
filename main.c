#include<stdio.h>
#include "func.h"
int main()
{
    int coversion;

    printf("1. Enter 1 for Celsius to Fahrenheit conversion\n");
    printf("2. Enter 2 for Celsius to Kelvin conversion\n");
    printf("3. Enter 3 for Celsius to Rankine conversion\n");
    printf("4. Enter 4 for Celsius to Reaumur conversion\n");

    printf("5. Enter 5 for Fahrenheit to Celsius conversion\n");
    printf("6. Enter 6 for Fahrenheit to kelvin conversion\n");
    printf("7. Enter 7 for Fahrenheit to Rankine conversion\n");
    printf("8. Enter 8 for Fahrenheit to Reaumur conversion\n");

    printf("9. Enter 9 for Kelvin to Celsius conversion\n");
    printf("10. Enter 10 for Kelvin to Fahrenheit conversion\n");
    printf("11. Enter 11 for Kelvin to Rankine conversion\n");
    printf("12. Enter 12 for Kelvin to Reaumur conversion\n");

    printf("13. Enter 13 for Rankine to Celsius conversion\n");
    printf("14. Enter 14 for Rankine to Fahrenheit conversion\n");
    printf("15. Enter 15 for Rankine to Kelvin conversion\n");
    printf("16. Enter 16 for Rankine to Reaumur conversion\n");

    printf("17. Enter 17 for Reaumur to Celsius conversion\n");
    printf("18. Enter 18 for Reaumur to Fahrenheit conversion\n");
    printf("19. Enter 19 for Reaumur to Kelvin conversion\n");
    printf("20. Enter 20 for Reaumur to Rankine conversion\n");

    printf("21. Enter 1 for Watt to Kilowatt conversion\n");
    printf("22. Enter 2 for Watt to HP conversion\n");
    printf("23. Enter 3 for Kilowatt to watt conversion\n");
    printf("24. Enter 4 for Kilowatt to HP conversion\n");
    printf("25. Enter 5 for HP to Watt conversion\n");
    printf("26. Enter 6 for HP to Kilowatt conversion\n");
    scanf("%d", &coversion);
    temperature_power(coversion);

}
