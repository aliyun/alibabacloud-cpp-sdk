// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsResponseBodyHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_TO_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(RotationMode, rotationMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsResponseBodyHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(RotationMode, rotationMode_);
    };
    ListHostAccountsResponseBodyHostAccounts() = default ;
    ListHostAccountsResponseBodyHostAccounts(const ListHostAccountsResponseBodyHostAccounts &) = default ;
    ListHostAccountsResponseBodyHostAccounts(ListHostAccountsResponseBodyHostAccounts &&) = default ;
    ListHostAccountsResponseBodyHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsResponseBodyHostAccounts() = default ;
    ListHostAccountsResponseBodyHostAccounts& operator=(const ListHostAccountsResponseBodyHostAccounts &) = default ;
    ListHostAccountsResponseBodyHostAccounts& operator=(ListHostAccountsResponseBodyHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasPassword_ != nullptr
        && this->hostAccountId_ != nullptr && this->hostAccountName_ != nullptr && this->hostId_ != nullptr && this->hostShareKeyId_ != nullptr && this->hostShareKeyName_ != nullptr
        && this->privateKeyFingerprint_ != nullptr && this->privilegeType_ != nullptr && this->protocolName_ != nullptr && this->rotationMode_ != nullptr; };
    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline ListHostAccountsResponseBodyHostAccounts& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string hostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // hostShareKeyName Field Functions 
    bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
    void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
    inline string hostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


    // privateKeyFingerprint Field Functions 
    bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
    void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
    inline string privateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // rotationMode Field Functions 
    bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
    void deleteRotationMode() { this->rotationMode_ = nullptr;};
    inline string rotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
    inline ListHostAccountsResponseBodyHostAccounts& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


  protected:
    // Indicates whether a password is configured for the host account.
    // 
    // Valid values:
    // 
    // *   true: A password is configured for the host account.
    // *   false: No passwords are configured for the host account.
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // The ID of the host account.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The name of the host account.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the shared key.
    std::shared_ptr<string> hostShareKeyId_ = nullptr;
    // The name of the shared key.
    std::shared_ptr<string> hostShareKeyName_ = nullptr;
    // The fingerprint of the private key for the host account.
    std::shared_ptr<string> privateKeyFingerprint_ = nullptr;
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The protocol that is used by the host.
    // 
    // Valid values:
    // 
    // *   SSH
    // *   RDP
    std::shared_ptr<string> protocolName_ = nullptr;
    std::shared_ptr<string> rotationMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
