#include <stdio.h>
#include <stdlib.h>

int main()
{   //initialize variables
    char color_adjective[30];
    char color_shape [30] ;
    char adjective_size [30] ;
    char adjective_shape [30] ;
    char place [30] ;
    char food [30] ;
    char adjective [30] ;
    char color [30] ;
    char country [30] ;
    char adjective_noun [30] ;
    char dairy_product [30] ;
    char sea_creature [30] ;


    //colect user info
    printf("please enter a color or adjective: ");
    scanf("%s", &color_adjective);
    printf("please enter a color or shape: ");
    scanf("%s", &color_shape);
    printf("please enter an adjective or size: ");
    scanf("%s", &adjective_size);
    printf("please enter an adjective or shape: ");
    scanf("%s", &adjective_shape);
    printf("please enter a place: ");
    scanf("%s", &place);
    printf("please enter a food: ");
    scanf("%s", &food);
    printf("please enter an adjective: ");
    scanf("%s", &adjective);
    printf("please enter a color: ");
    scanf("%s", &color);
    printf("please enter a country: ");
    scanf("%s", &country);
    printf("please enter an adjective or noun: ");
    scanf("%s", &adjective_noun);
    printf("please enter a dairy product: ");
    scanf("%s", &dairy_product);
    printf("please enter a sea creature: ");
    scanf("%s", &sea_creature);

    //print results
    printf("cats come in all shapes and forms! There's %s cats, %s cats, %s cats, and even long-haired %s cats! Some cats live in a %s and eat %s , while other are %s and %s and from places like %s . If you feed them lots of %s, they'll be happy. Add a little bit of %s on top of of %s , and oh boy, they will be in heaven!", color_adjective, color_shape, adjective_size, adjective_shape, place, food, adjective, color, country, adjective_noun, dairy_product, sea_creature);

    return 0;
}
