# $Id: Update.pro 3555 2013-03-04 23:55:58Z IMPOMEZIA $
# IMPOMEZIA Simple Chat
# Copyright (c) 2008-2013 IMPOMEZIA <schat@impomezia.com>
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program. If not, see <http://www.gnu.org/licenses/>.

SCHAT_CLIENT_LIB = 1
SCHAT_CORE_LIB = 1
QT = core gui network webkit
OTHER_FILES += Update.json

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets

HEADERS  = \
   UpdatePlugin.h \
   UpdatePlugin_p.h \
   UpdateSettings.h \
   UpdateWidget.h \

SOURCES  = \
   UpdatePlugin.cpp \
   UpdateSettings.cpp \
   UpdateWidget.cpp \

RESOURCES += Update.qrc

TRANSLATIONS += res/translations/update_en.ts
TRANSLATIONS += res/translations/update_ru.ts
TRANSLATIONS += res/translations/update_uk.ts
CODECFORTR  = UTF-8
CODECFORSRC = UTF-8

include(../plugins.pri)
