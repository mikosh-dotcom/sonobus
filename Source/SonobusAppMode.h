// SPDX-License-Identifier: GPLv3-or-later WITH Appstore-exception
// Copyright (C) 2021 Jesse Chappell

#pragma once

namespace SonobusAppMode
{
    /** True only in the SonoBus Talent standalone build (SONOBUS_TALENT_MODE). */
    constexpr bool isTalentMode()
    {
#if defined (SONOBUS_TALENT_MODE) && SONOBUS_TALENT_MODE
        return true;
#else
        return false;
#endif
    }
}
