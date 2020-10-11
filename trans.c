#include <gb/gb.h>
#include <gb/cgb.h> 

// Trans Flag Background Data
#include "bg/trans_flag_tilemap.c"
#include "bg/trans_flag_tileset.c"

#define TRANS_BLUE RGB(100, 165, 255)
#define TRANS_PINK RGB(255, 0, 254)
#define TRANS_WHITE RGB(255, 255, 255)

UWORD bkgPalette[] = {
	TRANS_WHITE, TRANS_PINK, TRANS_BLUE,
};

void main(void){
	set_bkg_palette(0, 1, bkgPalette);
	set_bkg_data(0, TILESET_TILE_COUNT, TILESET);
	set_bkg_tiles(0, 0, TILEMAP_WIDTH, TILEMAP_HEIGHT, TILEMAP);
	SHOW_BKG;
}