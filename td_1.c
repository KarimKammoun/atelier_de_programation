#include <stdio.h>
#include <math.h>


int main(){
    EX();
    return 0;
}
/*  ///////EX:1\\\\\\\  */
int EX1(){
    int a,b,c;
    printf("donner le premier entier :");
    scanf("%d",&a);
    printf("\ndonner le deuxieme nombre :");
    scanf("%d",&b);
    printf("\ndonner le troisieme nombre :");
    scanf("%d",&c);
    printf("\nle somme des troi nombre est : %d",a+b+c);
    printf("\nle produit des troi entier est : %d",a*b*c);
    return 0;
}
/*  ///////EX:2\\\\\\\  */
int EX2(){
    const float pi=3.14;
    int r;
    printf("donner le reyon du cercle :");
    scanf("%d",&r);
    printf("le perimetre du cercle est :%f \n",r*2*pi);
    printf("l'aire du cercle est :%f ",r*r*pi);
    return 0;
    }
/*  ///////EX:3\\\\\\\  */
int EX3(){
    int a,b,c,d;
    printf("donner des trois entier sous la forme n1/n2/n3 :");
    scanf("%d/%d/%d",&a,&b,&c);

    d=b;
    b=a;
    a=c;
    c=d;
    printf("%d%d%d",a,b,c);
    return 0;
}
/*  ///////EX:4\\\\\\\  */
int EX4(){
    int s,m,h;
    printf("donner s :");
    scanf("%d2",&s);
    printf("donner m :");
    scanf("%d2",&m);
    printf("donner h :");
    scanf("%d2",&h);
    printf("T=%d:%d:%d",h,m,s);

    return 0;
}
/*  ///////EX:5\\\\\\\  */
int EX5(){
    double distance;
    int xa,xb,ya,yb;
    printf("donner les cordonner de A(xa,ya)");
    scanf("%d %d",&xa,&ya);
    printf("donner les cordonner de B(xb,yb)");
    scanf("%d %d",&xb,&yb);
    distance=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    printf("la distance AB est : %.2f",distance);
    return 0;
}
/*  ///////EX:6\\\\\\\  */
int EX6 (){
    int a,b,c,max;
    printf("donner A :");
    scanf("%d",&a);
    printf("donner B :");
    scanf("%d",&b);
    printf("donner C :");
    scanf("%d",&c);
    if (a>=b && a>=c)
    {
        max=a;
    }
    else if (b>=a && b>=c)
    {
        max=b;
    }
    else
        max=c;
    printf("le max est :%d",max);
    return 0;
}
/*  ///////EX:7\\\\\\\  */
int EX7(){
    int x;
    printf("donner x :");
    scanf("%d",&x);
    if (x%2==0)
        printf("%d est paire",x);
    else
        printf("%d est impaire",x);

    return 0;
}
/*  ///////EX:8\\\\\\\  */
int EX8(){
    int a;
    printf("donner une anne :");
    scanf("%d",&a);
    if (((a%4==0) && (a%100!=0))||(a%400==0))
        printf("%d est une anne bissextile ",a);
    else
        printf("%d n est pas une anne bissextile",a);
    return 0;
}
/*  ///////EX:9\\\\\\\ */
int EX9(){
    int h;
    char j;
    printf("Donner l'heure actuelle : ");
    scanf("%d", &h);
    printf("Donner le jour (A-G) : ");
    scanf(" %c", &j); // Notice the space before %c to skip any newline or whitespace.

    switch (j) {
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            if ((7 <= h && h <= 13) || (16 <= h && h <= 19)) {
                printf("La pharmacie est ouverte.");
            } else {
                printf("La pharmacie est fermée.");
            }
            break;
        case 'A':
        case 'G':
            if (7 <= h && h <= 14) {
                printf("La pharmacie est ouverte.");
            } else {
                printf("La pharmacie est fermée.");
            }
            break;
        default:
            printf("Jour invalide.");
    }
    return 0;
}
/*  ///////EX:10\\\\\\\  */
int EX10(){
    char c;
    printf("donner un entier entre 1 et 9 :");
    c=getchar();
    switch (c){
        case '1':
            printf("i");
            break;
        case '2':
            printf("ii");
            break;
        case '3':
            printf("iii");
            break;
        case '4':
            printf("iv");
            break;
        case '5':
            printf("v");
            break;
        case '6':
            printf("vi");
            break;
        case '7':
            printf("vii");
            break;
        case '8':
            printf("viii");
            break;
        case '9':
            printf("ix");
            break;
        default:
            printf("donner un entier entre 1 et 9");
    }
    return 0;
}
/*  ///////EX:11\\\\\\\  */
int EX11 (){
    int j,m,a;
    printf("donner une date :");
    scanf("%d/%d/%d",&j,&m,&a);
    if (j>31 || m>12)
        printf("date invalide");
    else{
        switch (m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (j>0 && j<31)
                    printf("%d:%d:%d",j+1,m,a);
                else if(j==31){
                        if (m==12)
                            printf("%d:%d:%d",1,1,a+1);
                        else
                            printf("%d:%d:%d",1,m+1,a);
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (j>0 && j<30)
                    printf("%d:%d:%d",j+1,m,a);
                else if(j==31)
                    printf("%d:%d:%d",1,m+1,a);
                break;
            case 2:
                if((((a%4==0) && (a%100!=0))||(a%400==0))&& j==29)
                    printf("%d:%d:%d",1,m+1,a);
                else if (j>0 && j<29)
                    printf("%d:%d:%d",j+1,m,a);
                else if (j>0 && j<28)
                    printf("%d:%d:%d",j+1,m,a);
                else if(j==28)
                    printf("%d:%d:%d",1,m+1,a);
                break;
            default:
                printf("date invalide");
        }}
    return 0;
}

// New Version
