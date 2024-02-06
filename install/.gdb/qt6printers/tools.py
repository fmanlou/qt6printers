# Copyright (C) 2016 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

try:
    import __builtin__
except:
    import builtins

import gdb

class QtUtils():

    def qtVersion(self):
        # Only available with Qt 5.3+
        qtversion = int(str(gdb.parse_and_eval('((void**)&qtHookData)[2]')), 16)
        self.qtVersion = lambda: qtversion
        return qtversion
    
    def isQt6(self):
        return self.qtVersion() >= 0x60000


# Global instances.
qtUtils = QtUtils()
