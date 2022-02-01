#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	Rect out;
	double Anser,A1,A2;
	if(R1.y > (R2.y-R2.h) || (R1.x+R1.w) > R2.x){
		A1 = ( R1.x + R1.w ) - R1.x;
		A2 = ( R2.y + R2.h ) - R2.y;
		Anser = A1*A2;
	}else{
		Anser = 0;
	}
	out;
}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};
	overlap(R1,R2);
	return 0;
}
