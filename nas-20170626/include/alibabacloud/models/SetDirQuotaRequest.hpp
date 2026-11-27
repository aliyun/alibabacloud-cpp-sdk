// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDIRQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDIRQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class SetDirQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDirQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDirQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    SetDirQuotaRequest() = default ;
    SetDirQuotaRequest(const SetDirQuotaRequest &) = default ;
    SetDirQuotaRequest(SetDirQuotaRequest &&) = default ;
    SetDirQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDirQuotaRequest() = default ;
    SetDirQuotaRequest& operator=(const SetDirQuotaRequest &) = default ;
    SetDirQuotaRequest& operator=(SetDirQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->fileCountLimit_ == nullptr && this->fileSystemId_ == nullptr && this->path_ == nullptr && this->quotaType_ == nullptr && this->sizeLimit_ == nullptr
        && this->userId_ == nullptr && this->userType_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline SetDirQuotaRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline SetDirQuotaRequest& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SetDirQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline SetDirQuotaRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline SetDirQuotaRequest& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline SetDirQuotaRequest& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SetDirQuotaRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline SetDirQuotaRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Specifies whether to perform a precheck on the request.
    shared_ptr<bool> dryRun_ {};
    // The maximum number of files in the directory.
    // 
    // This includes files, directories, and special files.
    // 
    // 
    // When QuotaType is set to Enforcement, you must specify at least one of SizeLimit and FileCountLimit.
    shared_ptr<int64_t> fileCountLimit_ {};
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The absolute path of the directory in the file system.
    //  > - Quotas can only be set for directories that have been created in a NAS file system. The quota path is the absolute path of the directory in the NAS file system, not a local path on a compute node (such as an ECS instance or container).
    //  > - Directories whose path names contain Chinese characters are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The quota type.
    // 
    // Valid values:
    // - Accounting: accounting quota, which only tracks usage.
    // - Enforcement: enforcement quota. If usage exceeds the limit, operations such as creating files or directories and appending data will fail.
    // 
    // This parameter is required.
    shared_ptr<string> quotaType_ {};
    // The maximum total size of files in the directory.
    // 
    // Unit: GiB
    // 
    // 
    // When QuotaType is set to Enforcement, you must specify at least one of SizeLimit and FileCountLimit.
    shared_ptr<int64_t> sizeLimit_ {};
    // The Uid or Gid to be restricted.
    // 
    // Required and meaningful only when UserType is Uid or Gid.
    // 
    // Examples:
    // 
    // - To restrict the user with Uid=500, set UserType to Uid and UserId to 500.
    // - To restrict the user group with Gid=100, set UserType to Gid and UserId to 100.
    shared_ptr<string> userId_ {};
    // The user type.
    // 
    // Valid values:
    // 
    // - Uid: user ID
    // - Gid: group ID of the user
    // - AllUsers: all users
    // 
    // This parameter is required.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
