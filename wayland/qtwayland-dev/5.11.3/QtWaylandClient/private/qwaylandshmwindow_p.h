// Copyright (C) 2016 The Qt Company Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QWAYLANDSHMWINDOW_H
#define QWAYLANDSHMWINDOW_H

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

#include <QtWaylandClient/private/qwaylandwindow_p.h>
#include <QtGui/QRegion>

QT_BEGIN_NAMESPACE

namespace QtWaylandClient {

class Q_WAYLAND_CLIENT_EXPORT QWaylandShmWindow : public QWaylandWindow
{
public:
    QWaylandShmWindow(QWindow *window);
    ~QWaylandShmWindow() override;

    WindowType windowType() const override;
    QSurfaceFormat format() const override { return QSurfaceFormat(); }
};

}

QT_END_NAMESPACE

#endif // QWAYLANDSHMWINDOW_H
