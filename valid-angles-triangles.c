int main (){
    int a,b,c,d;
    printf ("enter the value of the first angle : ");
    scanf ("%d",&a);
    printf ("enter the value of the second angle : ");
    scanf ("%d",&b);
    printf ("enter the value of the third angle : ");
    scanf ("%d",&c);
    d=a+b+c;
    if (d==180){
        printf ("the triangle is valid " );
    }
    else {
        printf ("the triangle is not valid");
    }
    return 0;
}
