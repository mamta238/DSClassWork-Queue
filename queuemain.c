#include<stdio.h>
#include<malloc.h>
#include "queuestruct.c"
#include "queueheader.h"
#include "queuefunc.c"

#define INPUT stdin
#define OUTPUT stdout


int main(void)
{
 int option,element,result;
 queue *front,*rear;
 do
 {
  fprintf(OUTPUT,"\n\n1.Create\n2.Add\n3.Remove\n4.Isempty\nEnter Option:\n");
  fscanf(INPUT,"%d",&option);
  
  switch(option)
  {
   	case 1:init(&front,&rear);
   			break;
   	case 2:fprintf(OUTPUT,"\nEnter the element:");
   		   fscanf(INPUT,"%d",&element);
   		   result=add(&rear,&front,element);
   		   fprintf(OUTPUT,"%d",result);
   		    break;
   	case 3:if(isEmpty(&front))
   			fprintf(OUTPUT,"\nQueue Empty");
   	       else
   	        {
   	         result=remov(&front,&rear);
   	         fprintf(OUTPUT,"%d",result);
   	        }		 	    		
   	        break;
   	case 4:if(isEmpty(&front))
   			fprintf(OUTPUT,"Queue Empty");
   	       else
   	        fprintf(OUTPUT,"Queue Not Empty");		         
  }
 }while(option<5);
 
 return 0;
}

