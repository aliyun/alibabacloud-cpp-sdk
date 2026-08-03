// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSMBACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSMBACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifySmbAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySmbAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
      DARABONBA_PTR_TO_JSON(EncryptData, encryptData_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(HomeDirPath, homeDirPath_);
      DARABONBA_PTR_TO_JSON(Keytab, keytab_);
      DARABONBA_PTR_TO_JSON(KeytabMd5, keytabMd5_);
      DARABONBA_PTR_TO_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
      DARABONBA_PTR_TO_JSON(SuperAdminSid, superAdminSid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySmbAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAnonymousAccess, enableAnonymousAccess_);
      DARABONBA_PTR_FROM_JSON(EncryptData, encryptData_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(HomeDirPath, homeDirPath_);
      DARABONBA_PTR_FROM_JSON(Keytab, keytab_);
      DARABONBA_PTR_FROM_JSON(KeytabMd5, keytabMd5_);
      DARABONBA_PTR_FROM_JSON(RejectUnencryptedAccess, rejectUnencryptedAccess_);
      DARABONBA_PTR_FROM_JSON(SuperAdminSid, superAdminSid_);
    };
    ModifySmbAclRequest() = default ;
    ModifySmbAclRequest(const ModifySmbAclRequest &) = default ;
    ModifySmbAclRequest(ModifySmbAclRequest &&) = default ;
    ModifySmbAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySmbAclRequest() = default ;
    ModifySmbAclRequest& operator=(const ModifySmbAclRequest &) = default ;
    ModifySmbAclRequest& operator=(ModifySmbAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAnonymousAccess_ == nullptr
        && this->encryptData_ == nullptr && this->fileSystemId_ == nullptr && this->homeDirPath_ == nullptr && this->keytab_ == nullptr && this->keytabMd5_ == nullptr
        && this->rejectUnencryptedAccess_ == nullptr && this->superAdminSid_ == nullptr; };
    // enableAnonymousAccess Field Functions 
    bool hasEnableAnonymousAccess() const { return this->enableAnonymousAccess_ != nullptr;};
    void deleteEnableAnonymousAccess() { this->enableAnonymousAccess_ = nullptr;};
    inline bool getEnableAnonymousAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAnonymousAccess_, false) };
    inline ModifySmbAclRequest& setEnableAnonymousAccess(bool enableAnonymousAccess) { DARABONBA_PTR_SET_VALUE(enableAnonymousAccess_, enableAnonymousAccess) };


    // encryptData Field Functions 
    bool hasEncryptData() const { return this->encryptData_ != nullptr;};
    void deleteEncryptData() { this->encryptData_ = nullptr;};
    inline bool getEncryptData() const { DARABONBA_PTR_GET_DEFAULT(encryptData_, false) };
    inline ModifySmbAclRequest& setEncryptData(bool encryptData) { DARABONBA_PTR_SET_VALUE(encryptData_, encryptData) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifySmbAclRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // homeDirPath Field Functions 
    bool hasHomeDirPath() const { return this->homeDirPath_ != nullptr;};
    void deleteHomeDirPath() { this->homeDirPath_ = nullptr;};
    inline string getHomeDirPath() const { DARABONBA_PTR_GET_DEFAULT(homeDirPath_, "") };
    inline ModifySmbAclRequest& setHomeDirPath(string homeDirPath) { DARABONBA_PTR_SET_VALUE(homeDirPath_, homeDirPath) };


    // keytab Field Functions 
    bool hasKeytab() const { return this->keytab_ != nullptr;};
    void deleteKeytab() { this->keytab_ = nullptr;};
    inline string getKeytab() const { DARABONBA_PTR_GET_DEFAULT(keytab_, "") };
    inline ModifySmbAclRequest& setKeytab(string keytab) { DARABONBA_PTR_SET_VALUE(keytab_, keytab) };


    // keytabMd5 Field Functions 
    bool hasKeytabMd5() const { return this->keytabMd5_ != nullptr;};
    void deleteKeytabMd5() { this->keytabMd5_ = nullptr;};
    inline string getKeytabMd5() const { DARABONBA_PTR_GET_DEFAULT(keytabMd5_, "") };
    inline ModifySmbAclRequest& setKeytabMd5(string keytabMd5) { DARABONBA_PTR_SET_VALUE(keytabMd5_, keytabMd5) };


    // rejectUnencryptedAccess Field Functions 
    bool hasRejectUnencryptedAccess() const { return this->rejectUnencryptedAccess_ != nullptr;};
    void deleteRejectUnencryptedAccess() { this->rejectUnencryptedAccess_ = nullptr;};
    inline bool getRejectUnencryptedAccess() const { DARABONBA_PTR_GET_DEFAULT(rejectUnencryptedAccess_, false) };
    inline ModifySmbAclRequest& setRejectUnencryptedAccess(bool rejectUnencryptedAccess) { DARABONBA_PTR_SET_VALUE(rejectUnencryptedAccess_, rejectUnencryptedAccess) };


    // superAdminSid Field Functions 
    bool hasSuperAdminSid() const { return this->superAdminSid_ != nullptr;};
    void deleteSuperAdminSid() { this->superAdminSid_ = nullptr;};
    inline string getSuperAdminSid() const { DARABONBA_PTR_GET_DEFAULT(superAdminSid_, "") };
    inline ModifySmbAclRequest& setSuperAdminSid(string superAdminSid) { DARABONBA_PTR_SET_VALUE(superAdminSid_, superAdminSid) };


  protected:
    // Specifies whether to allow anonymous access. 
    // 
    // - true: Anonymous access is allowed.
    // 
    // - false (default): Anonymous access is not allowed.
    shared_ptr<bool> enableAnonymousAccess_ {};
    // Specifies whether to enable encryption in transit.
    // 
    // - true: Encryption in transit is enabled.
    // 
    // - false (default): Encryption in transit is not enabled.
    shared_ptr<bool> encryptData_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The home folder path for each user. The file path format is as follows:
    // 
    // - Use a forward slash (/) or backslash (\\) as the separator.
    // 
    // - Each segment cannot contain `<>":|?*`.
    // 
    // - The length of each segment ranges from 0 to 255.
    // 
    // - The total length ranges from 0 to 32767.
    // 
    // For example, if the user folder is `/home`, the file system performs automatic creation of the `/home/A` folder when user A performs logon. If `/home/A` already exists, this step is skipped.
    // 
    // > User A must have the permission to create folders. Otherwise, the `/home/A` folder cannot be created.
    shared_ptr<string> homeDirPath_ {};
    // The Base64-encoded string of the keytab file content.
    shared_ptr<string> keytab_ {};
    // The MD5-encrypted string of the keytab file content.
    shared_ptr<string> keytabMd5_ {};
    // Specifies whether to reject unencrypted clients.
    // 
    // - true: Unencrypted clients are rejected.
    // 
    // - false (default): Unencrypted clients are not rejected.
    shared_ptr<bool> rejectUnencryptedAccess_ {};
    // The ID of the superuser. The ID must follow these rules:
    // 
    // - Must start with `S`, and no other letters are allowed after the initial S.
    // 
    // - Must contain at least three hyphens (-) as separators.
    // 
    // For example, `S-1-5-22` or `S-1-5-22-23`.
    shared_ptr<string> superAdminSid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
