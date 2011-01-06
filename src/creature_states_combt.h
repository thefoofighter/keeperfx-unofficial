/******************************************************************************/
// Free implementation of Bullfrog's Dungeon Keeper strategy game.
/******************************************************************************/
/** @file creature_states_combt.h
 *     Header file for creature_states_combt.c.
 * @par Purpose:
 *     Creature state machine functions related to combat.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     23 Sep 2009 - 05 Jan 2011
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef DK_CRTRSTATECOMBT_H
#define DK_CRTRSTATECOMBT_H

#include "bflib_basics.h"
#include "globals.h"

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
#pragma pack(1)

struct Thing;

typedef void (*CombatState)(struct Thing *);

#pragma pack()
/******************************************************************************/
extern const CombatState combat_state[];
/******************************************************************************/
short cleanup_combat(struct Thing *thing);
short cleanup_door_combat(struct Thing *thing);
short cleanup_object_combat(struct Thing *thing);
short cleanup_seek_the_enemy(struct Thing *thing);
short creature_combat_flee(struct Thing *thing);
short creature_door_combat(struct Thing *thing);
short creature_in_combat(struct Thing *thing);
short creature_object_combat(struct Thing *thing);
void creature_in_combat_wait(struct Thing *thing);
void creature_in_ranged_combat(struct Thing *thing);
void creature_in_melee_combat(struct Thing *thing);
short creature_attack_rooms(struct Thing *thing);
short creature_damage_walls(struct Thing *thing);
short creature_attempt_to_damage_walls(struct Thing *thing);

long creature_retreat_from_combat(struct Thing *thing1, struct Thing *thing2, long a3, long a4);
long get_combat_distance(struct Thing *thing, struct Thing *enemy);
long set_creature_in_combat_to_the_death(struct Thing *fighter1, struct Thing *fighter2, long a3);
long find_fellow_creature_to_fight_in_room(struct Thing *fighter, struct Room *room,long crmodel, struct Thing **enemytng);
void creature_in_combat_wait(struct Thing *thing);
/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif