#include<stdio.h>

int main (){
    char a;
    printf ("enter the alphabet : ");
    scanf ("%c",&a);
    if ( a =='b' || a =='c' || a =='d' || a =='f' || a =='g' || a =='h'
        || a =='j' || a =='k' || a =='l' || a =='m' || a =='n' || a =='o' || a =='p' || a =='q' || a =='r'
        || a =='s' || a =='t' || a =='v' || a =='w' || a =='x' || a =='y' || a =='z'){
        printf ("%c",a );
        printf (": is a consonant" );
    }
    else if (a =='a' || a =='e' || a =='i' || a =='o' || a =='u'){
        printf ("%c",a );
        printf (" : is  a vowel");
    }
    return 0;
}
