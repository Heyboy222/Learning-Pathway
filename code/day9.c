int main(){
    int year=2024,isLeap=0,days=365;
    if (  year%100!=0 || year%400==0 && year%4==0){
        isLeap=1;
    }
    if(isLeap==1){
        days=366;
    }
    days+=1660;

}