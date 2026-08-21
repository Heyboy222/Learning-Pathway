int main(){
    int data[5]={50,98,177,264,81};
    for(int i=0;i<5;i++){
        if(data[i]>200){
            data[i]-=100;
        }
    }
    int a=0;
    while(a<4){
        data[a+1]+=data[a];
        a++;
    }
    data[2]+=19;
    
}
    