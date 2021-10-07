#include<stdio.h>
//void find_your_match(void);
//int zodiac(int day,int month);

int main(){
int option,dob,z,day,month,fortune_cookie;
char str1[10],str2[10] , c;

printf("\n\n Sasta tinder ----- urf Minder !\n\n");
printf(" \tHey buddy ! aapke father aaye h %c\n\n",2);
printf("Enter your name : \t");
scanf("%s",str1);
printf("your favorite colour:\t");
scanf("%s",str2);
printf("\n\nEnter the number of what you want to know : \n");
printf("\npress 1 -  to know your zodiac sign\n");
printf("\npress 2 - to know future happenings\n");
scanf("%d",&option);
switch(option){
case 1:
        printf("Enter birth day\n");
             scanf("%d",&day);
        printf("enter birth month\n");
             scanf("%d", &month);
    if(month > 12 && month < 0 || day > 31 && day < 1 )  {
          printf("invalid month and day\n");
     }
else if(month == 10 && day>=21||month == 11 && day<=21)
{
printf("Your zodiac sign is scorpion and your birthstone is topaz\n");
}
else if(month == 9  && day >=21 || month == 10 && day <= 21)
{
printf("Your zodiac sign is libra and your birthstone is opal\n");
}
else if(month == 8  && day >=21 || month == 9  && day <= 21)
{
printf("Your zodiac sign is virgo and your birthstone is sapphire\n");
}
else if(month == 7  && day >=21 || month == 8  && day <= 21)
{
printf("Your zodiac sign is leo and your birthstone is peridot\n");
}
else if(month == 6  && day >=21 || month == 7  && day <= 21)
{
printf("Your zodiac sign is cancer and your birthstone is ruby\n");
}
else if(month == 5  && day >=21 || month == 6  && day <= 21)
{
printf("Your zodiac sign is gemini and your birthstone is pearl\n");
}
else if(month == 4  && day >=21 || month == 5  && day <= 21)
{
printf("Your zodiac sign is taurus and your birthstone is emerald\n");
}
else if(month == 3  && day >=21 || month == 4  && day <= 21)
{
printf("Your zodiac sign is aries and your birthstone is aries\n");
}
else if(month == 2  && day >=21 || month == 3  && day <= 21)
{
printf("Your zodiac sign is pisces and your birthstone is aquamarine\n");
}
else if(month == 1  && day >=21 || month == 2  && day <= 21)
{
printf("Your zodiac sign is Aquarius and your birthstone is amethyst\n");
}
else if(month == 12 && day >=21 || month == 1  && day <= 21)
{
printf("Your zodiac sign is Capricorn and your birthstone is garnet\n");
}
else if(month == 11 && day >=21 || month == 12 && day <= 21)
{
printf("Your zodiac sign is saggitarius and your birthstone is turquoise\n");
}
else
 printf("error");
break;
case 2:
 // system("cls");
    printf("\n\n\t\tTaddahhh!! welcome to mystry world ! there's something special for you %c%c \n\n",1,3);
    printf("Enter your number to get a fortune cookie\n");
    scanf("%d",&fortune_cookie);

{
if(fortune_cookie > 0 && fortune_cookie <=10)
{
printf("There is a true and sincere friendship between you and your friends.\n\n");
}

if(fortune_cookie > 10 && fortune_cookie <= 20)
{
printf("As the purse is emptied, the heart is filled. ");
}
if(fortune_cookie > 20 && fortune_cookie <= 30)
printf("Your many hidden talents will be obvious to the ones around you.\n\n");
}
if(fortune_cookie > 30 && fortune_cookie <= 40)
{
printf("Plan for many pleasures ahead.\n\n");
}
if(fortune_cookie > 40 && fortune_cookie<=50)
{
printf("It takes more than good memory to have good memories.\n\n");
}
if(fortune_cookie > 50 && fortune_cookie<=60)
{
printf("Something you lost will soon turn up.\n\n");
}
if(fortune_cookie >60 && fortune_cookie <=70)
{
printf("A thrilling time is in your near future.\n\n");
}
if(fortune_cookie >70 && fortune_cookie <=80)
{
printf("Ideas are like children, there are none so wonderful as your own.\n\n");
}
if(fortune_cookie > 80 && fortune_cookie <=90){
printf("Pray for what you want, but work for the things you need.\n\n ");
}
if(fortune_cookie >90 && fortune_cookie <=100)
{
printf("Make two grins where there was only a grouch before. \n\n");
}
}
return 0;
}
