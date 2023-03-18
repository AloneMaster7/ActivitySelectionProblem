#include <iostream>
using namespace std;
void ActivitySelection(int* s,int* f,int size,int* S){
    S[0] = 0;
    int i=0;
    for(int m=0;m<size;m++){
        if(s[m] >= f[i]){
            S[++i] = m;
        }
    }
}

int main(){

    return 0;
}
