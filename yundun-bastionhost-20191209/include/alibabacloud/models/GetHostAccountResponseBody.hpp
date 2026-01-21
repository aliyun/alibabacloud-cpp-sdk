// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccount, hostAccount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccount, hostAccount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostAccountResponseBody() = default ;
    GetHostAccountResponseBody(const GetHostAccountResponseBody &) = default ;
    GetHostAccountResponseBody(GetHostAccountResponseBody &&) = default ;
    GetHostAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostAccountResponseBody() = default ;
    GetHostAccountResponseBody& operator=(const GetHostAccountResponseBody &) = default ;
    GetHostAccountResponseBody& operator=(GetHostAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAccount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAccount& obj) { 
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
      friend void from_json(const Darabonba::Json& j, HostAccount& obj) { 
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
      HostAccount() = default ;
      HostAccount(const HostAccount &) = default ;
      HostAccount(HostAccount &&) = default ;
      HostAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostAccount() = default ;
      HostAccount& operator=(const HostAccount &) = default ;
      HostAccount& operator=(HostAccount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasPassword_ == nullptr
        && this->hostAccountId_ == nullptr && this->hostAccountName_ == nullptr && this->hostId_ == nullptr && this->hostShareKeyId_ == nullptr && this->hostShareKeyName_ == nullptr
        && this->privateKeyFingerprint_ == nullptr && this->privilegeType_ == nullptr && this->protocolName_ == nullptr && this->rotationMode_ == nullptr; };
      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline bool getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
      inline HostAccount& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // hostAccountId Field Functions 
      bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
      void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
      inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
      inline HostAccount& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


      // hostAccountName Field Functions 
      bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
      void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
      inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
      inline HostAccount& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline HostAccount& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline HostAccount& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // hostShareKeyName Field Functions 
      bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
      void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
      inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
      inline HostAccount& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


      // privateKeyFingerprint Field Functions 
      bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
      void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
      inline string getPrivateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
      inline HostAccount& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


      // privilegeType Field Functions 
      bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
      void deletePrivilegeType() { this->privilegeType_ = nullptr;};
      inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
      inline HostAccount& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline HostAccount& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      // rotationMode Field Functions 
      bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
      void deleteRotationMode() { this->rotationMode_ = nullptr;};
      inline string getRotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
      inline HostAccount& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


    protected:
      // Indicates whether a password is configured for the host account. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> hasPassword_ {};
      // The ID of the host account.
      shared_ptr<string> hostAccountId_ {};
      // The name of the host account.
      shared_ptr<string> hostAccountName_ {};
      // The ID of the host to which the host account belongs.
      shared_ptr<string> hostId_ {};
      // The ID of the shared key.
      shared_ptr<string> hostShareKeyId_ {};
      // The name of the shared key.
      shared_ptr<string> hostShareKeyName_ {};
      // The fingerprint of the private key.
      shared_ptr<string> privateKeyFingerprint_ {};
      shared_ptr<string> privilegeType_ {};
      // The protocol that is used by the host. Valid values:
      // 
      // *   **SSH**
      // *   **RDP**
      shared_ptr<string> protocolName_ {};
      shared_ptr<string> rotationMode_ {};
    };

    virtual bool empty() const override { return this->hostAccount_ == nullptr
        && this->requestId_ == nullptr; };
    // hostAccount Field Functions 
    bool hasHostAccount() const { return this->hostAccount_ != nullptr;};
    void deleteHostAccount() { this->hostAccount_ = nullptr;};
    inline const GetHostAccountResponseBody::HostAccount & getHostAccount() const { DARABONBA_PTR_GET_CONST(hostAccount_, GetHostAccountResponseBody::HostAccount) };
    inline GetHostAccountResponseBody::HostAccount getHostAccount() { DARABONBA_PTR_GET(hostAccount_, GetHostAccountResponseBody::HostAccount) };
    inline GetHostAccountResponseBody& setHostAccount(const GetHostAccountResponseBody::HostAccount & hostAccount) { DARABONBA_PTR_SET_VALUE(hostAccount_, hostAccount) };
    inline GetHostAccountResponseBody& setHostAccount(GetHostAccountResponseBody::HostAccount && hostAccount) { DARABONBA_PTR_SET_RVALUE(hostAccount_, hostAccount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the host account that was queried.
    shared_ptr<GetHostAccountResponseBody::HostAccount> hostAccount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
