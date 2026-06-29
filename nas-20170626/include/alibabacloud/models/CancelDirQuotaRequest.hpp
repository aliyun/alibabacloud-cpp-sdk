// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELDIRQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELDIRQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelDirQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelDirQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, CancelDirQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    CancelDirQuotaRequest() = default ;
    CancelDirQuotaRequest(const CancelDirQuotaRequest &) = default ;
    CancelDirQuotaRequest(CancelDirQuotaRequest &&) = default ;
    CancelDirQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelDirQuotaRequest() = default ;
    CancelDirQuotaRequest& operator=(const CancelDirQuotaRequest &) = default ;
    CancelDirQuotaRequest& operator=(CancelDirQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->path_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelDirQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CancelDirQuotaRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CancelDirQuotaRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline CancelDirQuotaRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The absolute path of the directory in the file system.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The UID or GID to cancel.
    // 
    // This parameter is required and valid only when UserType is set to Uid or Gid.
    // 
    // Examples:
    // 
    // - To cancel the quota for the user whose UID is 500, set UserType to Uid and UserId to 500.
    // - To cancel the quota for the user group whose GID is 100, set UserType to Gid and UserId to 100.
    shared_ptr<string> userId_ {};
    // The user type.
    // 
    // Valid values:
    // 
    // - Uid: user ID
    // - Gid: user group ID
    // - AllUsers: all users.
    // 
    // This parameter is required.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
