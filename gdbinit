python

import sys, os.path
sys.path.insert(0, os.path.expanduser('~/.gdb/qt6printers'))

from qt import register_qt_printers
register_qt_printers (None)

end