#include <stdbool.h>	/* includes bool */
#include <stdio.h>	/* includes printf() */
#include <string.h>	/* includes strcpy() */
#include <unistd.h>	/* includes sbrk() */

struct block {
	void		*addr;
	size_t		size;
	bool		used;
	struct block	*prev;
};

static struct block *head;

/* allocate a new block using sbrk() */
static void *block_alloc(size_t size)
{
	struct block *bptr;

	/* TODO your code here */

	if (head == NULL) {
		bptr->prev = NULL;
	} else {
		bptr->prev = head;
	}

	/* append the new block structure to the head of the linked list */
	head = bptr;

	/* TODO your code here */
}

/* mark a block as unused or free it from memory */
static void block_free(struct block *bptr)
{
	if(*head == NULL){}
    else{
        (*head)->used = true;
    }
	// *bptr.used = false;
//  bool used hier op false zetten als 
}

/* get an unused block that has already been allocated */
static void *block_get(size_t size);
{
	for(int i = 0; i <= 10; i++){
		if(*head == NULL){
		
		}else{
			(*head)->used = true;
		}
}

/* return a new memory space of at least "size" bytes */
void *malloc(size_t size)
{

}

/* free a memory space from memory */
void free(void *ptr)
{

}

int main()
{
	struct block book1;
	
	return 0;
}