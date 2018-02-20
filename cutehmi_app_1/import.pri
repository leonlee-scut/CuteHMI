# This file sets qmake variables for linkage against cutehmi_app_1.

include(libdef.pri)

DEFINES += CUTEHMI_APP_DYNAMIC
INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
LIBS += -L$$PWD/../../bin -l$$cutehmiTarget($$CUTEHMI_APP_LIBNAME)
