#include "resistor_color.h"
#include <stdio.h>

resistor_band_t resistorBandColors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};


int color_code(resistor_band_t registor) {
    printf("Novo valor: %d\n", registor);
    return registor;
}

resistor_band_t *colors(void)
{
    return resistorBandColors;
}
