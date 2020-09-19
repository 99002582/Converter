#include<stdio.h>
#include "func.h"
int main()
{
    int coversion;
    float celsius, fahrenheit, kelvin, rankine, reaumur;
    float watt, kwatt, hp;
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

    switch(coversion)
    {
    case 1:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        fahrenheit = ctf(celsius);
        printf("%f in celsius = %f in fahrenheit\n",celsius,fahrenheit);
        break;
    case 2:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        kelvin = 273.15 +celsius;
        printf("%f in celsius = %f in kelvin\n",celsius,kelvin);
        break;

    case 3:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        rankine = celsius*1.8 + 32 + 459.67;
        printf("%f in celsius = %f in rankine\n",celsius,rankine);
        break;

    case 4:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        reaumur = celsius*0.8;
        printf("%f in celsius = %f in rankine\n",celsius,reaumur);
        break;

    case 5:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = 5*(fahrenheit-32)/9;
        printf("%f in fahrenheit = %f in celsius\n",fahrenheit,celsius);
        break;

    case 6:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        kelvin = 273.5 + ((fahrenheit - 32.0) * (5.0/9.0));
        printf("%f in fahrenheit = %f in kelvin\n",fahrenheit,kelvin);
        break;

    case 7:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = 5*(fahrenheit-32)/9;
        rankine = celsius*1.8 + 32 + 459.67;
        printf("%f in fahrenheit = %f in rankine\n",fahrenheit,rankine);
        break;

    case 8:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = 5*(fahrenheit-32)/9;
        reaumur = celsius*0.8;
        printf("%f in fahrenheit = %f in rankine\n",fahrenheit,reaumur);
        break;

    case 9:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15 ;
        printf("%f in kelvin = %f in celsius\n",kelvin,celsius);
        break;#include<stdio.h>
#include "func.h"
int main()
{
    int coversion;
    float celsius, fahrenheit, kelvin, rankine, reaumur;
    float watt, kwatt, hp;
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

    switch(coversion)
    {
    case 1:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        fahrenheit = ctf(celsius);
        printf("%f in celsius = %f in fahrenheit\n",celsius,fahrenheit);
        break;
    case 2:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        kelvin = ctk(celsius);
        printf("%f in celsius = %f in kelvin\n",celsius,kelvin);
        break;

    case 3:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        rankine = ctra(celsius);
        printf("%f in celsius = %f in rankine\n",celsius,rankine);
        break;

    case 4:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        reaumur = ctre(celsius);
        printf("%f in celsius = %f in rankine\n",celsius,reaumur);
        break;

    case 5:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = ftc(fahrenheit);
        printf("%f in fahrenheit = %f in celsius\n",fahrenheit,celsius);
        break;

    case 6:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        kelvin = ftk(fahrenheit);
        printf("%f in fahrenheit = %f in kelvin\n",fahrenheit,kelvin);
        break;

    case 7:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        rankine = ftra(fahrenheit);
        printf("%f in fahrenheit = %f in rankine\n",fahrenheit,rankine);
        break;

    case 8:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%f", &fahrenheit);
        reaumur = ftre(fahrenheit);
        printf("%f in fahrenheit = %f in rankine\n",fahrenheit,reaumur);
        break;

    case 9:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celsius = ktc(kelvin);
        printf("%f in kelvin = %f in celsius\n",kelvin,celsius);
        break;

    case 10:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        fahrenheit = ktf(kelvin);
        printf("%f in kelvin = %f in fahrenheit\n",kelvin,fahrenheit);
        break;

    case 11:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        rankine = ktra(kelvin);
        printf("%f in kelvin = %f in rankine\n",kelvin,rankine);
        break;

    case 12:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        reaumur = ktre(kelvin);
        printf("%f in kelvin = %f in reaumur\n",kelvin,reaumur);
        break;

    case 13:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        celsius = ratc(rankine);
        printf("%f in rankine = %f in celsius\n",rankine,celsius);
        break;

    case 14:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        fahrenheit = ratf(rankine);
        printf("%f in rankine = %f in fahrenheit\n",rankine,fahrenheit);
        break;

    case 15:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        kelvin = ratk(rankine);
        printf("%f in rankine = %f in kelvin\n",rankine,kelvin);
        break;

    case 16:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        reaumur = ratre(rankine);
        printf("%f in rankine = %f in reaumur\n",rankine,reaumur);
        break;

    case 17:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        celsius = retc(reaumur);
        printf("%f in reaumur = %f in celsius\n",reaumur,celsius);
        break;

    case 18:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        fahrenheit = retf(reaumur);
        printf("%f in reaumur = %f in fahrenheit\n",reaumur,fahrenheit);
        break;

    case 19:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        kelvin = retk(reaumur);
        printf("%f in reaumur = %f in kelvin\n",reaumur,kelvin);
        break;

    case 20:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        rankine = retra(reaumur);
        printf("%f in reaumur = %f in celsius\n",reaumur,rankine);
        break;

    case 21:
        printf("Enter power in watt\n");
        scanf("%f", &watt);
        kwatt = wtkw(watt);
        printf("%f in watt = %f in kilowatt\n",watt,kwatt);
        break;
    case 22:
        printf("Enter power in watt\n");
        scanf("%f", &watt);
        hp =wthp(watt);
        printf("%f in watt = %f in HP\n",watt,hp);
        break;
    case 23:
        printf("Enter power in kilowatt\n");
        scanf("%f", &kwatt);
        watt = kwtw(kwatt);
        printf("%f in kilowatt = %f in watt\n",kwatt,watt);
        break;
    case 24:
        printf("Enter power in kilowatt\n");
        scanf("%f", &kwatt);
        hp = kwthp(kwatt);
        printf("%f in kilowatt = %f in HP\n",kwatt,hp);
        break;
    case 25:
        printf("Enter power in HP\n");
        scanf("%f", &hp);
        watt = hptw(hp);
        printf("%f in HP = %f in watt\n",hp,watt);
        break;
    case 26:
        printf("Enter power in HP\n");
        scanf("%f", &hp);
        kwatt = hptkw(hp);
        printf("%f in HP = %f in kwatt\n",hp,kwatt);
        break;
    default:
        printf("Invalid input");
        break;
    }

}


    case 10:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15 ;
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%f in kelvin = %f in fahrenheit\n",kelvin,fahrenheit);
        break;

    case 11:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15 ;
        rankine = celsius*1.8 + 32 + 459.67;
        printf("%f in kelvin = %f in rankine\n",kelvin,rankine);
        break;

    case 12:
        printf("Enter temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15 ;
        reaumur = celsius*0.8;
        printf("%f in kelvin = %f in reaumur\n",kelvin,reaumur);
        break;

    case 13:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        celsius = (rankine-459.67-32)/1.8 ;
        printf("%f in rankine = %f in celsius\n",rankine,celsius);
        break;

    case 14:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        celsius = (rankine-459.67-32)/1.8 ;
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%f in rankine = %f in fahrenheit\n",rankine,fahrenheit);
        break;

    case 15:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        celsius = (rankine-459.67-32)/1.8 ;
        kelvin = 273.15 +celsius;
        printf("%f in rankine = %f in kelvin\n",rankine,kelvin);
        break;

    case 16:
        printf("Enter temperature in Rankine\n");
        scanf("%f", &rankine);
        celsius = (rankine-459.67-32)/1.8 ;
        reaumur = celsius*0.8;
        printf("%f in rankine = %f in reaumur\n",rankine,reaumur);
        break;

    case 17:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        celsius = reaumur/0.8 ;
        printf("%f in reaumur = %f in celsius\n",reaumur,celsius);
        break;

    case 18:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        celsius = reaumur/0.8 ;
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%f in reaumur = %f in fahrenheit\n",reaumur,fahrenheit);
        break;

    case 19:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        celsius = reaumur/0.8 ;
        kelvin = 273.15 +celsius;
        printf("%f in reaumur = %f in kelvin\n",reaumur,kelvin);
        break;

    case 20:
        printf("Enter temperature in Reaumur\n");
        scanf("%f", &reaumur);
        celsius = reaumur/0.8 ;
        rankine = celsius*1.8 + 32 + 459.67;
        printf("%f in reaumur = %f in celsius\n",reaumur,rankine);
        break;

    case 21:
        printf("Enter power in watt\n");
        scanf("%f", &watt);
        kwatt = watt/1000;
        printf("%f in watt = %f in kilowatt\n",watt,kwatt);
        break;
    case 22:
        printf("Enter power in watt\n");
        scanf("%f", &watt);
        hp = watt/746;
        printf("%f in watt = %f in HP\n",watt,hp);
        break;
    case 23:
        printf("Enter power in kilowatt\n");
        scanf("%f", &kwatt);
        watt = kwatt*1000;
        printf("%f in kilowatt = %f in watt\n",kwatt,watt);
        break;
    case 24:
        printf("Enter power in kilowatt\n");
        scanf("%f", &kwatt);
        watt = kwatt*1000;
        hp = watt/746;
        printf("%f in kilowatt = %f in HP\n",kwatt,hp);
        break;
    case 25:
        printf("Enter power in HP\n");
        scanf("%f", &hp);
        watt = hp*746;
        printf("%f in HP = %f in watt\n",hp,watt);
        break;
    case 26:
        printf("Enter power in HP\n");
        scanf("%f", &hp);
        watt = hp*746;
        kwatt = watt/1000;
        printf("%f in HP = %f in watt\n",hp,watt);
        break;
    default:
        printf("Invalid input");
        break;
    }

}
