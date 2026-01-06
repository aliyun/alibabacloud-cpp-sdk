// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSmbAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmbAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmbAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSmbAclResponseBody() = default ;
    DescribeSmbAclResponseBody(const DescribeSmbAclResponseBody &) = default ;
    DescribeSmbAclResponseBody(DescribeSmbAclResponseBody &&) = default ;
    DescribeSmbAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmbAclResponseBody() = default ;
    DescribeSmbAclResponseBody& operator=(const DescribeSmbAclResponseBody &) = default ;
    DescribeSmbAclResponseBody& operator=(DescribeSmbAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acl& obj) { 
        DARABONBA_PTR_TO_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(EncryptData, encryptData_);
        DARABONBA_PTR_TO_JSON(HomeDirPath, homeDirPath_);
        DARABONBA_PTR_TO_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
        DARABONBA_PTR_TO_JSON(SuperAdminSid, superAdminSid_);
      };
      friend void from_json(const Darabonba::Json& j, Acl& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(EncryptData, encryptData_);
        DARABONBA_PTR_FROM_JSON(HomeDirPath, homeDirPath_);
        DARABONBA_PTR_FROM_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
        DARABONBA_PTR_FROM_JSON(SuperAdminSid, superAdminSid_);
      };
      Acl() = default ;
      Acl(const Acl &) = default ;
      Acl(Acl &&) = default ;
      Acl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acl() = default ;
      Acl& operator=(const Acl &) = default ;
      Acl& operator=(Acl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableAnonymousAccess_ == nullptr
        && this->enabled_ == nullptr && this->encryptData_ == nullptr && this->homeDirPath_ == nullptr && this->rejectUnencryptedAccess_ == nullptr && this->superAdminSid_ == nullptr; };
      // enableAnonymousAccess Field Functions 
      bool hasEnableAnonymousAccess() const { return this->enableAnonymousAccess_ != nullptr;};
      void deleteEnableAnonymousAccess() { this->enableAnonymousAccess_ = nullptr;};
      inline bool getEnableAnonymousAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAnonymousAccess_, false) };
      inline Acl& setEnableAnonymousAccess(bool enableAnonymousAccess) { DARABONBA_PTR_SET_VALUE(enableAnonymousAccess_, enableAnonymousAccess) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Acl& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // encryptData Field Functions 
      bool hasEncryptData() const { return this->encryptData_ != nullptr;};
      void deleteEncryptData() { this->encryptData_ = nullptr;};
      inline bool getEncryptData() const { DARABONBA_PTR_GET_DEFAULT(encryptData_, false) };
      inline Acl& setEncryptData(bool encryptData) { DARABONBA_PTR_SET_VALUE(encryptData_, encryptData) };


      // homeDirPath Field Functions 
      bool hasHomeDirPath() const { return this->homeDirPath_ != nullptr;};
      void deleteHomeDirPath() { this->homeDirPath_ = nullptr;};
      inline string getHomeDirPath() const { DARABONBA_PTR_GET_DEFAULT(homeDirPath_, "") };
      inline Acl& setHomeDirPath(string homeDirPath) { DARABONBA_PTR_SET_VALUE(homeDirPath_, homeDirPath) };


      // rejectUnencryptedAccess Field Functions 
      bool hasRejectUnencryptedAccess() const { return this->rejectUnencryptedAccess_ != nullptr;};
      void deleteRejectUnencryptedAccess() { this->rejectUnencryptedAccess_ = nullptr;};
      inline bool getRejectUnencryptedAccess() const { DARABONBA_PTR_GET_DEFAULT(rejectUnencryptedAccess_, false) };
      inline Acl& setRejectUnencryptedAccess(bool rejectUnencryptedAccess) { DARABONBA_PTR_SET_VALUE(rejectUnencryptedAccess_, rejectUnencryptedAccess) };


      // superAdminSid Field Functions 
      bool hasSuperAdminSid() const { return this->superAdminSid_ != nullptr;};
      void deleteSuperAdminSid() { this->superAdminSid_ = nullptr;};
      inline string getSuperAdminSid() const { DARABONBA_PTR_GET_DEFAULT(superAdminSid_, "") };
      inline Acl& setSuperAdminSid(string superAdminSid) { DARABONBA_PTR_SET_VALUE(superAdminSid_, superAdminSid) };


    protected:
      // Indicates whether the file system allows anonymous access. Valid values:
      // 
      // *   true: The file system allows anonymous access.
      // *   false: The file system does not allow anonymous access.
      shared_ptr<bool> enableAnonymousAccess_ {};
      // Indicates whether the ACL feature is enabled. Valid values:
      // 
      // *   true: The ACL feature is enabled.
      // *   false: The ACL feature is disabled.
      shared_ptr<bool> enabled_ {};
      // Indicates whether encryption in transit is enabled. Valid values:
      // 
      // *   true: Encryption in transit is enabled.
      // *   false: Encryption in transit is disabled.
      shared_ptr<bool> encryptData_ {};
      // The home directory of each user.
      shared_ptr<string> homeDirPath_ {};
      // Indicates whether the file system denies access from non-encrypted clients. Valid values:
      // 
      // *   true: The file system denies access from non-encrypted clients.
      // *   false: The file system allows access from non-encrypted clients.
      shared_ptr<bool> rejectUnencryptedAccess_ {};
      // The ID of a super admin.
      shared_ptr<string> superAdminSid_ {};
    };

    virtual bool empty() const override { return this->acl_ == nullptr
        && this->requestId_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const DescribeSmbAclResponseBody::Acl & getAcl() const { DARABONBA_PTR_GET_CONST(acl_, DescribeSmbAclResponseBody::Acl) };
    inline DescribeSmbAclResponseBody::Acl getAcl() { DARABONBA_PTR_GET(acl_, DescribeSmbAclResponseBody::Acl) };
    inline DescribeSmbAclResponseBody& setAcl(const DescribeSmbAclResponseBody::Acl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline DescribeSmbAclResponseBody& setAcl(DescribeSmbAclResponseBody::Acl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmbAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ACL feature.
    shared_ptr<DescribeSmbAclResponseBody::Acl> acl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
