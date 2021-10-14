#define A 10
int array[A]={6,-8,4,-7,10,-3,0,-11,12,1};

int cambio(int *a,int i){
    int tmp=a[i];
    a[i]=a[i+1];
    a[i+1]=tmp;
    return 1;
}

void cocktailsort(int *a,int end){
    int b=1;
    int start=0;
    while(b==1){
        b=0;
        for(int i=start;i<end-1;i++){
            if(a[i]>a[i+1]){
                b=cambio(a,i);
            }
        }
        if(b==0){
            break;
        }
        b=0;
        end--;
        for(int i=end-1;i>=start;i--){
            if(a[i]>a[i+1]){
                b=cambio(a,i);
            }
        }
        start++;
    }
}

int main(){
    cocktailsort(array,A);
    return 0;
}