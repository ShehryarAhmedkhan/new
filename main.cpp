#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char neww[] = {"hello world"};
    int num = 0;
    int val = strlen(neww);
    char store[11];
    char chr ;
    for (int i =0; i <11; i++){
    int num = 0;
    chr = neww[i];
    for (int i =0; i<strlen(neww); i++){
    while(chr != neww[i] ){
    for(int i = 0; i<strlen(neww); i++){
    if(chr == neww[i]){
    num++;
    }
    }
    }
    }
    cout << chr << num << endl;
    }
    return 0;
    }
