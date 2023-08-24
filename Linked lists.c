#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Node{ 
    char name[20];
    int age;
    struct Node* next;
    
}Student, *stuNode;

stuNode iniHead()
{
    Student* node = (stuNode)malloc(sizeof(Student));
    node->next=NULL;
    
    return node;
}
stuNode createNode(Student data){
        Student* node = (stuNode)malloc(sizeof(Student));
        node->age=data.age;
        strcpy(node->name,data.name);
        node->next=NULL;
        
        return node;
}

void input(stuNode head)
{
    Student d;
    stuNode s,p;
    
    scanf("%s %d", d.name,&d.age);
    s=createNode(d);
    p=head;
    //head->next=s;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=s;
}

void output(stuNode head)
{
    stuNode p;
    
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
        printf("%s %d\n", p->name, p->age);
    }
    
    
    
}
int main() {
    stuNode head;
    head = iniHead();
    input(head);
     input(head);
     input(head);
    output(head);

    return 0;
}