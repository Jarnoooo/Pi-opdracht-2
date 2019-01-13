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
//bereken totaal geheugen nodig met sizeoff en struct
{
	struct block *bptr;
	sbrk(sizeof(struct block)+size); // berekend totaal geheugen nodig
	
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
	bptr -> used = false;
	bptr -> prev = NULL;
	
//  bool used hier op false zetten

}

/* get an unused block that has already been allocated */
static void *block_get(size_t size);
{
	
//	gaat hele lijst af tot sizeoff gelijk aan wat nodig is... geef dan adress door van waar op te slaan 
	struct header_t *curr = head;
	while(curr) {
		if (curr->is_free && curr->size >= size)
			return curr;
		curr = curr->next;
	}
	return NULL;	
	}
}

/* return a new memory space of at least "size" bytes */
void *malloc(size_t size)
{
	void* block;
	block = sbrk(size);
	if (block == (void*)-1)
	{
		block_alloc(size);
	}	
	return block;
	else{

		bptr -> used = true;
		return (void*)(header +1);

	}
	// size_off met grootte van op te slaan info... verwijst naar block get met size 
	// geeft block_get valid pointer?
	
	// ja
	// zet is_free op 0 en return pointer van block van af waar je kan schrijven
	// geef dat adres terug aan main
	
	// nee
	// return vanuit block_get null dan maken we nieuw block aan
	// dan verwijs block_alloc 
	// Maak nieuw block aan in alloc met goede grootte
	// Krijg uit block_alloc adres terug, 
	// return dat adres naar main
	
	
// Geen block 0 naar block alloc met parameter size (maak nieuw block aan)

}

/* free a memory space from memory */
void free(void *bptr)
{
	
// sizegrootte - headsize dat adress meegeven aan block free
// sbrk met negatief getal groote, sloopt vanaf adres naar boven weg met groote in sbrk 
struct header_t *header;

if (!block)
{
	return;
}	

else{
	header = (struct header_t*)block -1;
	sbrk(0 - sizeof(struct header_t)-header ->size);
	return;
}
//maak head van block free 

}

int main()
{

	
	return 0;
}