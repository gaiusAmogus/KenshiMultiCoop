// Shim: KenshiCoop's code includes <kenshi/CombatClass.h>. In KenshiLib 0.4.0
// this header moved to <kenshi/combat/CombatClass.h>. Rather than edit every
// include site, forward to the new location. The vc10_compat dir is ahead of
// KenshiLib/Include on the INCLUDE path, so this shim is picked up first.
//
// combat/CombatClass.h does `#include "Enums.h"` etc. expecting its siblings on
// the include path; build_plugin.cmd adds KenshiLib/Include/kenshi to INCLUDE so
// those bare-name includes resolve.
#ifndef KENSHICOOP_SHIM_KENSHI_COMBATCLASS_H
#define KENSHICOOP_SHIM_KENSHI_COMBATCLASS_H

#include <kenshi/combat/CombatClass.h>

#endif
