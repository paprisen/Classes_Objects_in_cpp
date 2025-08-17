// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Cube{
    public:
    float side;

    float vol_in(float side){
        return side*side*side;
    }

    float vol_out();
};

float Cube::vol_out(){
    return side*side*side;
}

int main(){

    Cube c1;
    cout<<"Enter Side dimension of the Cube: ";
    cin>>c1.side;

    cout<<"Volume of Cube is(by method): "<<c1.vol_in(c1.side)<<endl;
    cout<<"Volume of Cube is(by function): "<<c1.vol_out()<<endl;

    return 0;
}


/*
Output:
Enter Side dimension of the Cube: 4
Volume of Cube is(by method): 64
Volume of Cube is(by function): 64
*/
