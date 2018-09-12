

void init(queue *(*front),queue *(*rear))
{
  *rear=*front=NULL;
}


int remov(queue *(*front),queue *(*rear))
{
  int n;
  queue *temp;
  
  temp=*front;
  n=temp->data;
  
  if(*front==*rear)
      *rear=*front=NULL;
  else
      *front=(*front)->next;
  
  free(temp);
  return n;
 
}


int add(queue *(*rear),queue *(*front),int element)
{
  queue *new;
  if(NULL!=(new=(queue*)malloc(sizeof(queue))))
  {
   new->data=element;
   new->next=NULL;
   if(*rear==NULL)
   {
    *rear=*front=new;
    return 1;
   }
   else
   {
     (*rear)->next=new;
     *rear=new;
      return 1;
   }
  }
 return 0; 
}

int isEmpty(queue *(*front))
{
  if(*front==NULL)
     return 1;
  else
  	 return 0;   
}
