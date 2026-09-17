

int fib(int n){
     int a=0;
      int b=1;
      int c=0;
      if(n==0||n==1){
        return n;
      }
      for(int i=2;i<=n;i++){
        c=a+b;//c=0+1=1
        a=b;
        b=c;
      }
      return c;

}