#include<stdio.h>
#include<stdlib.h>
  struct node
  {
  	int info;
  	struct node* link;
  };
  struct node* start=NULL;
  struct node* createNode()
  {
  	struct node* n;
  	n=(struct node*)malloc(sizeof(struct node));
  	return(n);
  }
   void insertNode()
   {
   	struct node* temp;
   	struct node* t;
   	temp=createNode();
   	printf("enter a number");
   	scanf("%d",&temp->info);
   	temp->link=NULL;
   	if(start==NULL)
   	start=temp;
   	else
   	{
   	  t=start;
		 while(t->link!=NULL)
		 t=t->link;
		 t->link=temp;	
	}
   }
   // deletion of first node
    void deleteNode()
    {
    	struct node*r;
    	if(start==NULL)
    	printf("list is empty");
    	else
    	{
         r=start;
		 start=start->link;
		 free(r);		
		}
	}
	  void viewList()
	  {
	  	struct node*t;
	  	if(start==NULL)
	  	printf("list is empty");
	  	else
	  	{
	  		t=start;
	  		while(t!=NULL)
	  		{
	  			printf("\t%d",t->info);
	  			t=t->link;
	  			
			  }
		}
	  }  
	    int menu()
	
	    	{
	    	int ch;
			printf("\n1. add value to the list");
			printf("\n2. delete first value");
			printf("\n3. viewList");
			printf("\n4.exit");
			printf("\n\n enter your choice");
			scanf("%d",&ch);
			return(ch);	
			 }

			 void main()
			 {
			 	while(1){
			 	switch(menu())
			 	{
			 		case 1:
			 			insertNode();
			 			break;
			 		case 2:
			 			deleteNode();
			 			break;
			 		case 3:
			 			viewList();
			 			break;
			 		case 4:
			 			exit(0);
			 		default:
			 			printf("invalid choice");
			 			
			 		}}
			 		getch();
			 }
		
	
