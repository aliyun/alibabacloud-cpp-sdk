// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODYHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODYHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsForHostShareKeyResponseBodyHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForHostShareKeyResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostsAccountId, hostsAccountId_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForHostShareKeyResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostsAccountId, hostsAccountId_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
    };
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts() = default ;
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts(const ListHostAccountsForHostShareKeyResponseBodyHostAccounts &) = default ;
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts(ListHostAccountsForHostShareKeyResponseBodyHostAccounts &&) = default ;
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForHostShareKeyResponseBodyHostAccounts() = default ;
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts& operator=(const ListHostAccountsForHostShareKeyResponseBodyHostAccounts &) = default ;
    ListHostAccountsForHostShareKeyResponseBodyHostAccounts& operator=(ListHostAccountsForHostShareKeyResponseBodyHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAccountName_ != nullptr
        && this->hostId_ != nullptr && this->hostsAccountId_ != nullptr && this->protocolName_ != nullptr; };
    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListHostAccountsForHostShareKeyResponseBodyHostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostAccountsForHostShareKeyResponseBodyHostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostsAccountId Field Functions 
    bool hasHostsAccountId() const { return this->hostsAccountId_ != nullptr;};
    void deleteHostsAccountId() { this->hostsAccountId_ = nullptr;};
    inline string hostsAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostsAccountId_, "") };
    inline ListHostAccountsForHostShareKeyResponseBodyHostAccounts& setHostsAccountId(string hostsAccountId) { DARABONBA_PTR_SET_VALUE(hostsAccountId_, hostsAccountId) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListHostAccountsForHostShareKeyResponseBodyHostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


  protected:
    // The name of the host account.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the host account.
    std::shared_ptr<string> hostsAccountId_ = nullptr;
    // The O\\&M protocol.
    std::shared_ptr<string> protocolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
