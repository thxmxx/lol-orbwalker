#pragma once
#define TARGET_GAMEVERSION ""  // 

#define oNetClient 0x34E8BE4 // 												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B // dword_[offset]
#define oChatClientPtr 0x1C5A570 //												8B 0D ? ? ? ? 6A 00 50 E8 ? ? ? ? 33 // dword_[offset]
#define oObjManager 0x1C3EE3C //												8B 0D ? ? ? ? 89 74 24 14 // dword_[offset]
#define oZoomClass 0x34D9BB8 //													A3 ? ? ? ? 83 FA 10 72 32 // dword_[offset]
#define oGameInfo 0x34DAB64 // 													A1 ? ? ? ? 83 78 08 02 0F 94 C0 // dword_[offset]
#define oHudInstance 0x1C3EE7C ///												8B 0D ? ? ? ? 6A 00 8B 49 34 E8 ? ? ? ? B0 // dword_[offset]
#define oRenderer 0x3508E90 // 													8B 15 ? ? ? ? 83 EC 08 F3 // dword_[offset]
#define oUnderMouseObject 0x34D1A00 // 											8B 0D ? ? ? ? 89 0D // dword_[offset]
#define oD3DRenderer 0x350BBC0 // 												A1 ? ? ? ? 89 54 24 18 // dword_[offset]
#define oWorldToScreen 0x950F20 // 												83 EC 10 56 E8 ? ? ? ? 8B 08 // fn
#define oLocalPlayer 0x34E1A34 //												A1 ?? ?? ?? ?? 85 C0 74 07 05 ?? ?? ?? ?? EB 02 33 C0 56 // dword_[offset]
#define oGameTime 0x34D9C1C // 													F3 0F 11 05 ? ? ? ? 8B 49 // dword_[offset]
#define oGetFirstObject 0x27B620 //												8B 41 14 8B 51 18 // fn
#define oGetNextObject 0x27D190 //												E8 ? ? ? ? 8B F0 85 F6 75 E4 // sub_[offset]
#define oGameVersion 0x570490 //												8B 44 24 04 BA ? ? ? ? 2B D0 // fn
#define oMenuGUI 0x34E1A00 // 													8B 0D ? ? ? ? 6A 00 E8 ? ? ? ? C7 // dword_[offset]

// FUNCTIONS
#define oCastSpell 0x502D00 // 													E8 ? ? ? ? 5E 5F B0 01 5B 59 // sub_[offset]
#define oDrawCircle 0x4F9090 //												 	E8 ? ? ? ? 83 C4 1C 80 7F // dword_[offset]
#define oGetBasicAttack 0x12FC50 // 										 	PWNED
#define oGetAttackCastDelay 0x29C560 // 										PWNED
#define oGetAttackDelay 0x29C660 // 											E8 ? ? ? ? 8B 44 24 1C 83 C4 0C 8B CE // sub_[offset]
#define oGetPing 0x329070 // 													E8 ? ? ? ? 8B 4F 2C 85 C9 0F // sub_[offset]
#define oPingInstance 0x34E8BE4 //												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B // dword_[offset]
#define oGetSpellState 0x4F45C0 // 												E8 ? ? ? ? 8B F8 8B CB 89 // sub_[offset]
#define oIsTargetable 0x1D5690 //												56 8B F1 E8 ? ? ? ? 84 C0 74 2E // fn
#define oIsAlive 0x1A51C0 // 													56 8B F1 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 19 // fn
#define oIsBaron 0x17CC80 //													E8 ? ? ? ? 84 C0 74 0A BB // sub_[offset]
#define oIsTurret 0x1B3C40 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 09 5F // sub_[offset]
#define oIsInhib 0x1B38D0 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 38 // sub_[offset]
#define oIsHero 0x1B3A50 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 2B 57 // sub_[offset]
#define oIsMinion 0x1B3A90 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 16 8B 0F // sub_[offset]
#define oIsDragon 0x17B2D0 //  													E8 ? ? ? ? 33 DB 84 C0 0F 95 C3 8D 1C 5D ? ? ? ? E9 // sub_[offset]
#define oIsMissile 0x1B3AB0 //											   		E8 ?? ?? ?? ?? 83 C4 04 84 C0 74 60 // sub_[offset]
#define oIsNexus 0x1B39D0 //													E8 ? ? ? ? 83 C4 04 84 C0 0F 95 C0 C3 CC 8A // sub_[offset]
#define oIsNotWall 0x0 // 														PWNED
#define oIsTroy 0x1B3950  // 													E8 ? ? ? ? 8B E8 83 C4 04 85 ED 0F 84 ? ? ? ? 6A 08 // go to sub_XXX then sub_[offset]
#define oIssueOrder 0x17CD30 // 												81 EC ? ? ? ? 56 57 8B F9 C7 // fn
#define oPrintChat 0x572390 //													E8 ? ? ? ? 33 C0 5F C2 // sub_[offset]
#define oSendChat 0x5E8650 //													E8 ? ? ? ? 5B 8B 8C 24 ? ? ? ? B8 // sub_[offset]

//CObject
#define oObjIndex 0x20
#define oObjTeam 0x4C
#define oObjName 0x6C
#define oObjNetworkID 0xCC //
#define oObjPos 0x1D8
#define oObjVisibility 0x48C
#define oObjHealth 0xDC4
#define oObjMana 0x298
#define oObjMaxMana 0x2A8
#define oObjArmor 0x12AC
#define oObjMagicRes 0x12B4
#define oObjBonusMagicRes 0x12B8
#define oObjBaseAtk 0x1284 //
#define oObjBonusAtk 0x1204 //
#define oObjMoveSpeed 0x12C4
#define oObjAtkRange 0x12CC
#define oObjBuffMgr 0x215C
#define oObjSpellBook 0x2708
#define oObjChampionName 0x312C
#define oObjLevel 0x3674

//
#define objectArray 0x14