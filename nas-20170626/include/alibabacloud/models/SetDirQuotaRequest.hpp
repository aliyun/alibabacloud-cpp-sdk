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
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDirQuotaRequest& obj) { 
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
    virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->fileSystemId_ == nullptr && this->path_ == nullptr && this->quotaType_ == nullptr && this->sizeLimit_ == nullptr && this->userId_ == nullptr
        && this->userType_ == nullptr; };
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
    // The maximum number of files in the directory.
    // 
    // This includes files, directories, and special files.
    // 
    // 
    // When QuotaType is set to Enforcement, you must specify at least one of SizeLimit and FileCountLimit.
    shared_ptr<int64_t> fileCountLimit_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The absolute path of the directory in the file system.
    //  > - You can set a quota only for a directory that has been created in the NAS file system. The directory path for the quota is the absolute path in the NAS file system, not the local path on a compute node (for example, an ECS instance or container).
    //  > - Directories whose path names contain Chinese characters are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The quota type.
    // 
    // Valid values:
    // - Accounting: statistical quota. Only tracks usage.
    // - Enforcement: restrictive quota. When usage exceeds the limit, operations such as creating files or directories and appending data fail.
    // 
    // This parameter is required.
    shared_ptr<string> quotaType_ {};
    // The total capacity limit for files in the directory.
    // 
    // Unit: GiB.
    // 
    // 
    // When QuotaType is set to Enforcement, you must specify at least one of SizeLimit and FileCountLimit.
    shared_ptr<int64_t> sizeLimit_ {};
    // The UID or GID to restrict.
    // 
    // This parameter is required and valid only when UserType is set to Uid or Gid.
    // 
    // Examples:
    // 
    // - To restrict the user whose UID is 500, set UserType to Uid and UserId to 500.
    // - To restrict the user group whose GID is 100, set UserType to Gid and UserId to 100.
    shared_ptr<string> userId_ {};
    // The user type.
    // 
    // Valid values:
    // 
    // - Uid: user ID
    // - Gid: user group ID
    // - AllUsers: all users
    // 
    // This parameter is required.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
