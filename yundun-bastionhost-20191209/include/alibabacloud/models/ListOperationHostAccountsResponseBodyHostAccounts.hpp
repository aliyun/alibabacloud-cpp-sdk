// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListOperationHostAccountsResponseBodyHostAccountsSSHConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationHostAccountsResponseBodyHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHostAccountsResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(SSHConfig, SSHConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHostAccountsResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(SSHConfig, SSHConfig_);
    };
    ListOperationHostAccountsResponseBodyHostAccounts() = default ;
    ListOperationHostAccountsResponseBodyHostAccounts(const ListOperationHostAccountsResponseBodyHostAccounts &) = default ;
    ListOperationHostAccountsResponseBodyHostAccounts(ListOperationHostAccountsResponseBodyHostAccounts &&) = default ;
    ListOperationHostAccountsResponseBodyHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHostAccountsResponseBodyHostAccounts() = default ;
    ListOperationHostAccountsResponseBodyHostAccounts& operator=(const ListOperationHostAccountsResponseBodyHostAccounts &) = default ;
    ListOperationHostAccountsResponseBodyHostAccounts& operator=(ListOperationHostAccountsResponseBodyHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasPassword_ == nullptr
        && return this->hostAccountId_ == nullptr && return this->hostAccountName_ == nullptr && return this->hostId_ == nullptr && return this->hostShareKeyId_ == nullptr && return this->privateKeyFingerprint_ == nullptr
        && return this->protocolName_ == nullptr && return this->SSHConfig_ == nullptr; };
    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string hostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // privateKeyFingerprint Field Functions 
    bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
    void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
    inline string privateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // SSHConfig Field Functions 
    bool hasSSHConfig() const { return this->SSHConfig_ != nullptr;};
    void deleteSSHConfig() { this->SSHConfig_ = nullptr;};
    inline const Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig & SSHConfig() const { DARABONBA_PTR_GET_CONST(SSHConfig_, Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig) };
    inline Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig SSHConfig() { DARABONBA_PTR_GET(SSHConfig_, Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig) };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setSSHConfig(const Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig & SSHConfig) { DARABONBA_PTR_SET_VALUE(SSHConfig_, SSHConfig) };
    inline ListOperationHostAccountsResponseBodyHostAccounts& setSSHConfig(Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig && SSHConfig) { DARABONBA_PTR_SET_RVALUE(SSHConfig_, SSHConfig) };


  protected:
    // Indicates whether a password is configured for the host account.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // The host account ID.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The host account name.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the shared key that is associated with the host.
    std::shared_ptr<string> hostShareKeyId_ = nullptr;
    // The fingerprint of the private key for the host account.
    std::shared_ptr<string> privateKeyFingerprint_ = nullptr;
    // The protocol that is used by the host account.
    // 
    // *   **SSH**
    // *   **RDP**
    std::shared_ptr<string> protocolName_ = nullptr;
    // Indicates whether the Secure File Transfer Protocol (SFTP) channels or the SSH channels are enabled for the host account that uses the SSH protocol.
    std::shared_ptr<Models::ListOperationHostAccountsResponseBodyHostAccountsSSHConfig> SSHConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
