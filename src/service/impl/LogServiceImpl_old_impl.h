//
// Created by pikachu on 17-8-18.
//

#ifndef SHADOWSOCKS_CLIENT_LOGSERVICEIMPL_OLD_IMPL_H
#define SHADOWSOCKS_CLIENT_LOGSERVICEIMPL_OLD_IMPL_H

#include <service/LogService.h>
#include "common/QCore.h"
#include "common/QGui.h"
#include "common/QWidgets.h"
#include "common/dtk.h"

#include <widget/ShowLogWidget.h>

class LogServiceImpl_old_impl : public LogService {
public:

    LogServiceImpl_old_impl(QObject *parent);

    void showLog() override;

    void setVerboseLogging(bool b) override;

    bool isVerboseLogging() override;

    void newController(Controller *controller) override;

private:
    ShowLogWidget showLogWidget;
    QVector<int> inBytes;
    QList<int> outBytes;
    int inByte = 0;
    int outByte = 0;
    int maxLenth = 12;
};


#endif //SHADOWSOCKS_CLIENT_LOGSERVICEIMPL_OLD_IMPL_H
