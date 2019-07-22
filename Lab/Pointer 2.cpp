#include <iostream>
using namespace std;

void Tuesday(int *lei, int *eric, int mehran){
    eric[2] = 9;
    mehran = eric[0] + *(eric+2)/2;
    eric[1] = lei[0];
    *lei = 5;
    lei = new int[mehran];
}

int Monday(int *x, int *y, int *z){
    int arr[4] = {0,1,2,3};
    int i;

    x = y;
    y = &(x[1]);
    x = new int[*z];
    cout << "*x: " << x << " *y: " << y << " *z: " << z << endl;
    for(i = 0; i < *z; i++){
        *(x+i) = *(arr+i)*2;
    }

    *y = *z+4;
    Tuesday(z,y,*x);
    x[1] = 13;
    return (*z+x[2]);
}

int main(){
    int mehran, *eric, justin = 4, lei;

    lei = 3;
    eric = new int[justin];
    justin = Monday(eric, &lei, &mehran);

    return 0;
}
