int num=1;

void setup() 
{
  Serial.begin(115200);  
}

void loop() 
{
    if(num<=100){
      
        printf("%d",num);
    
        if(num%15==0)//15で割り切れる
        {
            printf(" : FizzBuzz");
        }
        else if(num%3==0)//3で割り切れる
        {
            printf(" : Buzz");
        }
        else if(num%5==0)//5で割り切れる
        {
            printf(" : Fizz");
        }
    
        printf("\n");
        
        num++;  
    }
    
}
