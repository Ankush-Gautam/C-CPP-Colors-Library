#ifndef COLORS_H_INCLUDED
#define COLORS_H_INCLUDED
#include <windows.h>

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void black()
{
    SetConsoleTextAttribute(h,0);
}
void darkblue()
{
    SetConsoleTextAttribute(h,1);
}
void darkgreen()
{
    SetConsoleTextAttribute(h,2);
}
void darkcyan()
{
    SetConsoleTextAttribute(h,3);
}
void darkred()
{
    SetConsoleTextAttribute(h,4);
}
void darkpurple()
{
    SetConsoleTextAttribute(h,5);
}
void darkyellow()
{
    SetConsoleTextAttribute(h,6);
}
void darkwhite()
{
    SetConsoleTextAttribute(h,7);
}
void gray()
{
    SetConsoleTextAttribute(h,8);
}
void blue()
{
    SetConsoleTextAttribute(h,9);
}
void green()
{
    SetConsoleTextAttribute(h,10);
}
void cyan()
{
    SetConsoleTextAttribute(h,11);
}
void red()
{
    SetConsoleTextAttribute(h,12);
}
void purple()
{
    SetConsoleTextAttribute(h,13);
}
void yellow()
{
    SetConsoleTextAttribute(h,14);
}
void white()
{
    SetConsoleTextAttribute(h,15);
}
#endif // COLORS_H_INCLUDED
