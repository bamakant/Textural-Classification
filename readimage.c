#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main() {
    int width = 50, height=50, bpp=5;

    uint8_t* rgb_image = stbi_load("stud.jpg", &width, &height, &bpp, 3);

    stbi_image_free(rgb_image);

printf("%hhn",rgb_image);

    return 0;
}
