#include <stdio.h>
#include <time.h>
static int long numSteps=100000;
int main(){
	double pi=0; double time=0;
	double middle=0.00001/2;
	double height; double area; double sumarea=0;
	time_t time1 = clock();
for (int i=0; i<numSteps; i++){
	middle=middle+0.00001;
	height=4/(1+middle*middle);
	area=0.00001*height;
	sumarea=sumarea+area;
}
pi=sumarea;
time_t time2 = clock();
time=time2-time1;
printf("PI=%f,duration:%f \n",pi,time);
return 0;
}

