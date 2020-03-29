/*
this program is to find the solution of puzzle GO FIGURES in MUMBAI MIRROR

here four numbers are given
<number1>__<number2>__<number3>__<number4> = given__in puzzle>

in all possible permutations
*/






#include<stdio.h>

int op(float a,float b,char c);

void calculation(float a,float b,float c,float d,float ans);//function declaration




void main()

{
int m,n,o,p,i;
  
float a[10],ans;
   
printf("enter the four numbers\n");
   
for(i=0;i<4;i++)
    {scanf("%f",&a[i]);}
  
printf("enter the answer\n");//taking values required for the program 

 scanf("%f",&ans);
   
 //---------------------------------
    
//to find all the permutations of given numbers
  
  for(m=0;m<4;m++)
 
  { for(n=0;n<4;n++)
    
{for(o=0;o<4;o++)
   
 {for(p=0;p<4;p++)
    
  {
         if( (m!=n)&&(m!=o)&& (m!=p)&& (n!=o)&&(n!=p)&& (o!=p) )//the same number should not be repeated
 
        {calculation(a[m],a[n],a[o],a[p],ans);}  }//to find all possible operations with numbers
   
  }
    
 }
   
 }



}


//---------------------------------------------------------
//function definitions




int op(float a,float b,char c)//to change operators using switch

{
	switch(c)
	
       {
case'+':{return(a+b);break;}

	case'-':{return(a-b);break;}
		
        case'*':{return(a*b);break;}
		
        case'/':{return(a/b);break;}
	}
}

//----------------------------------------------------------

void calculation(float a,float b,float c,float d,float ans)//to find and compare outcomes of all operations with answer

{float e;
int i,j,k;

char v[4]={'+','-','*','/'};


for(k=0;k<4;k++)

{for(j=0;j<4;j++)
   
  {for(i=0;i<4;i++)
	
     {e=op(op(op(a,b,v[i]),c,v[j]),d,v[k]);
	
        if(e==ans)
		   
        {printf("%f %c %f %c %f %c %f = %f \n ",a,v[i],b,v[j],c,v[k],d,ans);}
	     
	     
 }
   
 }
	

}

}

