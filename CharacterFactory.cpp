#include "CharacterFactory.h"

const CharacterDate CharaterFactory::CharacterTable[] =
{
	// ƒvƒŒƒCƒ„[
	{"Zen",ZEN,100,15,10},
	{"slime",SLIME,20,6,5},
	{"goblin",GOBLIN, 35,12,8},
	{"wolf",WOLF,45,18,12}
};


std::shared_ptr<Character> CharaterFactory::CreateCharacter(int arg_id)
{
	if (CharacterTable[arg_id].id == arg_id) {
		return std::make_shared<Character>(CharacterTable[arg_id]);
	}

	// ‘¶İ‚µ‚È‚¢ID‚Ì
	return nullptr;
}
