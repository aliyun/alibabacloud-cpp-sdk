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
        && return this->path_ == nullptr && return this->userId_ == nullptr && return this->userType_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelDirQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CancelDirQuotaRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CancelDirQuotaRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline CancelDirQuotaRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The absolute path of a directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // The UID or GID of a user for whom you want to cancel the directory quota.
    // 
    // This parameter is required and valid only if the UserType parameter is set to Uid or Gid.
    // 
    // Examples:
    // 
    // *   If you want to cancel a quota for a user whose UID is 500, set the UserType parameter to Uid and set the UserId parameter to 500.
    // *   If you want to cancel a quota for a group whose GID is 100, set the UserType parameter to Gid and set the UserId parameter to 100.
    std::shared_ptr<string> userId_ = nullptr;
    // The type of the user.
    // 
    // Valid values:
    // 
    // *   Uid: user ID
    // *   Gid: user group ID
    // *   AllUsers: all users
    // 
    // This parameter is required.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
