/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2012 Franz Fellner <alpine.art.de@googlemail.com>
*                         David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef RESTOREMANAGER_H
#define RESTOREMANAGER_H

#include "webtab.h"
#include "qz_namespace.h"

class QT_QUPZILLA_EXPORT RestoreManager
{
public:
    struct WindowData {
        int currentTab;
        QByteArray windowState;
        QList<WebTab::SavedTab> tabsState;
    };

    RestoreManager(const QString &sessionFile);

    QList<RestoreManager::WindowData> restoreData() const;

private:
    void createFromFile(const QString &file);

    QList<RestoreManager::WindowData> m_data;
};

typedef QList<RestoreManager::WindowData> RestoreData;

#endif // RESTOREMANAGER_H
