
#include<iostream>
using namespace std;

class Counter{
    private:  //hide state
    int value{0}; //invariant: value >= 0
    //Invariant = a rule that should always be true for the object.

    public:
    void set(int v){
        value = (v < 0) ? 0 : v;  //keep invariant
    }
    void inc(){
        ++value;
    }
    int get() const {  //const: would not modify object
        return value;
    }
};
int main(){
    Counter c; //object
    c.set(-5); //if i put negative value its set 0 then processed it
    c.inc();
    cout<< c.get(); //6

}