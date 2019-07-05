#include <stdio.h>
#include <stdlib.h>

int	Mystery(int	*y,int	x);
void NotEasy(int *x,int y,int *z);

int	main()	{
    int	x,y,z;
    x=5;
    y=6;
    printf("\n");
    printf("Main1: x = %d, y = %d\n",x,y);
    z=Mystery(&x,y);
    printf("Main2: x = %d, y = %d, z = %d\n",x,y,z);
    NotEasy(&z,	y,	&y);
    printf("Main3: x = %d, y = %d, z = %d\n", x,y,z);
    return	0;
}

int	Mystery(int	*y,int	x){
    *y=x;
    x += *y;
    printf("Mystery: x = %d, *y	= %d\n",x,*y);
    return(x);
}
void NotEasy(int *x, int y, int	*z){
    int	*p1;
    y =	Mystery(z,*x);
    p1 = z;
    z =	x;
    x =	p1;
    *p1	= y	+ *z/2;
    printf("NotEasy: *x = %d, y	= %d, *z = %d, *p1 = %d\n",	*x,	y,	*z,	*p1);
}
