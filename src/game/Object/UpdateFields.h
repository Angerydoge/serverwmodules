/**
 * MaNGOS is a full featured server for World of Warcraft, supporting
 * the following clients: 1.12.x, 2.4.3, 3.3.5a, 4.3.4a and 5.4.8
 *
 * Copyright (C) 2005-2021 MaNGOS <https://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef _UPDATEFIELDS_AUTO_H
#define _UPDATEFIELDS_AUTO_H

// Auto generated for version 4, 3, 4, 15595

enum EObjectFields
{
    OBJECT_FIELD_GUID                                = 0x0,
    OBJECT_FIELD_DATA                                = 0x2,
    OBJECT_FIELD_TYPE                                = 0x4,
    OBJECT_FIELD_ENTRY                               = 0x5,
    OBJECT_FIELD_SCALE_X                             = 0x6,
    OBJECT_FIELD_PADDING                             = 0x7,
    OBJECT_END                                       = 0x8
};

enum EUnitFields
{
    UNIT_FIELD_CHARM                                 = OBJECT_END + 0x0,
    UNIT_FIELD_SUMMON                                = OBJECT_END + 0x2,
    UNIT_FIELD_CRITTER                               = OBJECT_END + 0x4,
    UNIT_FIELD_CHARMEDBY                             = OBJECT_END + 0x6,
    UNIT_FIELD_SUMMONEDBY                            = OBJECT_END + 0x8,
    UNIT_FIELD_CREATEDBY                             = OBJECT_END + 0xA,
    UNIT_FIELD_TARGET                                = OBJECT_END + 0xC,
    UNIT_FIELD_CHANNEL_OBJECT                        = OBJECT_END + 0xE,
    UNIT_CHANNEL_SPELL                               = OBJECT_END + 0x10,
    UNIT_FIELD_BYTES_0                               = OBJECT_END + 0x11,
    UNIT_FIELD_HEALTH                                = OBJECT_END + 0x12,
    UNIT_FIELD_POWER1                                = OBJECT_END + 0x13,
    UNIT_FIELD_POWER2                                = OBJECT_END + 0x14,
    UNIT_FIELD_POWER3                                = OBJECT_END + 0x15,
    UNIT_FIELD_POWER4                                = OBJECT_END + 0x16,
    UNIT_FIELD_POWER5                                = OBJECT_END + 0x17,
    UNIT_FIELD_MAXHEALTH                             = OBJECT_END + 0x18,
    UNIT_FIELD_MAXPOWER1                             = OBJECT_END + 0x19,
    UNIT_FIELD_MAXPOWER2                             = OBJECT_END + 0x1A,
    UNIT_FIELD_MAXPOWER3                             = OBJECT_END + 0x1B,
    UNIT_FIELD_MAXPOWER4                             = OBJECT_END + 0x1C,
    UNIT_FIELD_MAXPOWER5                             = OBJECT_END + 0x1D,
    UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER             = OBJECT_END + 0x1E,
    UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER = OBJECT_END + 0x23,
    UNIT_FIELD_LEVEL                                 = OBJECT_END + 0x28,
    UNIT_FIELD_FACTIONTEMPLATE                       = OBJECT_END + 0x29,
    UNIT_VIRTUAL_ITEM_SLOT_ID                        = OBJECT_END + 0x2A,
    UNIT_FIELD_FLAGS                                 = OBJECT_END + 0x2D,
    UNIT_FIELD_FLAGS_2                               = OBJECT_END + 0x2E,
    UNIT_FIELD_AURASTATE                             = OBJECT_END + 0x2F,
    UNIT_FIELD_BASEATTACKTIME                        = OBJECT_END + 0x30,
    UNIT_FIELD_RANGEDATTACKTIME                      = OBJECT_END + 0x32,
    UNIT_FIELD_BOUNDINGRADIUS                        = OBJECT_END + 0x33,
    UNIT_FIELD_COMBATREACH                           = OBJECT_END + 0x34,
    UNIT_FIELD_DISPLAYID                             = OBJECT_END + 0x35,
    UNIT_FIELD_NATIVEDISPLAYID                       = OBJECT_END + 0x36,
    UNIT_FIELD_MOUNTDISPLAYID                        = OBJECT_END + 0x37,
    UNIT_FIELD_MINDAMAGE                             = OBJECT_END + 0x38,
    UNIT_FIELD_MAXDAMAGE                             = OBJECT_END + 0x39,
    UNIT_FIELD_MINOFFHANDDAMAGE                      = OBJECT_END + 0x3A,
    UNIT_FIELD_MAXOFFHANDDAMAGE                      = OBJECT_END + 0x3B,
    UNIT_FIELD_BYTES_1                               = OBJECT_END + 0x3C,
    UNIT_FIELD_PETNUMBER                             = OBJECT_END + 0x3D,
    UNIT_FIELD_PET_NAME_TIMESTAMP                    = OBJECT_END + 0x3E,
    UNIT_FIELD_PETEXPERIENCE                         = OBJECT_END + 0x3F,
    UNIT_FIELD_PETNEXTLEVELEXP                       = OBJECT_END + 0x40,
    UNIT_DYNAMIC_FLAGS                               = OBJECT_END + 0x41,
    UNIT_MOD_CAST_SPEED                              = OBJECT_END + 0x42,
    UNIT_MOD_CAST_HASTE                              = OBJECT_END + 0x43,
    UNIT_CREATED_BY_SPELL                            = OBJECT_END + 0x44,
    UNIT_NPC_FLAGS                                   = OBJECT_END + 0x45,
    UNIT_NPC_EMOTESTATE                              = OBJECT_END + 0x46,
    UNIT_FIELD_STAT0                                 = OBJECT_END + 0x47,
    UNIT_FIELD_STAT1                                 = OBJECT_END + 0x48,
    UNIT_FIELD_STAT2                                 = OBJECT_END + 0x49,
    UNIT_FIELD_STAT3                                 = OBJECT_END + 0x4A,
    UNIT_FIELD_STAT4                                 = OBJECT_END + 0x4B,
    UNIT_FIELD_POSSTAT0                              = OBJECT_END + 0x4C,
    UNIT_FIELD_POSSTAT1                              = OBJECT_END + 0x4D,
    UNIT_FIELD_POSSTAT2                              = OBJECT_END + 0x4E,
    UNIT_FIELD_POSSTAT3                              = OBJECT_END + 0x4F,
    UNIT_FIELD_POSSTAT4                              = OBJECT_END + 0x50,
    UNIT_FIELD_NEGSTAT0                              = OBJECT_END + 0x51,
    UNIT_FIELD_NEGSTAT1                              = OBJECT_END + 0x52,
    UNIT_FIELD_NEGSTAT2                              = OBJECT_END + 0x53,
    UNIT_FIELD_NEGSTAT3                              = OBJECT_END + 0x54,
    UNIT_FIELD_NEGSTAT4                              = OBJECT_END + 0x55,
    UNIT_FIELD_RESISTANCES                           = OBJECT_END + 0x56,
    UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE            = OBJECT_END + 0x5D,
    UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE            = OBJECT_END + 0x64,
    UNIT_FIELD_BASE_MANA                             = OBJECT_END + 0x6B,
    UNIT_FIELD_BASE_HEALTH                           = OBJECT_END + 0x6C,
    UNIT_FIELD_BYTES_2                               = OBJECT_END + 0x6D,
    UNIT_FIELD_ATTACK_POWER                          = OBJECT_END + 0x6E,
    UNIT_FIELD_ATTACK_POWER_MOD_POS                  = OBJECT_END + 0x6F,
    UNIT_FIELD_ATTACK_POWER_MOD_NEG                  = OBJECT_END + 0x70,
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER               = OBJECT_END + 0x71,
    UNIT_FIELD_RANGED_ATTACK_POWER                   = OBJECT_END + 0x72,
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS           = OBJECT_END + 0x73,
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG           = OBJECT_END + 0x74,
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER        = OBJECT_END + 0x75,
    UNIT_FIELD_MINRANGEDDAMAGE                       = OBJECT_END + 0x76,
    UNIT_FIELD_MAXRANGEDDAMAGE                       = OBJECT_END + 0x77,
    UNIT_FIELD_POWER_COST_MODIFIER                   = OBJECT_END + 0x78,
    UNIT_FIELD_POWER_COST_MULTIPLIER                 = OBJECT_END + 0x7F,
    UNIT_FIELD_MAXHEALTHMODIFIER                     = OBJECT_END + 0x86,
    UNIT_FIELD_HOVERHEIGHT                           = OBJECT_END + 0x87,
    UNIT_FIELD_MAXITEMLEVEL                          = OBJECT_END + 0x88,
    UNIT_FIELD_PADDING                               = OBJECT_END + 0x89,
    UNIT_END                                         = OBJECT_END + 0x8A
};

enum EItemFields
{
    ITEM_FIELD_OWNER                                 = OBJECT_END + 0x0,
    ITEM_FIELD_CONTAINED                             = OBJECT_END + 0x2,
    ITEM_FIELD_CREATOR                               = OBJECT_END + 0x4,
    ITEM_FIELD_GIFTCREATOR                           = OBJECT_END + 0x6,
    ITEM_FIELD_STACK_COUNT                           = OBJECT_END + 0x8,
    ITEM_FIELD_DURATION                              = OBJECT_END + 0x9,
    ITEM_FIELD_SPELL_CHARGES                         = OBJECT_END + 0xA,
    ITEM_FIELD_FLAGS                                 = OBJECT_END + 0xF,
    ITEM_FIELD_ENCHANTMENT_1_1                       = OBJECT_END + 0x10,
    ITEM_FIELD_ENCHANTMENT_1_3                       = OBJECT_END + 0x12,
    ITEM_FIELD_ENCHANTMENT_2_1                       = OBJECT_END + 0x13,
    ITEM_FIELD_ENCHANTMENT_2_3                       = OBJECT_END + 0x15,
    ITEM_FIELD_ENCHANTMENT_3_1                       = OBJECT_END + 0x16,
    ITEM_FIELD_ENCHANTMENT_3_3                       = OBJECT_END + 0x18,
    ITEM_FIELD_ENCHANTMENT_4_1                       = OBJECT_END + 0x19,
    ITEM_FIELD_ENCHANTMENT_4_3                       = OBJECT_END + 0x1B,
    ITEM_FIELD_ENCHANTMENT_5_1                       = OBJECT_END + 0x1C,
    ITEM_FIELD_ENCHANTMENT_5_3                       = OBJECT_END + 0x1E,
    ITEM_FIELD_ENCHANTMENT_6_1                       = OBJECT_END + 0x1F,
    ITEM_FIELD_ENCHANTMENT_6_3                       = OBJECT_END + 0x21,
    ITEM_FIELD_ENCHANTMENT_7_1                       = OBJECT_END + 0x22,
    ITEM_FIELD_ENCHANTMENT_7_3                       = OBJECT_END + 0x24,
    ITEM_FIELD_ENCHANTMENT_8_1                       = OBJECT_END + 0x25,
    ITEM_FIELD_ENCHANTMENT_8_3                       = OBJECT_END + 0x27,
    ITEM_FIELD_ENCHANTMENT_9_1                       = OBJECT_END + 0x28,
    ITEM_FIELD_ENCHANTMENT_9_3                       = OBJECT_END + 0x2A,
    ITEM_FIELD_ENCHANTMENT_10_1                      = OBJECT_END + 0x2B,
    ITEM_FIELD_ENCHANTMENT_10_3                      = OBJECT_END + 0x2D,
    ITEM_FIELD_ENCHANTMENT_11_1                      = OBJECT_END + 0x2E,
    ITEM_FIELD_ENCHANTMENT_11_3                      = OBJECT_END + 0x30,
    ITEM_FIELD_ENCHANTMENT_12_1                      = OBJECT_END + 0x31,
    ITEM_FIELD_ENCHANTMENT_12_3                      = OBJECT_END + 0x33,
    ITEM_FIELD_ENCHANTMENT_13_1                      = OBJECT_END + 0x34,
    ITEM_FIELD_ENCHANTMENT_13_3                      = OBJECT_END + 0x36,
    ITEM_FIELD_ENCHANTMENT_14_1                      = OBJECT_END + 0x37,
    ITEM_FIELD_ENCHANTMENT_14_3                      = OBJECT_END + 0x39,
    ITEM_FIELD_ENCHANTMENT_15_1                      = OBJECT_END + 0x3A,
    ITEM_FIELD_ENCHANTMENT_15_3                      = OBJECT_END + 0x3C,
    ITEM_FIELD_PROPERTY_SEED                         = OBJECT_END + 0x3D,
    ITEM_FIELD_RANDOM_PROPERTIES_ID                  = OBJECT_END + 0x3E,
    ITEM_FIELD_DURABILITY                            = OBJECT_END + 0x3F,
    ITEM_FIELD_MAXDURABILITY                         = OBJECT_END + 0x40,
    ITEM_FIELD_CREATE_PLAYED_TIME                    = OBJECT_END + 0x41,
    ITEM_END                                         = OBJECT_END + 0x42
};

enum EPlayerFields
{
    PLAYER_DUEL_ARBITER                              = UNIT_END + 0x0,
    PLAYER_FLAGS                                     = UNIT_END + 0x2,
    PLAYER_GUILDRANK                                 = UNIT_END + 0x3,
    PLAYER_GUILDDELETE_DATE                          = UNIT_END + 0x4,
    PLAYER_GUILDLEVEL                                = UNIT_END + 0x5,
    PLAYER_BYTES                                     = UNIT_END + 0x6,
    PLAYER_BYTES_2                                   = UNIT_END + 0x7,
    PLAYER_BYTES_3                                   = UNIT_END + 0x8,
    PLAYER_DUEL_TEAM                                 = UNIT_END + 0x9,
    PLAYER_GUILD_TIMESTAMP                           = UNIT_END + 0xA,
    PLAYER_QUEST_LOG_1_1                             = UNIT_END + 0xB,
    PLAYER_QUEST_LOG_1_2                             = UNIT_END + 0xC,
    PLAYER_QUEST_LOG_1_3                             = UNIT_END + 0xD,
    PLAYER_QUEST_LOG_1_4                             = UNIT_END + 0xF,
    PLAYER_QUEST_LOG_2_1                             = UNIT_END + 0x10,
    PLAYER_QUEST_LOG_2_2                             = UNIT_END + 0x11,
    PLAYER_QUEST_LOG_2_3                             = UNIT_END + 0x12,
    PLAYER_QUEST_LOG_2_5                             = UNIT_END + 0x14,
    PLAYER_QUEST_LOG_3_1                             = UNIT_END + 0x15,
    PLAYER_QUEST_LOG_3_2                             = UNIT_END + 0x16,
    PLAYER_QUEST_LOG_3_3                             = UNIT_END + 0x17,
    PLAYER_QUEST_LOG_3_5                             = UNIT_END + 0x19,
    PLAYER_QUEST_LOG_4_1                             = UNIT_END + 0x1A,
    PLAYER_QUEST_LOG_4_2                             = UNIT_END + 0x1B,
    PLAYER_QUEST_LOG_4_3                             = UNIT_END + 0x1C,
    PLAYER_QUEST_LOG_4_5                             = UNIT_END + 0x1E,
    PLAYER_QUEST_LOG_5_1                             = UNIT_END + 0x1F,
    PLAYER_QUEST_LOG_5_2                             = UNIT_END + 0x20,
    PLAYER_QUEST_LOG_5_3                             = UNIT_END + 0x21,
    PLAYER_QUEST_LOG_5_5                             = UNIT_END + 0x23,
    PLAYER_QUEST_LOG_6_1                             = UNIT_END + 0x24,
    PLAYER_QUEST_LOG_6_2                             = UNIT_END + 0x25,
    PLAYER_QUEST_LOG_6_3                             = UNIT_END + 0x26,
    PLAYER_QUEST_LOG_6_5                             = UNIT_END + 0x28,
    PLAYER_QUEST_LOG_7_1                             = UNIT_END + 0x29,
    PLAYER_QUEST_LOG_7_2                             = UNIT_END + 0x2A,
    PLAYER_QUEST_LOG_7_3                             = UNIT_END + 0x2B,
    PLAYER_QUEST_LOG_7_5                             = UNIT_END + 0x2D,
    PLAYER_QUEST_LOG_8_1                             = UNIT_END + 0x2E,
    PLAYER_QUEST_LOG_8_2                             = UNIT_END + 0x2F,
    PLAYER_QUEST_LOG_8_3                             = UNIT_END + 0x30,
    PLAYER_QUEST_LOG_8_5                             = UNIT_END + 0x32,
    PLAYER_QUEST_LOG_9_1                             = UNIT_END + 0x33,
    PLAYER_QUEST_LOG_9_2                             = UNIT_END + 0x34,
    PLAYER_QUEST_LOG_9_3                             = UNIT_END + 0x35,
    PLAYER_QUEST_LOG_9_5                             = UNIT_END + 0x37,
    PLAYER_QUEST_LOG_10_1                            = UNIT_END + 0x38,
    PLAYER_QUEST_LOG_10_2                            = UNIT_END + 0x39,
    PLAYER_QUEST_LOG_10_3                            = UNIT_END + 0x3A,
    PLAYER_QUEST_LOG_10_5                            = UNIT_END + 0x3C,
    PLAYER_QUEST_LOG_11_1                            = UNIT_END + 0x3D,
    PLAYER_QUEST_LOG_11_2                            = UNIT_END + 0x3E,
    PLAYER_QUEST_LOG_11_3                            = UNIT_END + 0x3F,
    PLAYER_QUEST_LOG_11_5                            = UNIT_END + 0x41,
    PLAYER_QUEST_LOG_12_1                            = UNIT_END + 0x42,
    PLAYER_QUEST_LOG_12_2                            = UNIT_END + 0x43,
    PLAYER_QUEST_LOG_12_3                            = UNIT_END + 0x44,
    PLAYER_QUEST_LOG_12_5                            = UNIT_END + 0x46,
    PLAYER_QUEST_LOG_13_1                            = UNIT_END + 0x47,
    PLAYER_QUEST_LOG_13_2                            = UNIT_END + 0x48,
    PLAYER_QUEST_LOG_13_3                            = UNIT_END + 0x49,
    PLAYER_QUEST_LOG_13_5                            = UNIT_END + 0x4B,
    PLAYER_QUEST_LOG_14_1                            = UNIT_END + 0x4C,
    PLAYER_QUEST_LOG_14_2                            = UNIT_END + 0x4D,
    PLAYER_QUEST_LOG_14_3                            = UNIT_END + 0x4E,
    PLAYER_QUEST_LOG_14_5                            = UNIT_END + 0x50,
    PLAYER_QUEST_LOG_15_1                            = UNIT_END + 0x51,
    PLAYER_QUEST_LOG_15_2                            = UNIT_END + 0x52,
    PLAYER_QUEST_LOG_15_3                            = UNIT_END + 0x53,
    PLAYER_QUEST_LOG_15_5                            = UNIT_END + 0x55,
    PLAYER_QUEST_LOG_16_1                            = UNIT_END + 0x56,
    PLAYER_QUEST_LOG_16_2                            = UNIT_END + 0x57,
    PLAYER_QUEST_LOG_16_3                            = UNIT_END + 0x58,
    PLAYER_QUEST_LOG_16_5                            = UNIT_END + 0x5A,
    PLAYER_QUEST_LOG_17_1                            = UNIT_END + 0x5B,
    PLAYER_QUEST_LOG_17_2                            = UNIT_END + 0x5C,
    PLAYER_QUEST_LOG_17_3                            = UNIT_END + 0x5D,
    PLAYER_QUEST_LOG_17_5                            = UNIT_END + 0x5F,
    PLAYER_QUEST_LOG_18_1                            = UNIT_END + 0x60,
    PLAYER_QUEST_LOG_18_2                            = UNIT_END + 0x61,
    PLAYER_QUEST_LOG_18_3                            = UNIT_END + 0x62,
    PLAYER_QUEST_LOG_18_5                            = UNIT_END + 0x64,
    PLAYER_QUEST_LOG_19_1                            = UNIT_END + 0x65,
    PLAYER_QUEST_LOG_19_2                            = UNIT_END + 0x66,
    PLAYER_QUEST_LOG_19_3                            = UNIT_END + 0x67,
    PLAYER_QUEST_LOG_19_5                            = UNIT_END + 0x69,
    PLAYER_QUEST_LOG_20_1                            = UNIT_END + 0x6A,
    PLAYER_QUEST_LOG_20_2                            = UNIT_END + 0x6B,
    PLAYER_QUEST_LOG_20_3                            = UNIT_END + 0x6C,
    PLAYER_QUEST_LOG_20_5                            = UNIT_END + 0x6E,
    PLAYER_QUEST_LOG_21_1                            = UNIT_END + 0x6F,
    PLAYER_QUEST_LOG_21_2                            = UNIT_END + 0x70,
    PLAYER_QUEST_LOG_21_3                            = UNIT_END + 0x71,
    PLAYER_QUEST_LOG_21_5                            = UNIT_END + 0x73,
    PLAYER_QUEST_LOG_22_1                            = UNIT_END + 0x74,
    PLAYER_QUEST_LOG_22_2                            = UNIT_END + 0x75,
    PLAYER_QUEST_LOG_22_3                            = UNIT_END + 0x76,
    PLAYER_QUEST_LOG_22_5                            = UNIT_END + 0x78,
    PLAYER_QUEST_LOG_23_1                            = UNIT_END + 0x79,
    PLAYER_QUEST_LOG_23_2                            = UNIT_END + 0x7A,
    PLAYER_QUEST_LOG_23_3                            = UNIT_END + 0x7B,
    PLAYER_QUEST_LOG_23_5                            = UNIT_END + 0x7D,
    PLAYER_QUEST_LOG_24_1                            = UNIT_END + 0x7E,
    PLAYER_QUEST_LOG_24_2                            = UNIT_END + 0x7F,
    PLAYER_QUEST_LOG_24_3                            = UNIT_END + 0x80,
    PLAYER_QUEST_LOG_24_5                            = UNIT_END + 0x82,
    PLAYER_QUEST_LOG_25_1                            = UNIT_END + 0x83,
    PLAYER_QUEST_LOG_25_2                            = UNIT_END + 0x84,
    PLAYER_QUEST_LOG_25_3                            = UNIT_END + 0x85,
    PLAYER_QUEST_LOG_25_5                            = UNIT_END + 0x87,
    PLAYER_QUEST_LOG_26_1                            = UNIT_END + 0x88,
    PLAYER_QUEST_LOG_26_2                            = UNIT_END + 0x89,
    PLAYER_QUEST_LOG_26_3                            = UNIT_END + 0x8A,
    PLAYER_QUEST_LOG_26_5                            = UNIT_END + 0x8C,
    PLAYER_QUEST_LOG_27_1                            = UNIT_END + 0x8D,
    PLAYER_QUEST_LOG_27_2                            = UNIT_END + 0x8E,
    PLAYER_QUEST_LOG_27_3                            = UNIT_END + 0x8F,
    PLAYER_QUEST_LOG_27_5                            = UNIT_END + 0x91,
    PLAYER_QUEST_LOG_28_1                            = UNIT_END + 0x92,
    PLAYER_QUEST_LOG_28_2                            = UNIT_END + 0x93,
    PLAYER_QUEST_LOG_28_3                            = UNIT_END + 0x94,
    PLAYER_QUEST_LOG_28_5                            = UNIT_END + 0x96,
    PLAYER_QUEST_LOG_29_1                            = UNIT_END + 0x97,
    PLAYER_QUEST_LOG_29_2                            = UNIT_END + 0x98,
    PLAYER_QUEST_LOG_29_3                            = UNIT_END + 0x99,
    PLAYER_QUEST_LOG_29_5                            = UNIT_END + 0x9B,
    PLAYER_QUEST_LOG_30_1                            = UNIT_END + 0x9C,
    PLAYER_QUEST_LOG_30_2                            = UNIT_END + 0x9D,
    PLAYER_QUEST_LOG_30_3                            = UNIT_END + 0x9E,
    PLAYER_QUEST_LOG_30_5                            = UNIT_END + 0xA0,
    PLAYER_QUEST_LOG_31_1                            = UNIT_END + 0xA1,
    PLAYER_QUEST_LOG_31_2                            = UNIT_END + 0xA2,
    PLAYER_QUEST_LOG_31_3                            = UNIT_END + 0xA3,
    PLAYER_QUEST_LOG_31_5                            = UNIT_END + 0xA5,
    PLAYER_QUEST_LOG_32_1                            = UNIT_END + 0xA6,
    PLAYER_QUEST_LOG_32_2                            = UNIT_END + 0xA7,
    PLAYER_QUEST_LOG_32_3                            = UNIT_END + 0xA8,
    PLAYER_QUEST_LOG_32_5                            = UNIT_END + 0xAA,
    PLAYER_QUEST_LOG_33_1                            = UNIT_END + 0xAB,
    PLAYER_QUEST_LOG_33_2                            = UNIT_END + 0xAC,
    PLAYER_QUEST_LOG_33_3                            = UNIT_END + 0xAD,
    PLAYER_QUEST_LOG_33_5                            = UNIT_END + 0xAF,
    PLAYER_QUEST_LOG_34_1                            = UNIT_END + 0xB0,
    PLAYER_QUEST_LOG_34_2                            = UNIT_END + 0xB1,
    PLAYER_QUEST_LOG_34_3                            = UNIT_END + 0xB2,
    PLAYER_QUEST_LOG_34_5                            = UNIT_END + 0xB4,
    PLAYER_QUEST_LOG_35_1                            = UNIT_END + 0xB5,
    PLAYER_QUEST_LOG_35_2                            = UNIT_END + 0xB6,
    PLAYER_QUEST_LOG_35_3                            = UNIT_END + 0xB7,
    PLAYER_QUEST_LOG_35_5                            = UNIT_END + 0xB9,
    PLAYER_QUEST_LOG_36_1                            = UNIT_END + 0xBA,
    PLAYER_QUEST_LOG_36_2                            = UNIT_END + 0xBB,
    PLAYER_QUEST_LOG_36_3                            = UNIT_END + 0xBC,
    PLAYER_QUEST_LOG_36_5                            = UNIT_END + 0xBE,
    PLAYER_QUEST_LOG_37_1                            = UNIT_END + 0xBF,
    PLAYER_QUEST_LOG_37_2                            = UNIT_END + 0xC0,
    PLAYER_QUEST_LOG_37_3                            = UNIT_END + 0xC1,
    PLAYER_QUEST_LOG_37_5                            = UNIT_END + 0xC3,
    PLAYER_QUEST_LOG_38_1                            = UNIT_END + 0xC4,
    PLAYER_QUEST_LOG_38_2                            = UNIT_END + 0xC5,
    PLAYER_QUEST_LOG_38_3                            = UNIT_END + 0xC6,
    PLAYER_QUEST_LOG_38_5                            = UNIT_END + 0xC8,
    PLAYER_QUEST_LOG_39_1                            = UNIT_END + 0xC9,
    PLAYER_QUEST_LOG_39_2                            = UNIT_END + 0xCA,
    PLAYER_QUEST_LOG_39_3                            = UNIT_END + 0xCB,
    PLAYER_QUEST_LOG_39_5                            = UNIT_END + 0xCD,
    PLAYER_QUEST_LOG_40_1                            = UNIT_END + 0xCE,
    PLAYER_QUEST_LOG_40_2                            = UNIT_END + 0xCF,
    PLAYER_QUEST_LOG_40_3                            = UNIT_END + 0xD0,
    PLAYER_QUEST_LOG_40_5                            = UNIT_END + 0xD2,
    PLAYER_QUEST_LOG_41_1                            = UNIT_END + 0xD3,
    PLAYER_QUEST_LOG_41_2                            = UNIT_END + 0xD4,
    PLAYER_QUEST_LOG_41_3                            = UNIT_END + 0xD5,
    PLAYER_QUEST_LOG_41_5                            = UNIT_END + 0xD7,
    PLAYER_QUEST_LOG_42_1                            = UNIT_END + 0xD8,
    PLAYER_QUEST_LOG_42_2                            = UNIT_END + 0xD9,
    PLAYER_QUEST_LOG_42_3                            = UNIT_END + 0xDA,
    PLAYER_QUEST_LOG_42_5                            = UNIT_END + 0xDC,
    PLAYER_QUEST_LOG_43_1                            = UNIT_END + 0xDD,
    PLAYER_QUEST_LOG_43_2                            = UNIT_END + 0xDE,
    PLAYER_QUEST_LOG_43_3                            = UNIT_END + 0xDF,
    PLAYER_QUEST_LOG_43_5                            = UNIT_END + 0xE1,
    PLAYER_QUEST_LOG_44_1                            = UNIT_END + 0xE2,
    PLAYER_QUEST_LOG_44_2                            = UNIT_END + 0xE3,
    PLAYER_QUEST_LOG_44_3                            = UNIT_END + 0xE4,
    PLAYER_QUEST_LOG_44_5                            = UNIT_END + 0xE6,
    PLAYER_QUEST_LOG_45_1                            = UNIT_END + 0xE7,
    PLAYER_QUEST_LOG_45_2                            = UNIT_END + 0xE8,
    PLAYER_QUEST_LOG_45_3                            = UNIT_END + 0xE9,
    PLAYER_QUEST_LOG_45_5                            = UNIT_END + 0xEB,
    PLAYER_QUEST_LOG_46_1                            = UNIT_END + 0xEC,
    PLAYER_QUEST_LOG_46_2                            = UNIT_END + 0xED,
    PLAYER_QUEST_LOG_46_3                            = UNIT_END + 0xEE,
    PLAYER_QUEST_LOG_46_5                            = UNIT_END + 0xF0,
    PLAYER_QUEST_LOG_47_1                            = UNIT_END + 0xF1,
    PLAYER_QUEST_LOG_47_2                            = UNIT_END + 0xF2,
    PLAYER_QUEST_LOG_47_3                            = UNIT_END + 0xF3,
    PLAYER_QUEST_LOG_47_5                            = UNIT_END + 0xF5,
    PLAYER_QUEST_LOG_48_1                            = UNIT_END + 0xF6,
    PLAYER_QUEST_LOG_48_2                            = UNIT_END + 0xF7,
    PLAYER_QUEST_LOG_48_3                            = UNIT_END + 0xF8,
    PLAYER_QUEST_LOG_48_5                            = UNIT_END + 0xFA,
    PLAYER_QUEST_LOG_49_1                            = UNIT_END + 0xFB,
    PLAYER_QUEST_LOG_49_2                            = UNIT_END + 0xFC,
    PLAYER_QUEST_LOG_49_3                            = UNIT_END + 0xFD,
    PLAYER_QUEST_LOG_49_5                            = UNIT_END + 0xFF,
    PLAYER_QUEST_LOG_50_1                            = UNIT_END + 0x100,
    PLAYER_QUEST_LOG_50_2                            = UNIT_END + 0x101,
    PLAYER_QUEST_LOG_50_3                            = UNIT_END + 0x102,
    PLAYER_QUEST_LOG_50_5                            = UNIT_END + 0x104,
    PLAYER_VISIBLE_ITEM_1_ENTRYID                    = UNIT_END + 0x105,
    PLAYER_VISIBLE_ITEM_1_ENCHANTMENT                = UNIT_END + 0x106,
    PLAYER_VISIBLE_ITEM_2_ENTRYID                    = UNIT_END + 0x107,
    PLAYER_VISIBLE_ITEM_2_ENCHANTMENT                = UNIT_END + 0x108,
    PLAYER_VISIBLE_ITEM_3_ENTRYID                    = UNIT_END + 0x109,
    PLAYER_VISIBLE_ITEM_3_ENCHANTMENT                = UNIT_END + 0x10A,
    PLAYER_VISIBLE_ITEM_4_ENTRYID                    = UNIT_END + 0x10B,
    PLAYER_VISIBLE_ITEM_4_ENCHANTMENT                = UNIT_END + 0x10C,
    PLAYER_VISIBLE_ITEM_5_ENTRYID                    = UNIT_END + 0x10D,
    PLAYER_VISIBLE_ITEM_5_ENCHANTMENT                = UNIT_END + 0x10E,
    PLAYER_VISIBLE_ITEM_6_ENTRYID                    = UNIT_END + 0x10F,
    PLAYER_VISIBLE_ITEM_6_ENCHANTMENT                = UNIT_END + 0x110,
    PLAYER_VISIBLE_ITEM_7_ENTRYID                    = UNIT_END + 0x111,
    PLAYER_VISIBLE_ITEM_7_ENCHANTMENT                = UNIT_END + 0x112,
    PLAYER_VISIBLE_ITEM_8_ENTRYID                    = UNIT_END + 0x113,
    PLAYER_VISIBLE_ITEM_8_ENCHANTMENT                = UNIT_END + 0x114,
    PLAYER_VISIBLE_ITEM_9_ENTRYID                    = UNIT_END + 0x115,
    PLAYER_VISIBLE_ITEM_9_ENCHANTMENT                = UNIT_END + 0x116,
    PLAYER_VISIBLE_ITEM_10_ENTRYID                   = UNIT_END + 0x117,
    PLAYER_VISIBLE_ITEM_10_ENCHANTMENT               = UNIT_END + 0x118,
    PLAYER_VISIBLE_ITEM_11_ENTRYID                   = UNIT_END + 0x119,
    PLAYER_VISIBLE_ITEM_11_ENCHANTMENT               = UNIT_END + 0x11A,
    PLAYER_VISIBLE_ITEM_12_ENTRYID                   = UNIT_END + 0x11B,
    PLAYER_VISIBLE_ITEM_12_ENCHANTMENT               = UNIT_END + 0x11C,
    PLAYER_VISIBLE_ITEM_13_ENTRYID                   = UNIT_END + 0x11D,
    PLAYER_VISIBLE_ITEM_13_ENCHANTMENT               = UNIT_END + 0x11E,
    PLAYER_VISIBLE_ITEM_14_ENTRYID                   = UNIT_END + 0x11F,
    PLAYER_VISIBLE_ITEM_14_ENCHANTMENT               = UNIT_END + 0x120,
    PLAYER_VISIBLE_ITEM_15_ENTRYID                   = UNIT_END + 0x121,
    PLAYER_VISIBLE_ITEM_15_ENCHANTMENT               = UNIT_END + 0x122,
    PLAYER_VISIBLE_ITEM_16_ENTRYID                   = UNIT_END + 0x123,
    PLAYER_VISIBLE_ITEM_16_ENCHANTMENT               = UNIT_END + 0x124,
    PLAYER_VISIBLE_ITEM_17_ENTRYID                   = UNIT_END + 0x125,
    PLAYER_VISIBLE_ITEM_17_ENCHANTMENT               = UNIT_END + 0x126,
    PLAYER_VISIBLE_ITEM_18_ENTRYID                   = UNIT_END + 0x127,
    PLAYER_VISIBLE_ITEM_18_ENCHANTMENT               = UNIT_END + 0x128,
    PLAYER_VISIBLE_ITEM_19_ENTRYID                   = UNIT_END + 0x129,
    PLAYER_VISIBLE_ITEM_19_ENCHANTMENT               = UNIT_END + 0x12A,
    PLAYER_CHOSEN_TITLE                              = UNIT_END + 0x12B,
    PLAYER_FAKE_INEBRIATION                          = UNIT_END + 0x12C,
    PLAYER_FIELD_PAD_0                               = UNIT_END + 0x12D,
    PLAYER_FIELD_INV_SLOT_HEAD                       = UNIT_END + 0x12E,
    PLAYER_FIELD_PACK_SLOT_1                         = UNIT_END + 0x15C,
    PLAYER_FIELD_BANK_SLOT_1                         = UNIT_END + 0x17C,
    PLAYER_FIELD_BANKBAG_SLOT_1                      = UNIT_END + 0x1B4,
    PLAYER_FIELD_VENDORBUYBACK_SLOT_1                = UNIT_END + 0x1C2,
    PLAYER_FARSIGHT                                  = UNIT_END + 0x1DA,
    PLAYER__FIELD_KNOWN_TITLES                       = UNIT_END + 0x1DC,
    PLAYER__FIELD_KNOWN_TITLES1                      = UNIT_END + 0x1DE,
    PLAYER__FIELD_KNOWN_TITLES2                      = UNIT_END + 0x1E0,
    PLAYER__FIELD_KNOWN_TITLES3                      = UNIT_END + 0x1E2,
    PLAYER_XP                                        = UNIT_END + 0x1E4,
    PLAYER_NEXT_LEVEL_XP                             = UNIT_END + 0x1E5,
    PLAYER_SKILL_LINEID_0                            = UNIT_END + 0x1E6,
    PLAYER_SKILL_STEP_0                              = UNIT_END + 0x226,
    PLAYER_SKILL_RANK_0                              = UNIT_END + 0x266,
    PLAYER_SKILL_MAX_RANK_0                          = UNIT_END + 0x2A6,
    PLAYER_SKILL_MODIFIER_0                          = UNIT_END + 0x2E6,
    PLAYER_SKILL_TALENT_0                            = UNIT_END + 0x326,
    PLAYER_CHARACTER_POINTS                          = UNIT_END + 0x366,
    PLAYER_TRACK_CREATURES                           = UNIT_END + 0x367,
    PLAYER_TRACK_RESOURCES                           = UNIT_END + 0x368,
    PLAYER_EXPERTISE                                 = UNIT_END + 0x369,
    PLAYER_OFFHAND_EXPERTISE                         = UNIT_END + 0x36A,
    PLAYER_BLOCK_PERCENTAGE                          = UNIT_END + 0x36B,
    PLAYER_DODGE_PERCENTAGE                          = UNIT_END + 0x36C,
    PLAYER_PARRY_PERCENTAGE                          = UNIT_END + 0x36D,
    PLAYER_CRIT_PERCENTAGE                           = UNIT_END + 0x36E,
    PLAYER_RANGED_CRIT_PERCENTAGE                    = UNIT_END + 0x36F,
    PLAYER_OFFHAND_CRIT_PERCENTAGE                   = UNIT_END + 0x370,
    PLAYER_SPELL_CRIT_PERCENTAGE1                    = UNIT_END + 0x371,
    PLAYER_SHIELD_BLOCK                              = UNIT_END + 0x378,
    PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE              = UNIT_END + 0x379,
    PLAYER_MASTERY                                   = UNIT_END + 0x37A,
    PLAYER_EXPLORED_ZONES_1                          = UNIT_END + 0x37B,
    PLAYER_REST_STATE_EXPERIENCE                     = UNIT_END + 0x417,
    PLAYER_FIELD_COINAGE                             = UNIT_END + 0x418,
    PLAYER_FIELD_MOD_DAMAGE_DONE_POS                 = UNIT_END + 0x41A,
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG                 = UNIT_END + 0x421,
    PLAYER_FIELD_MOD_DAMAGE_DONE_PCT                 = UNIT_END + 0x428,
    PLAYER_FIELD_MOD_HEALING_DONE_POS                = UNIT_END + 0x42F,
    PLAYER_FIELD_MOD_HEALING_PCT                     = UNIT_END + 0x430,
    PLAYER_FIELD_MOD_HEALING_DONE_PCT                = UNIT_END + 0x431,
    PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS              = UNIT_END + 0x432,
    PLAYER_FIELD_MOD_SPELL_POWER_PCT                 = UNIT_END + 0x435,
    PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PCT      = UNIT_END + 0x436,
    PLAYER_FIELD_MOD_TARGET_RESISTANCE               = UNIT_END + 0x437,
    PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE      = UNIT_END + 0x438,
    PLAYER_FIELD_BYTES                               = UNIT_END + 0x439,
    PLAYER_SELF_RES_SPELL                            = UNIT_END + 0x43A,
    PLAYER_FIELD_PVP_MEDALS                          = UNIT_END + 0x43B,
    PLAYER_FIELD_BUYBACK_PRICE_1                     = UNIT_END + 0x43C,
    PLAYER_FIELD_BUYBACK_TIMESTAMP_1                 = UNIT_END + 0x448,
    PLAYER_FIELD_KILLS                               = UNIT_END + 0x454,
    PLAYER_FIELD_LIFETIME_HONORBALE_KILLS            = UNIT_END + 0x455,
    PLAYER_FIELD_BYTES2                              = UNIT_END + 0x456,
    PLAYER_FIELD_WATCHED_FACTION_INDEX               = UNIT_END + 0x457,
    PLAYER_FIELD_COMBAT_RATING_1                     = UNIT_END + 0x458,
    PLAYER_FIELD_ARENA_TEAM_INFO_1_1                 = UNIT_END + 0x472,
    PLAYER_FIELD_BATTLEGROUND_RATING                 = UNIT_END + 0x487,
    PLAYER_FIELD_MAX_LEVEL                           = UNIT_END + 0x488,
    PLAYER_FIELD_DAILY_QUESTS_1                      = UNIT_END + 0x489,
    PLAYER_RUNE_REGEN_1                              = UNIT_END + 0x4A2,
    PLAYER_NO_REAGENT_COST_1                         = UNIT_END + 0x4A6,
    PLAYER_FIELD_GLYPH_SLOTS_1                       = UNIT_END + 0x4A9,
    PLAYER_FIELD_GLYPHS_1                            = UNIT_END + 0x4B2,
    PLAYER_GLYPHS_ENABLED                            = UNIT_END + 0x4BB,
    PLAYER_PET_SPELL_POWER                           = UNIT_END + 0x4BC,
    PLAYER_FIELD_RESEARCHING_1                       = UNIT_END + 0x4BD,
    PLAYER_FIELD_RESERACH_SITE_1                     = UNIT_END + 0x4C5,
    PLAYER_PROFESSION_SKILL_LINE_1                   = UNIT_END + 0x4CD,
    PLAYER_FIELD_UI_HIT_MODIFIER                     = UNIT_END + 0x4CF,
    PLAYER_FIELD_UI_SPELL_HIT_MODIFIER               = UNIT_END + 0x4D0,
    PLAYER_FIELD_HOME_REALM_TIME_OFFSET              = UNIT_END + 0x4D1,
    PLAYER_FIELD_MOD_HASTE                           = UNIT_END + 0x4D2,
    PLAYER_FIELD_MOD_RANGED_HASTE                    = UNIT_END + 0x4D3,
    PLAYER_FIELD_MOD_PET_HASTE                       = UNIT_END + 0x4D4,
    PLAYER_FIELD_MOD_HASTE_REGEN                     = UNIT_END + 0x4D5,
    PLAYER_END                                       = UNIT_END + 0x4D6
};

enum EContainerFields
{
    CONTAINER_FIELD_NUM_SLOTS                        = ITEM_END + 0x0,
    CONTAINER_ALIGN_PAD                              = ITEM_END + 0x1,
    CONTAINER_FIELD_SLOT_1                           = ITEM_END + 0x2,
    CONTAINER_END                                    = ITEM_END + 0x4A
};

enum EGameObjectFields
{
    OBJECT_FIELD_CREATED_BY                          = OBJECT_END + 0x0,
    GAMEOBJECT_DISPLAYID                             = OBJECT_END + 0x2,
    GAMEOBJECT_FLAGS                                 = OBJECT_END + 0x3,
    GAMEOBJECT_PARENTROTATION                        = OBJECT_END + 0x4,
    GAMEOBJECT_DYNAMIC                               = OBJECT_END + 0x8,
    GAMEOBJECT_FACTION                               = OBJECT_END + 0x9,
    GAMEOBJECT_LEVEL                                 = OBJECT_END + 0xA,
    GAMEOBJECT_BYTES_1                               = OBJECT_END + 0xB,
    GAMEOBJECT_END                                   = OBJECT_END + 0xC
};

enum EDynamicObjectFields
{
    DYNAMICOBJECT_CASTER                             = OBJECT_END + 0x0,
    DYNAMICOBJECT_BYTES                              = OBJECT_END + 0x2,
    DYNAMICOBJECT_SPELLID                            = OBJECT_END + 0x3,
    DYNAMICOBJECT_RADIUS                             = OBJECT_END + 0x4,
    DYNAMICOBJECT_CASTTIME                           = OBJECT_END + 0x5,
    DYNAMICOBJECT_END                                = OBJECT_END + 0x6
};

enum ECorpseFields
{
    CORPSE_FIELD_OWNER                               = OBJECT_END + 0x0,
    CORPSE_FIELD_PARTY                               = OBJECT_END + 0x2,
    CORPSE_FIELD_DISPLAY_ID                          = OBJECT_END + 0x4,
    CORPSE_FIELD_ITEM                                = OBJECT_END + 0x5,
    CORPSE_FIELD_BYTES_1                             = OBJECT_END + 0x18,
    CORPSE_FIELD_BYTES_2                             = OBJECT_END + 0x19,
    CORPSE_FIELD_FLAGS                               = OBJECT_END + 0x1A,
    CORPSE_FIELD_DYNAMIC_FLAGS                       = OBJECT_END + 0x1B,
    CORPSE_END                                       = OBJECT_END + 0x1C
};

enum EAreaTriggerFields
{
    AREATRIGGER_SPELLID                              = OBJECT_END + 0x0,
    AREATRIGGER_SPELLVISUALID                        = OBJECT_END + 0x1,
    AREATRIGGER_DURATION                             = OBJECT_END + 0x2,
    AREATRIGGER_FINAL_POS                            = OBJECT_END + 0x3,
    AREATRIGGER_END                                  = OBJECT_END + 0x6
};


#define PLAYER_END_NOT_SELF PLAYER_FIELD_INV_SLOT_HEAD
#endif
