//

//  StaticLinkedListModelViewController.c

//  StaticLinkedList

//

//  Created by Mewlan Musajan on 10/23/17.

//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.

//

#include <stdio.h>

struct Student
{
	unsigned int number;
	float score;
	struct Student *next;
};

int main(int argc, char *argv[])
{
	model();
	return 0;
}

void model()
{
	struct Student a, b, c, *ptr, *head;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	ptr = head;
	view(ptr);
}

void view(struct Student *ptr)
{
	printf("Enter student number, score:\n");
	inPutController(ptr);
	outPutViewController(ptr);
}

void inPutController(struct Student *ptr)
{
	struct Student *original;
	original = ptr;
	do 
	{
		scanf("%d, %f", &ptr->number, &ptr->score);
		ptr = ptr->next;
	} while(ptr != NULL);
	ptr = original;
}

void outPutViewController(struct Student *ptr)
{
	do
	{
		printf("Student number: %d, score: %0.2f\n", ptr->number, ptr->score);
		ptr = ptr->next;
	} while(ptr != NULL);
}