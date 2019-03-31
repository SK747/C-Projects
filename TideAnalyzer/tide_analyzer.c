/*
File:         tide_analyzer.c
Purpose:      Consumes a semi-formatted tide measurement file and
determines if the corresponding tide is once- or
twice-daily using a fast discrete Fourier transformation.
The tide measurement file is a txt file whose name
corresponds to the name defined in the preprocessor
directive.  It is a series of NUMBER_OF_READINGS tidal
readings (in mm) taken hourly.

/* Preprocessor directives */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tide_analyzer.h"
#include "discrete_fourier_transform.h"

struct player {
	int jersey_number;
	char * name;
	struct player * next; /* to link this node to the next node */
};
typedef struct player player;
int main(void) {
	player * head_list1 = NULL;
	player * head_list2 = NULL;
	player gretzky = { 99, "Wayne Gretzky", NULL };
	/* Example 1 */
	head_list1 = &gretzky;
	display_list(head_list1);

	/* Example 2 */
	head_list2 = insert_at_head(head_list2, 22, "Daniel Sedin");
	head_list2 = insert_at_head(head_list2, 33, "Henrik Sedin");
	display_list(head_list2);
}

player * insert_at_head(player * head, int player_number, char *player_name) {
	player * new_node;

	new_node = (player *)malloc(sizeof(player));

	new_node->jersey_number = player_number;
	new_node->name = player_name;
	new_node->next = head; /* point to current head of list */

	printf("Node was added.\n\n");
	return new_node; /* the new node is the new head */
}