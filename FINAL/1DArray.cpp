#include<iostream>
using std::cout;
using std::endl;

int main(){
    //int x;
    //int *p = new int;

    int shoppingList[5];
    //int *p1 = new int[5];

    shoppingList[0]=10;
    shoppingList[1]=25;
    shoppingList[2]=35;
    shoppingList[3]=43;
    shoppingList[4]=17;

    int k;
    k=-1;
    int c = 1;
    while(c<=5){
        ++k;
        cout<<shoppingList[k]<<endl;
        ++c;
    }

    int i=0;
    while(i<5){
        cout<<shoppingList[i]<<endl;
        ++i;
    }

    return 0;
}
