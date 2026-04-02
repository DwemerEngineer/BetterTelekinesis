#include "BetterTelekinesis/Papyrus.h"
#include "BetterTelekinesis/Main.h"

namespace Papyrus
{
	void OnConfigClose(RE::TESQuest*)
	{
		BetterTelekinesis::Config::ReadSettings();
		BetterTelekinesis::BetterTelekinesisPlugin::ApplyTelekinesisSettings();
	}

	bool Register(RE::BSScript::IVirtualMachine* a_vm)
	{
		if (!a_vm) {
			return false;
		}

		a_vm->RegisterFunction("OnConfigClose", MCM, OnConfigClose);

		return true;
	}
}
