// Copyright (c) 2018 The VEIL developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VEIL_MNEMONICWALLETINIT_H
#define VEIL_MNEMONICWALLETINIT_H

#include <wallet/init.h>

class MnemonicWalletInit : public WalletInit
{
public:
    void AddWalletOptions() const { WalletInit::AddWalletOptions(); }
    bool ParameterInteraction() const { return WalletInit::ParameterInteraction(); }
    void RegisterRPC(CRPCTable &tableRPC) const { WalletInit::RegisterRPC(tableRPC); }
    bool Verify() const { return WalletInit::Verify(); }
    void Start(CScheduler& scheduler) const { WalletInit::Start(scheduler); }
    void Flush() const { WalletInit::Flush(); }
    void Stop() const { WalletInit::Stop(); }
    void Close() const { WalletInit::Close(); }

    bool Open() const;
};

#endif //VEIL_MNEMONICWALLETINIT_H
