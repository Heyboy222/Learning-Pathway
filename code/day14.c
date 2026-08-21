int main(){
    char numStr[]="2026";
    int value=0;
    int k=0;
    while(numStr[k]!='\0'){
        value*=10;
        value+=(numStr[k] - '0');
        k++;
    }

}