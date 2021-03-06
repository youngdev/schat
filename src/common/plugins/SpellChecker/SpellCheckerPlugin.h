/* $Id: SpellCheckerPlugin.h 3513 2013-02-21 17:06:24Z IMPOMEZIA $
 * IMPOMEZIA Simple Chat
 * Copyright © 2008-2013 IMPOMEZIA <schat@impomezia.com>
 * Copyright © 2012 Alexey Ivanov <alexey.ivanes@gmail.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SPELLCHECKERPLUGIN_H_
#define SPELLCHECKERPLUGIN_H_

#include "ChatApi.h"
#include "CoreApi.h"

class SpellCheckerPlugin : public QObject, CoreApi, ChatApi
{
  Q_OBJECT
  Q_INTERFACES(CoreApi ChatApi)

# if QT_VERSION >= 0x050000
  Q_PLUGIN_METADATA(IID "me.schat.client.SpellChecker" FILE "SpellChecker.json")
# endif

public:
  QVariantMap header() const
  {
    QVariantMap out        = CoreApi::header();
    out[CORE_API_ID]       = "SpellChecker";
    out[CORE_API_NAME]     = "Spell Checker";
    out[CORE_API_VERSION]  = "0.1.4";
    out[CORE_API_SITE]     = "http://wiki.schat.me/Plugin/SpellChecker";
    out[CORE_API_DESC]     = "Automatic spell checking";
    out[CORE_API_DESC_RU]  = "Автоматическая проверка орфографии";

    return out;
  }

  ChatPlugin *create();
};

#endif /* SPELLCHECKERPLUGIN_H_ */
