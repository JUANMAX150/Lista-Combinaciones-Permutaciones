// factorial de un numero
int f(int n){
    int resp=1;
    for(int x=1; x<=n; x++){
        resp=resp*x;
    }
    return resp;
}
bool ifIterativo(int *indexs,int n,int ref){
    bool r,tmp;
    if(n==1){        
        r=indexs[n-1]!=ref;        
    }else{        
        tmp=ifIterativo(indexs,n-1,ref);
        r=indexs[n-1]!=ref && tmp; 
    }
    return r;
}
void variacionSR(char datos[],int n, int r,int *index=NULL,int i=0){
    if(index==NULL){
        index=new int[r];
    }
    if(i<r){
        for(int x=0; x<n; x++){
            index[i]=x;                     
            if(i>=1){
                if(ifIterativo(index,i,x)){
                    variacionSR(datos,n,r,index,i+1);
                }
            }else{
                variacionSR(datos,n,r,index,i+1);
            }            
        }
    }else{
        cout<<"\n\t";
        for(int j=0; j<r; j++){
            cout<<datos[index[j]];
        }
    }
}

void variacionCR(char datos[],int n, int r,int *index=NULL,int i=0){
    if(index==NULL){
        index=new int[r];
    }
    if(i<r){
        for(int x=0; x<n; x++){
            index[i]=x;
            variacionCR(datos,n,r,index,i+1);
        }
    }else{
        cout<<"\n\t";
        for(int j=0; j<r; j++){
            cout<<datos[index[j]];
        }
    }
}


void combinacionCR(char datos[],int n, int r,int y=0,int *index=NULL,int i=0){
    if(index==NULL){
        index=new int[r];
    }
    if(i<r){
        for(int x=y; x<n; x++){
            index[i]=x;
            combinacionCR(datos,n,r,x,index,i+1);
        }
    }else{
        cout<<"\n\t";
        for(int j=0; j<r; j++){
            cout<<datos[index[j]];
        }
    }
}

void combinacionSR(char datos[],int n, int r,int y=0,int *index=NULL,int i=0){
    if(index==NULL){
        index=new int[r];
    }
    if(i<r){
        for(int x=y; x<n; x++){
            index[i]=x;
            combinacionSR(datos,n,r,x+1,index,i+1);
        }
    }else{
        cout<<"\n\t";
        for(int j=0; j<r; j++){
            cout<<datos[index[j]];
        }
    }
}