#include<stdio.h>
#include<math.h>
int main()
{
    double theta1, rad1, theta2, theta;
    double pi=3.1416;
    theta1=65;
    rad1=theta1*(pi/180);
    theta2 = asin((1400*sin(rad1))/1590);

// using (sinθ1/sinθ2)=(m2λ2/m1λ1)
// θ2=arc sin(((2*700)/(3*530))*sin65)

    theta=theta2*(180/pi);
    printf("%.3lf degree",theta);
    return 0;
}
