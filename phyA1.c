#include<stdio.h>
#include<math.h>
int main(){
int m;
double theta,d,rad;
scanf("%d %lf %lf",&m,&theta,&d);
double pi=3.141592653589793;
rad = theta*(pi/180);
double xlambda=(d*sin(rad)*1000)/m; // for maxima
double nlambda=(2*d*sin(rad)*1000)/(2*m+1); // for minima

//for maxima
if (xlambda >=380 && xlambda<=450){
printf("Maxima: %0.3lf nm, Violet\n",xlambda);
}
else if (xlambda >450 && xlambda<=485){
printf("Maxima: %0.3lf nm, Blue\n",xlambda);
}
else if (xlambda >485 && xlambda<=500){
printf("Maxima: %0.3lf nm, Cyan\n",xlambda);
}
else if (xlambda >500 && xlambda<=565){
printf("Maxima: %0.3lf nm, Green\n",xlambda);
}
else if (xlambda >565 && xlambda<=590){
printf("Maxima: %0.3lf nm, Yellow\n",xlambda);
}
else if (xlambda >590 && xlambda<=625){
printf("Maxima: %0.3lf nm, Orange\n",xlambda);
}
else if (xlambda >625 && xlambda<=750){
printf("Maxima: %0.3lf nm, Red\n",xlambda);
}
else{printf("Out of range\n");} // if the lambda is out of range

// for minima
if (nlambda >=380 && nlambda<=450){
printf("Minima: %0.3lf nm, Violet\n",nlambda);
}
else if (nlambda >450 && nlambda<=485){
printf("Minima: %0.3lf nm, Blue\n",nlambda);
}
else if (nlambda >485 && nlambda<=500){
printf("Minima: %0.3lf nm, Cyan\n",nlambda);
}
else if (nlambda >500 && nlambda<=565){
printf("Minima: %0.3lf nm, Green\n",nlambda);
}
else if (nlambda >565 && nlambda<=590){
printf("Minima: %0.3lf nm, Yellow\n",nlambda);
}
else if (nlambda >590 && nlambda<=625){
printf("Minima: %0.3lf nm, Orange\n",nlambda);
}
else if (nlambda >625 && nlambda<=750){
printf("Minima: %0.3lf nm, Red\n",nlambda);
}
else{printf("Out of range\n");}

return 0;
}
