#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDS 52
#define FACES 13

//card structure definition
struct card {
	const char *face; //define pointer face
	const char *suit; //define pointer suit
};

typedef struct card Card; //new type name for struct card

//prototypes
void fillDeck(Card *const wDeck,const char *wFace[],const char *wSuit[]);
void shuffle(Card *const wDeck);
void deal(const Card *const wDeck);

int main (void) {
	Card deck[CARDS]; //define array of cards
	
	//initialize array of pointers
	const char *face[]={"Ace", "Deuce", "Three", "Four", "Five",
                        "Six", "Seven", "Eight", "Nine", "Ten",
                        "Jack", "Queen", "King"};
    const char *suit[]={"Hearts","Diamonds","Clubs","Spades"};
    
    srand(time(NULL)); //randomize
    
    fillDeck(deck,face,suit ); // load the deck with Cards
    shuffle(deck); // put Cards in random order
    deal(deck); // deal all 52 Cards
} //end main

// place strings into Card structures
void fillDeck(Card *const wDeck,const char * wFace[], const char * wSuit[]) {
	size_t i; // counter

	// loop through wDeck
	for ( i = 0; i < CARDS; ++i ) {
		wDeck[i].face = wFace[i % FACES];
		wDeck[i].suit = wSuit[i / FACES];
    } // end for
} // end function fillDeck

//shuffle cards
void shuffle(Card *const wDeck) {
	size_t i;
	size_t j;
	Card temp;
	
	//loop through wDeck randomly swapping Cards
	for (i=0; i<CARDS; ++i) {
		j = rand() % CARDS;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
} //end function shuffle

//deal cards
void deal(const Card *const wDeck) {
	size_t i;
	
	for (i=0; i<CARDS; ++i) {
		printf("%5s of %-8s%s",wDeck[i].face,wDeck[i].suit,(i+1) % 4 ? " ":"\n");
	}
}
