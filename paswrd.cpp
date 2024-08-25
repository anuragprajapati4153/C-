#include<iostream>
#include<cstdlib> //for generate random number
#include<ctime>
#include<string>

using namespace std;

    string getPassward(int length){
    string Passward="";
    string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#!$%^&*()_+";
    int charsize =characters.size();
    srand(time(0)); //time(0)--> function return the number of second from january 1, 1970, 00:00:00 UTC

     int randomIndex;
     for(int i=0; i<length; i++){
         randomIndex=rand()%charsize;
        Passward=Passward+characters[randomIndex];
    }
return Passward;
}
int main(){
    int length;
    cout<<"Enter the length of the Passward ::";
    cin>>length;
    string passward=getPassward(length);
    cout<<"Generated passward:: "<<passward;
    cout<<"good";
    return 0;
}