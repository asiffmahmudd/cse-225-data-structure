#include <string>
#include <iostream>
using namespace	std;

void crazy(int x, int* y, int* &z){
    x	=	*y	+	*z;
    *y	=	9;
    *z	+=	5;
    z	=	y;
    cout <<	"crazy: "<<"x: " << x << ", " << "*y: " << *y << ", " << "*z: " <<	*z << endl;
}

void insane(int	&x,	int** y, int* z){
    int	a;
    int	*b;
    a=x+1;
    b=z;
    x = **y + 10;
    cout << "Insane	x: " << x << endl;
    *y=z;
    *z	+=	5;
    z = &a;
    cout <<	"cInsane: "<<"x: " << x << ", " << "**y: " << **y << ", " << "*z: " <<	*z << " a: " << a << " *b: " << *b<<endl;
    *z = *b	* *z;
    crazy(x,z,b);
    cout <<	"cInsane: "<<"x: " << x << ", " << "**y: " << **y << ", " << "*z: " <<	*z << " a: " << a << " *b: " << *b<<endl;

}

int	main(){
    int	a=1,b=2,c=3;
    int	*p,*q;
    p = &b;
    q = &c;
    insane(a, &p, q);
    cout <<	"MAIN: "<<"a: " << a << ", " << "b: " << b << ", " << "c: " <<	c << " *p: " << *p << " *q: " << *q<<endl;
    return	0;
}
