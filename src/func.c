//#include<stdio.h>
int temperature_power(int coversion)
{
    float celsius, fahrenheit, kelvin, rankine, reaumur;
    float watt, kwatt, hp;
    switch(coversion)
    {
    case 1:
        printf("Enter temperature in celsius\n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
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
        break;

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
