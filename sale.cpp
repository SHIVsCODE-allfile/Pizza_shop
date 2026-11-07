#include <iostream>
using namespace std;

int distcount(int total){
    int sum = 0;
    sum += total/10;
    return sum;
}
int subtotal(){
    int n;
    cout <<"Enter the number of pizza you buy : ";
    cin>>n;
    int price;
    cout <<"Enter the price of each pizza : ";
    cin>>price;
    return n * price;
}
int main(){
    cout<<"====================**===================="<<endl;
    int n;
    cout<<" WELCOME TO PIZZA SHOP "<<endl;
    cout <<"Please enter your ordeer here "<<endl;
    
    cout<<"please enter the number of diffrenet dpizzas you bought : ";
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        arr[i] = subtotal();
    }
    int total = 0;
    for(int i=0;i<n;i++){
        total += arr[i];
    }
    cout<<"Total amount to be paid : "<<total<<endl;
    cout<<"Discount : "<<distcount(total)<<endl;
    cout<<"Final amount to be paid : "<<total-distcount(total)<<endl;
    cout<<"THANK YOU FOR VISITING OUR PIZZA SHOP"<<endl;
    cout<<"====================**===================="<<endl;
    return 0;
}
