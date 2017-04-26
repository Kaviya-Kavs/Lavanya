# Lavanya
int main()
{
int num,temp,sum=0,rem;
temp=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10
}
if(sum==temp)
{
printf("it is a armstrong number",temp);
}
else
{
printf("not an armstrong number",temp);
}
return 0;
}

