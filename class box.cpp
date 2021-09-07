#include<iostream>
using namespace std;

class box{
	int length;
	int breadth;
	int height;
 public:
 	box(int l,int b,int h);
 	int surface_area();
 	int volume();
 	box operator++();
 	box operator++(int);
 	box operator--();
 	box operator--(int);
 	void display();
 	int check();
};

box::box(int l,int b,int h){
	length=l;
	breadth=b;
	height=h;
	return;
}

int box::surface_area(){
	int area;
	area=2*((length*breadth)+(length*height)+(breadth*height));
	return area;
}

int box::volume(){
	int vol;
	vol=length*breadth*height;
	return vol;
}

box box::operator++(){
	length++;
	breadth++;
	height++;
	return (*this);
}

box box::operator++(int){
    box original(*this);
	length++;
	breadth++;
	height++;
	return original;
}

box box::operator--(){
	length--;
	breadth--;
	height--;
	return(*this);
}

box box::operator--(int){
	box original(*this);
	length--;
	breadth--;
	height--;
	return original;
}

int box::check(){
	if(length==breadth&&length==height)
	   return 1;
	else
	   return 0;
}

void box::display(){
	cout<<"the length,breadth and height of the box are:\t"<<length<<"\t"<<breadth<<"\t"<<height<<"\n";
	return;
}

int main(){
	int l,b,h,area,vol,i;
	cout<<"enter length,breadth and height of the box\n";
	cin>>l>>b>>h;
	box b1(l,b,h);
	area=b1.surface_area();
	vol=b1.volume();
	cout<<"the surface area and volume of the box are:\t"<<area<<"\t"<<vol<<"\n";
	box b2=++b1;
	b2.display();
	b2=b1++;
	b2.display();
	b2=b1--;
	b2.display();
	b2=--b1;
	b2.display();
	i=b1.check();
	if(i==1)
	  cout<<"the box is a cube";
	else
	  cout<<"the box is a cuboid";
}
