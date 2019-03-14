#include <iostream>
#include <cmath>
using namespace std;
#include "funciones.h"

int main(){
    char items[]={'a','b','c','d','e','f'};
    
    int n,r;
    int w;


    cout<<"\n N: ";
    cin>>n;
    cout<<"\n R: ";
    cin>>r;

    
    w=pow(n,r);
    cout<<"\n Variacion con repeticion: "<<w;
    variacionCR(items,n,r);

    w=f(n)/f(n-r);
    cout<<"\n Variacion sin repeticion: "<<w;
    variacionSR(items,n,r);
    
    w=f(n+r-1)/f(r)/f(n-1);
    cout<<"\n Combinacion con repeticion: "<<w;
    combinacionCR(items,n,r);

    w=f(n)/f(r)/f(n-r);
    cout<<"\n Combinacion sin repeticion: "<<w;
    combinacionSR(items,n,r);
    return 0;
}

