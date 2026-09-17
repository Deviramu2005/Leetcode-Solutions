int numberOfSteps(int num) {
    int count=0;
    while(num!=0){//8
    if(num%2==0){
        num=num/2;//4
    }
    else{
        num=num-1;
    }
    count++;
    }
    return count;

}
    

   
