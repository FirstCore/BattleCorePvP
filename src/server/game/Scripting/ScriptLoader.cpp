/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptLoader.h"
#include "AnticheatMgr.h"

//examples
void AddSC_example_creature();
void AddSC_example_escort();
void AddSC_example_gossip_codebox();
void AddSC_example_misc();
void AddSC_example_commandscript();

// Transmogrify
void AddSC_transmogrify_script();
//TeleNPC2
void AddSC_npc_teleport();
//Hunter Pet Vendor
void AddSC_npc_hunterpetvendor();
// Custom
void AddSC_DuelReset();
void AddSC_System_Censure();
void AddSC_npc_arena_setup();
void AddSC_DuelReset();
void AddSC_arena_spectator_script();
// NPC Vip
void AddSC_npc_title();
//NPC Transport Service
void AddSC_npc_mount();	
// Argent Tournament quest scripts
void AddSC_ArgentTournament();
//Revenge od Dalaran squidrrel
void AddSC_dalaran_squirrel();

// spells
void AddSC_deathknight_spell_scripts();
void AddSC_druid_spell_scripts();
void AddSC_generic_spell_scripts();
void AddSC_hunter_spell_scripts();
void AddSC_mage_spell_scripts();
void AddSC_paladin_spell_scripts();
void AddSC_priest_spell_scripts();
void AddSC_rogue_spell_scripts();
void AddSC_shaman_spell_scripts();
void AddSC_warlock_spell_scripts();
void AddSC_warrior_spell_scripts();
void AddSC_quest_spell_scripts();
void AddSC_item_spell_scripts();
void AddSC_example_spell_scripts();
void AddSC_holiday_spell_scripts();

void AddSC_SmartSCripts();

//Commands
void AddSC_anticheat_commandscript();
void AddSC_account_commandscript();
void AddSC_achievement_commandscript();
void AddSC_ah_bot_commandscript();
void AddSC_ban_commandscript();
void AddSC_bf_commandscript();
void AddSC_cast_commandscript();
void AddSC_character_commandscript();
void AddSC_cheat_commandscript();
void AddSC_debug_commandscript();
void AddSC_disable_commandscript();
void AddSC_event_commandscript();
void AddSC_gm_commandscript();
void AddSC_go_commandscript();
void AddSC_gobject_commandscript();
void AddSC_guild_commandscript();
void AddSC_honor_commandscript();
void AddSC_instance_commandscript();
void AddSC_learn_commandscript();
void AddSC_list_commandscript();
void AddSC_lookup_commandscript();
void AddSC_message_commandscript();
void AddSC_misc_commandscript();
void AddSC_modify_commandscript();
void AddSC_npc_commandscript();
void AddSC_quest_commandscript();
void AddSC_reload_commandscript();
void AddSC_reset_commandscript();
void AddSC_server_commandscript();
void AddSC_tele_commandscript();
void AddSC_ticket_commandscript();
void AddSC_titles_commandscript();
void AddSC_wp_commandscript();
void AddSC_mmaps_commandscript();

#ifdef SCRIPTS
//world
void AddSC_areatrigger_scripts();
void AddSC_emerald_dragons();
void AddSC_generic_creature();
void AddSC_go_scripts();
void AddSC_guards();
void AddSC_item_scripts();
void AddSC_npc_professions();
void AddSC_npc_innkeeper();
void AddSC_npcs_special();
void AddSC_npc_taxi();
void AddSC_achievement_scripts();

// player
void AddSC_chat_log();

#endif

void AddScripts()
{
    AddExampleScripts();
    AddSpellScripts();
    AddSC_SmartSCripts();
    AddCommandScripts();
    sAnticheatMgr->StartScripts();
#ifdef SCRIPTS
    AddWorldScripts();
    AddCustomScripts();
#endif
}

void AddExampleScripts()
{
    AddSC_example_creature();
    AddSC_example_escort();
    AddSC_example_gossip_codebox();
    AddSC_example_misc();
    AddSC_example_commandscript();
}

void AddSpellScripts()
{
    AddSC_deathknight_spell_scripts();
    AddSC_druid_spell_scripts();
    AddSC_generic_spell_scripts();
    AddSC_hunter_spell_scripts();
    AddSC_mage_spell_scripts();
    AddSC_paladin_spell_scripts();
    AddSC_priest_spell_scripts();
    AddSC_rogue_spell_scripts();
    AddSC_shaman_spell_scripts();
    AddSC_warlock_spell_scripts();
    AddSC_warrior_spell_scripts();
    AddSC_quest_spell_scripts();
    AddSC_item_spell_scripts();
    AddSC_example_spell_scripts();
    AddSC_holiday_spell_scripts();
}

void AddCommandScripts()
{
    AddSC_anticheat_commandscript();
    AddSC_account_commandscript();
    AddSC_achievement_commandscript();
    AddSC_ah_bot_commandscript();
    AddSC_ban_commandscript();
    AddSC_bf_commandscript();
    AddSC_cast_commandscript();
    AddSC_character_commandscript();
    AddSC_cheat_commandscript();
    AddSC_debug_commandscript();
    AddSC_disable_commandscript();
    AddSC_event_commandscript();
    AddSC_gm_commandscript();
    AddSC_go_commandscript();
    AddSC_gobject_commandscript();
    AddSC_guild_commandscript();
    AddSC_honor_commandscript();
    AddSC_instance_commandscript();
    AddSC_learn_commandscript();
    AddSC_lookup_commandscript();
    AddSC_list_commandscript();
    AddSC_message_commandscript();
    AddSC_misc_commandscript();
    AddSC_modify_commandscript();
    AddSC_npc_commandscript();
    AddSC_quest_commandscript();
    AddSC_reload_commandscript();
    AddSC_reset_commandscript();
    AddSC_server_commandscript();
    AddSC_tele_commandscript();
    AddSC_ticket_commandscript();
    AddSC_titles_commandscript();
    AddSC_wp_commandscript();
    AddSC_mmaps_commandscript();
}

void AddWorldScripts()
{
#ifdef SCRIPTS
    AddSC_areatrigger_scripts();
    AddSC_emerald_dragons();
    AddSC_generic_creature();
    AddSC_go_scripts();
    AddSC_guards();
    AddSC_item_scripts();
    AddSC_npc_professions();
    AddSC_npc_innkeeper();
    AddSC_npcs_special();
    AddSC_npc_taxi();
    AddSC_achievement_scripts();
    AddSC_chat_log();
#endif
}

#ifdef SCRIPTS
/* This is where custom scripts' loading functions should be declared. */

#endif

void AddCustomScripts()
{
    AddSC_transmogrify_script();
#ifdef SCRIPTS
    /* This is where custom scripts should be added. */
    //TeleNPC2
    AddSC_npc_teleport();
    //Hunter Pet Vendor
    AddSC_npc_hunterpetvendor();	
    // Custom
    AddSC_DuelReset();
    AddSC_System_Censure();
    AddSC_npc_arena_setup();
    AddSC_npc_title();
    AddSC_npc_mount();		
    AddSC_ArgentTournament();
    AddSC_dalaran_squirrel();
    AddSC_DuelReset();
    AddSC_arena_spectator_script();
#endif
}
