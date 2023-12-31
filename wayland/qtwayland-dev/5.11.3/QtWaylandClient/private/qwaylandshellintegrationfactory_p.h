// Copyright (C) 2016 Jolla Ltd
//
// SPDX-License-Identifier: LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QWAYLANDSHELLINTEGRATIONFACTORY_H
#define QWAYLANDSHELLINTEGRATIONFACTORY_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtWaylandClient/private/qwaylanddisplay_p.h>

#include <QtWaylandClient/qtwaylandclientglobal.h>

#include <QtCore/QStringList>

QT_BEGIN_NAMESPACE

namespace QtWaylandClient {

class QWaylandShellIntegration;

class Q_WAYLAND_CLIENT_EXPORT QWaylandShellIntegrationFactory
{
public:
    static QStringList keys(const QString &pluginPath = QString());
    static QWaylandShellIntegration *create(const QString &name, QWaylandDisplay *display, const QStringList &args = QStringList(), const QString &pluginPath = QString());
};

}

QT_END_NAMESPACE

#endif // QWAYLANDSHELLINTEGRATIONFACTORY_H
