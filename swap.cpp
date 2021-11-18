#include "std_lib_facilities.h"
void swap_v(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<< "a= "<< a<<"\n"<<"b= "<< b <<"\n";
}

void swap_r(int &a,int &b){

	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<< "a= "<< a<<"\n"<<"b= "<< b <<"\n";
}
/*
void swap_cr(const int &a, const int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<< "a= "<< a<<"\n"<<"b= "<< b <<"\n";
}*/
int main(){

int x = 7;
int y =9;

swap_v(x,y); //mety
swap_r(x,y);//mety
//swap_cr(x,y);//nam mety

swap_v(7,9);//mety
//swap_r(7,9);//nam mety
//swap_cr(7,9);//nam mety

const int cx = 7;
const int cy = 9;

swap_v(cx,cy); //mety
//swap_r(cx,cy); //nam mety
//swap_cr(cx,cy); //nam mety

swap_v(7.7,9.9); //mety
//swap_r(7.7,9.9);//nam mety
//swap_cr(7.7,9.9);//nam mety

double dx = 7.7;
double dy = 9.9;

swap_v(dx,dy); //mety, de nyem jául, double kéne, ha vóna
//swap_r(dx,dy);//ha double lenne menne
//swap_cr(dx,dy); nem mety

swap_v(7.7,9.9);
//swap_r(7.7,9.9);//nem mety, mert int
/*swap_cr(7.7,9.9);*/











 return 0;
}
