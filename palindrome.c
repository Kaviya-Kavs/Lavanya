# Lavanya
int main()
{
int num,sum=0,r,temp;
printf("enter a number/n");
scanf("%d",&n);
temp=num;
while(num){
r=num%10;
num=num/10;
sum=sum*10+r;
}
if(sum==temp){
printf("it is a palindrome",temp);
else
printf("it is not a palindromr",temp);
}
return 0;
}
