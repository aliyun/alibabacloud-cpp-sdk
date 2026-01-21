// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostAccountsResponseBody() = default ;
    ListHostAccountsResponseBody(const ListHostAccountsResponseBody &) = default ;
    ListHostAccountsResponseBody(ListHostAccountsResponseBody &&) = default ;
    ListHostAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsResponseBody() = default ;
    ListHostAccountsResponseBody& operator=(const ListHostAccountsResponseBody &) = default ;
    ListHostAccountsResponseBody& operator=(ListHostAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
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
      friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
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
      HostAccounts() = default ;
      HostAccounts(const HostAccounts &) = default ;
      HostAccounts(HostAccounts &&) = default ;
      HostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostAccounts() = default ;
      HostAccounts& operator=(const HostAccounts &) = default ;
      HostAccounts& operator=(HostAccounts &&) = default ;
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
      inline HostAccounts& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // hostAccountId Field Functions 
      bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
      void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
      inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
      inline HostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


      // hostAccountName Field Functions 
      bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
      void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
      inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
      inline HostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline HostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline HostAccounts& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // hostShareKeyName Field Functions 
      bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
      void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
      inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
      inline HostAccounts& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


      // privateKeyFingerprint Field Functions 
      bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
      void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
      inline string getPrivateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
      inline HostAccounts& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


      // privilegeType Field Functions 
      bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
      void deletePrivilegeType() { this->privilegeType_ = nullptr;};
      inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
      inline HostAccounts& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline HostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      // rotationMode Field Functions 
      bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
      void deleteRotationMode() { this->rotationMode_ = nullptr;};
      inline string getRotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
      inline HostAccounts& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


    protected:
      // Indicates whether a password is configured for the host account.
      // 
      // Valid values:
      // 
      // *   true: A password is configured for the host account.
      // *   false: No passwords are configured for the host account.
      shared_ptr<bool> hasPassword_ {};
      // The ID of the host account.
      shared_ptr<string> hostAccountId_ {};
      // The name of the host account.
      shared_ptr<string> hostAccountName_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The ID of the shared key.
      shared_ptr<string> hostShareKeyId_ {};
      // The name of the shared key.
      shared_ptr<string> hostShareKeyName_ {};
      // The fingerprint of the private key for the host account.
      shared_ptr<string> privateKeyFingerprint_ {};
      shared_ptr<string> privilegeType_ {};
      // The protocol that is used by the host.
      // 
      // Valid values:
      // 
      // *   SSH
      // *   RDP
      shared_ptr<string> protocolName_ {};
      shared_ptr<string> rotationMode_ {};
    };

    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListHostAccountsResponseBody::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListHostAccountsResponseBody::HostAccounts>) };
    inline vector<ListHostAccountsResponseBody::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListHostAccountsResponseBody::HostAccounts>) };
    inline ListHostAccountsResponseBody& setHostAccounts(const vector<ListHostAccountsResponseBody::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListHostAccountsResponseBody& setHostAccounts(vector<ListHostAccountsResponseBody::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the queried host accounts.
    shared_ptr<vector<ListHostAccountsResponseBody::HostAccounts>> hostAccounts_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of host accounts that are queried.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
