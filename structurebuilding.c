#include<stdio.h>
struct height
{
    int feet;
    int inch;
};
int main()
{
    int x;
    struct height h1;
    struct height h2;
    struct height h;
    scanf("%d",&h1.feet);
    scanf("%d",&h1.inch);
    scanf("%d",&h2.feet);
    scanf("%d",&h2.inch);
    h.inch=(h1.inch+h2.inch)%12;
    x=(h1.inch+h2.inch)/12;
    h.feet=(h1.feet+h2.feet+x);
    printf("%d' %d\"",h.feet,h.inch);
}