/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** create_menu
*/

#include "../../include/my.h"

void create_scn_one(scene_t *scene, game_t *game) //menu origin
{
    scene->map = create_map(game->filepath);
    scene->bg = create_bg(scene->map->txtr ,(sfIntRect){0, 0, 1280, 720});
}

void create_scene(game_t *game)
{
    create_scn_one(game->scn[0], game);
}
