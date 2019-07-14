#include<iostream>
using std::cout;
using std::endl;

int main(){
    int shoppingList[3][2];

    shoppingList[0][0]=5;
    shoppingList[0][1]=5;
    shoppingList[1][0]=5;
    shoppingList[1][1]=5;
    shoppingList[2][0]=5;
    shoppingList[2][1]=5;

    int r;
    int c;

    int sum=0;
    for(r=0; r<=2; ++r){
        for(c=0; c<=1; ++c){
            sum = sum + shoppingList[r][c];
        }
    }
    cout<<sum/(3*2)<<endl;

    return 0;
}
