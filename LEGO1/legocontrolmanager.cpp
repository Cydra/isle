#include "legocontrolmanager.h"

// 0x100f31b8
static char* g_legoControlManagerClassName = "LegoControlManager";

// OFFSET: LEGO1 0x10028d60
LegoControlManager::~LegoControlManager()
{
  // TODO
}

// OFFSET: LEGO1 0x10029600
long LegoControlManager::Tickle()
{
  // TODO

  return 0;
}

// OFFSET: LEGO1 0x10028cb0
const char *LegoControlManager::GetClassName() const
{
  return g_legoControlManagerClassName;
}

// OFFSET: LEGO1 0x10028cc0
MxBool LegoControlManager::IsClass(const char *name) const
{
  // TODO

  return MxBool();
}