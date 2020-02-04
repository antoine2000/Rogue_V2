# include "characters_and_stuff.h"

int main() {
	setup set = setup_map(10);
	add_characters_and_monsters(set);
	add_stuff(set);
	return 0;
}

