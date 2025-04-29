//Write your code in this file
#include <stdio.h>
#include <string.h>
int main ()
{
    int gr1[13],gr2[13],gr3[13],gr4[13],gr5[13],i;
    float m1=0,m2=0,m3=0,m4=0,m5=0,mt=0,mx=-1;
    char n1[11],n2[11],n3[11],n4[11],n5[11];


    scanf("%s",&n1);
    if(n1[0]>=97&&n1[0]<=122)
        n1[0]-=32;
    for(i=0;i<13;i++)
    {
        scanf("%d",&gr1[i]);
        m1+=gr1[i];
    }
    m1=m1/13;
    if(m1>mx)
        mx=m1;
    


    scanf("%s",&n2);
    if(n2[0]>=97&&n2[0]<=122)
        n2[0]-=32;
    for(i=0;i<13;i++)
    {
        scanf("%d",&gr2[i]);
        m2+=gr2[i];
    }
    m2=m2/13;
    if(m2>mx)
        mx=m2;
 


    scanf("%s",&n3);
    if(n3[0]>=97&&n3[0]<=122)
        n3[0]-=32;
    for(i=0;i<13;i++)
    {
        scanf("%d",&gr3[i]);
        m3+=gr3[i];
    }
    m3=m3/13;
    if(m3>mx)
        mx=m3;
 


    scanf("%s",&n4);
    if(n4[0]>=97&&n4[0]<=122)
        n4[0]-=32;
    for(i=0;i<13;i++)
    {
        scanf("%d",&gr4[i]);
        m4+=gr4[i];
    }
    m4=m4/13;
    if(m4>mx)
        mx=m4;
 
 

    scanf("%s",&n5);
    if(n5[0]>=97&&n5[0]<=122)
        n5[0]-=32;
    for(i=0;i<13;i++)
    {
        scanf("%d",&gr5[i]);
        m5+=gr5[i];
    }
    m5=m5/13;
    if(m5>mx)
        mx=m5;


    
    if(m1==mx)
        printf("%s\n",n1);
    if(m2==mx)
        printf("%s\n",n2);
    if(m3==mx)
        printf("%s\n",n3);
    if(m4==mx)
        printf("%s\n",n4);
    if(m5==mx)
        printf("%s\n",n5);


    mt=(m1+m2+m3+m4+m5)/5;
    if(m1<mt)
        printf("%s\n",n1);
    if(m2<mt)
        printf("%s\n",n2);
    if(m3<mt)
        printf("%s\n",n3);
    if(m4<mt)
        printf("%s\n",n4);
    if(m5<mt)
        printf("%s\n",n5);
    return 0;
}
