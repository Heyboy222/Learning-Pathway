int main(){
    int data[4]={2,0,2,6};
    int *ptr=&data[0];
    int result=0;
    result+=(*ptr)*1000;ptr++;
    result+=(*ptr)*100;ptr++;
    result+=(*ptr)*10;ptr++;
    result+=*ptr;ptr++;
}