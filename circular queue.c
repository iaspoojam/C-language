int arr[5];
int front=-1;rear=-1;
void enqueue()
{
if(rear==-1 && front==-1)
{
front=0,rear=0;
arr[rear]=data;
}
else if((rear+1)%N==front)
printf("queue is full");
else
{
rear=(rear+1)%N;
arr[rear]=data;
}

}
void dequeue()
{
if(front==-1 && rear==-1)
{
printf("queue is empty");
}
else if(front==rear)
{
front=rear=0;
}
else {
printf("deleted %d ,arr[front]");
front=(rear+1)%N;
}
}
