#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void vowel(char);
void main()
{
char r;
clrscr();
printf("give an alphabet");
scanf("%c ",&r);
vowel(r);

}
void vowel(char r)
{
switch(r)
{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("\n %c is a vowel",r);
		break;
	default:
		printf("\n %c is a consonant", r);
		break;
		}
getch();
}
