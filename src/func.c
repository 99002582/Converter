#include<stdio.h>
//====================================
float ctf(float c)
{
    return (c * 9 / 5) + 32;
}
float ctk(float c)
{
    return 273.15 +c;
}
float ctra(float c)
{
    return c*1.8 + 32 + 459.67;
}
float ctre(float c)
{
    return c*0.8;
}
//======================================

float ftc(float f)
{
    return 5*(f-32)/9;
}
float ftk(float f)
{
    return 273.5 + ((f - 32.0) * (5.0/9.0));
}
float ftra(float f)
{
    return f+459.67;
}
float ftre(float f)
{
    return (f-32)*4/9;
}


//=====================================

float ktc(float k)
{
    return (k - 273.15);
}
float ktf(float k)
{
    return ((k - 273.15) * 9 / 5) + 32;
}
float ktra(float k)
{
    return (k - 273.15)*1.8 + 32 + 459.67;
}
float ktre(float k)
{
    return (k - 273.15)*0.8;
}

//================================

float ratc(float ra)
{
    return (ra-459.67-32)/1.8 ;
}
float ratf(float ra)
{
    return (((ra-459.67-32)/1.8) * 9 / 5) + 32;
}
float ratk(float ra)
{
    return 273.15 +((ra-459.67-32)/1.8);
}
float ratre(float ra)
{
    return ((ra-459.67-32)/1.8 )*0.8;
}

//======================================

float retc(float re)
{
    return re/0.8 ;
}
float retf(float re)
{
    return ((re/0.8) * 9 / 5) + 32;
}
float retk(float re)
{
    return 273.15 +re/0.8;
}
float retra(float re)
{
    return (re/0.8)*1.8 + 32 + 459.67;
}

//====================================

float wtkw(float w)
{
    return w/1000;
}
float wthp(float w)
{
    return w/746;
}
float kwtw(float kw)
{
    return kw*1000;
}
float kwthp(float kw)
{
    return kw*1000/746;
}
float hptw(float hp)
{
    return hp*746;
}
float hptkw(float hp)
{
    return (hp*746)/1000;
}


