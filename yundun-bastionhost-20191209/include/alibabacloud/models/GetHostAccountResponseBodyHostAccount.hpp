// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODYHOSTACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODYHOSTACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostAccountResponseBodyHostAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostAccountResponseBodyHostAccount& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetHostAccountResponseBodyHostAccount& obj) { 
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
    GetHostAccountResponseBodyHostAccount() = default ;
    GetHostAccountResponseBodyHostAccount(const GetHostAccountResponseBodyHostAccount &) = default ;
    GetHostAccountResponseBodyHostAccount(GetHostAccountResponseBodyHostAccount &&) = default ;
    GetHostAccountResponseBodyHostAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostAccountResponseBodyHostAccount() = default ;
    GetHostAccountResponseBodyHostAccount& operator=(const GetHostAccountResponseBodyHostAccount &) = default ;
    GetHostAccountResponseBodyHostAccount& operator=(GetHostAccountResponseBodyHostAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasPassword_ == nullptr
        && return this->hostAccountId_ == nullptr && return this->hostAccountName_ == nullptr && return this->hostId_ == nullptr && return this->hostShareKeyId_ == nullptr && return this->hostShareKeyName_ == nullptr
        && return this->privateKeyFingerprint_ == nullptr && return this->privilegeType_ == nullptr && return this->protocolName_ == nullptr && return this->rotationMode_ == nullptr; };
    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline GetHostAccountResponseBodyHostAccount& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline GetHostAccountResponseBodyHostAccount& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline GetHostAccountResponseBodyHostAccount& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline GetHostAccountResponseBodyHostAccount& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string hostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline GetHostAccountResponseBodyHostAccount& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // hostShareKeyName Field Functions 
    bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
    void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
    inline string hostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
    inline GetHostAccountResponseBodyHostAccount& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


    // privateKeyFingerprint Field Functions 
    bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
    void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
    inline string privateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
    inline GetHostAccountResponseBodyHostAccount& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline GetHostAccountResponseBodyHostAccount& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline GetHostAccountResponseBodyHostAccount& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // rotationMode Field Functions 
    bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
    void deleteRotationMode() { this->rotationMode_ = nullptr;};
    inline string rotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
    inline GetHostAccountResponseBodyHostAccount& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


  protected:
    // Indicates whether a password is configured for the host account. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // The ID of the host account.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The name of the host account.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // The ID of the host to which the host account belongs.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the shared key.
    std::shared_ptr<string> hostShareKeyId_ = nullptr;
    // The name of the shared key.
    std::shared_ptr<string> hostShareKeyName_ = nullptr;
    // The fingerprint of the private key.
    std::shared_ptr<string> privateKeyFingerprint_ = nullptr;
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The protocol that is used by the host. Valid values:
    // 
    // *   **SSH**
    // *   **RDP**
    std::shared_ptr<string> protocolName_ = nullptr;
    std::shared_ptr<string> rotationMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
