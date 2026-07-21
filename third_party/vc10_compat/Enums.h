// Shim: KenshiLib 0.4.0 kenshi/combat/CombatClass.h includes "Enums.h" by
// bare name, but Enums.h lives one level up in kenshi/. Forward to it. This
// shim dir is on INCLUDE, so the quoted include resolves here after missing
// combat/. Guarded by the real header pragma once (same file, full path).
#include <kenshi/Enums.h>
