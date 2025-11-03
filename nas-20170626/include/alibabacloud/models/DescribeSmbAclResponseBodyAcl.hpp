// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODYACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODYACL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSmbAclResponseBodyAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmbAclResponseBodyAcl& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EncryptData, encryptData_);
      DARABONBA_PTR_TO_JSON(HomeDirPath, homeDirPath_);
      DARABONBA_PTR_TO_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
      DARABONBA_PTR_TO_JSON(SuperAdminSid, superAdminSid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmbAclResponseBodyAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EncryptData, encryptData_);
      DARABONBA_PTR_FROM_JSON(HomeDirPath, homeDirPath_);
      DARABONBA_PTR_FROM_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
      DARABONBA_PTR_FROM_JSON(SuperAdminSid, superAdminSid_);
    };
    DescribeSmbAclResponseBodyAcl() = default ;
    DescribeSmbAclResponseBodyAcl(const DescribeSmbAclResponseBodyAcl &) = default ;
    DescribeSmbAclResponseBodyAcl(DescribeSmbAclResponseBodyAcl &&) = default ;
    DescribeSmbAclResponseBodyAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmbAclResponseBodyAcl() = default ;
    DescribeSmbAclResponseBodyAcl& operator=(const DescribeSmbAclResponseBodyAcl &) = default ;
    DescribeSmbAclResponseBodyAcl& operator=(DescribeSmbAclResponseBodyAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAnonymousAccess_ == nullptr
        && return this->enabled_ == nullptr && return this->encryptData_ == nullptr && return this->homeDirPath_ == nullptr && return this->rejectUnencryptedAccess_ == nullptr && return this->superAdminSid_ == nullptr; };
    // enableAnonymousAccess Field Functions 
    bool hasEnableAnonymousAccess() const { return this->enableAnonymousAccess_ != nullptr;};
    void deleteEnableAnonymousAccess() { this->enableAnonymousAccess_ = nullptr;};
    inline bool enableAnonymousAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAnonymousAccess_, false) };
    inline DescribeSmbAclResponseBodyAcl& setEnableAnonymousAccess(bool enableAnonymousAccess) { DARABONBA_PTR_SET_VALUE(enableAnonymousAccess_, enableAnonymousAccess) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeSmbAclResponseBodyAcl& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // encryptData Field Functions 
    bool hasEncryptData() const { return this->encryptData_ != nullptr;};
    void deleteEncryptData() { this->encryptData_ = nullptr;};
    inline bool encryptData() const { DARABONBA_PTR_GET_DEFAULT(encryptData_, false) };
    inline DescribeSmbAclResponseBodyAcl& setEncryptData(bool encryptData) { DARABONBA_PTR_SET_VALUE(encryptData_, encryptData) };


    // homeDirPath Field Functions 
    bool hasHomeDirPath() const { return this->homeDirPath_ != nullptr;};
    void deleteHomeDirPath() { this->homeDirPath_ = nullptr;};
    inline string homeDirPath() const { DARABONBA_PTR_GET_DEFAULT(homeDirPath_, "") };
    inline DescribeSmbAclResponseBodyAcl& setHomeDirPath(string homeDirPath) { DARABONBA_PTR_SET_VALUE(homeDirPath_, homeDirPath) };


    // rejectUnencryptedAccess Field Functions 
    bool hasRejectUnencryptedAccess() const { return this->rejectUnencryptedAccess_ != nullptr;};
    void deleteRejectUnencryptedAccess() { this->rejectUnencryptedAccess_ = nullptr;};
    inline bool rejectUnencryptedAccess() const { DARABONBA_PTR_GET_DEFAULT(rejectUnencryptedAccess_, false) };
    inline DescribeSmbAclResponseBodyAcl& setRejectUnencryptedAccess(bool rejectUnencryptedAccess) { DARABONBA_PTR_SET_VALUE(rejectUnencryptedAccess_, rejectUnencryptedAccess) };


    // superAdminSid Field Functions 
    bool hasSuperAdminSid() const { return this->superAdminSid_ != nullptr;};
    void deleteSuperAdminSid() { this->superAdminSid_ = nullptr;};
    inline string superAdminSid() const { DARABONBA_PTR_GET_DEFAULT(superAdminSid_, "") };
    inline DescribeSmbAclResponseBodyAcl& setSuperAdminSid(string superAdminSid) { DARABONBA_PTR_SET_VALUE(superAdminSid_, superAdminSid) };


  protected:
    // Indicates whether the file system allows anonymous access. Valid values:
    // 
    // *   true: The file system allows anonymous access.
    // *   false: The file system does not allow anonymous access.
    std::shared_ptr<bool> enableAnonymousAccess_ = nullptr;
    // Indicates whether the ACL feature is enabled. Valid values:
    // 
    // *   true: The ACL feature is enabled.
    // *   false: The ACL feature is disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether encryption in transit is enabled. Valid values:
    // 
    // *   true: Encryption in transit is enabled.
    // *   false: Encryption in transit is disabled.
    std::shared_ptr<bool> encryptData_ = nullptr;
    // The home directory of each user.
    std::shared_ptr<string> homeDirPath_ = nullptr;
    // Indicates whether the file system denies access from non-encrypted clients. Valid values:
    // 
    // *   true: The file system denies access from non-encrypted clients.
    // *   false: The file system allows access from non-encrypted clients.
    std::shared_ptr<bool> rejectUnencryptedAccess_ = nullptr;
    // The ID of a super admin.
    std::shared_ptr<string> superAdminSid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
