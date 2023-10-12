//Caesar Cipher
#include<iostream>
#include<string.h>
using namespace std;
int main (){
    string p = "Tahmid Hasan";
    cout <<"Plain Text: " << p << endl;
    int key = 7;
    int len = p.size();
    int arr[len];

    cout<<"Encryption: ";
    for(int i=0; i<len; i++){
        if((int)p[i]>=65 && (int)p[i]<=90){
            arr[i]=((int)p[i] + key - 65) %26 + 65;
            char res = arr[i];
            cout << res;
        }
        else if((int)p[i]>=97 && (int)p[i]<=122){
            arr[i]=((int)p[i] + key - 97) %26 + 97;
            char res = arr[i];
            cout << res;
        }
        else{
            arr[i]=(int)p[i];
            char res = arr[i];
            cout << res;
        }
    }

    int arr2[len];
    cout<< endl <<"Decryption: ";
    for(int i=0; i<len; i++){
        if((int)p[i]>=65 && (int)p[i]<=90){
            arr2[i]=(arr[i] - key - 65 + 26) %26 + 65;
            char res = arr2[i];
            cout << res;
        }
        else if((int)p[i]>=97 && (int)p[i]<=122){
            arr2[i]=(arr[i] - key - 97 + 26) %26 + 97;
            char res = arr2[i];
            cout << res;
        }
        else{
            arr2[i]=(int)arr[i];
            char res = arr2[i];
            cout << res;
        }
    }
    cout << endl;
}
