// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERGROUPRESPONSEBODYHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERGROUPRESPONSEBODYHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsForUserGroupResponseBodyHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForUserGroupResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForUserGroupResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
    };
    ListHostAccountsForUserGroupResponseBodyHostAccounts() = default ;
    ListHostAccountsForUserGroupResponseBodyHostAccounts(const ListHostAccountsForUserGroupResponseBodyHostAccounts &) = default ;
    ListHostAccountsForUserGroupResponseBodyHostAccounts(ListHostAccountsForUserGroupResponseBodyHostAccounts &&) = default ;
    ListHostAccountsForUserGroupResponseBodyHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForUserGroupResponseBodyHostAccounts() = default ;
    ListHostAccountsForUserGroupResponseBodyHostAccounts& operator=(const ListHostAccountsForUserGroupResponseBodyHostAccounts &) = default ;
    ListHostAccountsForUserGroupResponseBodyHostAccounts& operator=(ListHostAccountsForUserGroupResponseBodyHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountId_ == nullptr
        && return this->hostAccountName_ == nullptr && return this->hostId_ == nullptr && return this->isAuthorized_ == nullptr && return this->protocolName_ == nullptr; };
    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ListHostAccountsForUserGroupResponseBodyHostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListHostAccountsForUserGroupResponseBodyHostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostAccountsForUserGroupResponseBodyHostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // isAuthorized Field Functions 
    bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
    void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
    inline bool isAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, false) };
    inline ListHostAccountsForUserGroupResponseBodyHostAccounts& setIsAuthorized(bool isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListHostAccountsForUserGroupResponseBodyHostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


  protected:
    // The ID of the host account.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The name of the host account.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // The ID of the host for which the host accounts were queried.
    std::shared_ptr<string> hostId_ = nullptr;
    // Indicates whether the user group is authorized to manage the host account. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> isAuthorized_ = nullptr;
    // The protocol that is used by the host. Valid values:
    // 
    // *   **SSH**
    // *   **RDP**
    std::shared_ptr<string> protocolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
