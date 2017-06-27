# Lavanya
int main()
{
char str{100];
int countdigits,countalphabets,countspaces,countspecialchar;
int counter;
countdigits=countalphabets=countspaces=countspecialchar=0;
printf("enter a string");
gets(str);
for(counter=0;str(counter)!=NULL;count++)
{
if(str(counter)>='0'&&str(counter)<="9")
countdigits++;
elseif(str(counter)>='A'&&str(counter)<='Z')||(str(counter)>='a'&&str(counter)<='z')
coountalphabets++;
elseif str(counter)==' '
countspaces++;
else
countspecialchar++;
}
printf("\n digits:%d \n alphabets:%d \n: \n spaces:%d \n specialchar:%d \n);
getch();
}
