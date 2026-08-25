// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewStatus, newStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewStatus, newStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateUserStatusRequest() = default ;
    UpdateUserStatusRequest(const UpdateUserStatusRequest &) = default ;
    UpdateUserStatusRequest(UpdateUserStatusRequest &&) = default ;
    UpdateUserStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserStatusRequest() = default ;
    UpdateUserStatusRequest& operator=(const UpdateUserStatusRequest &) = default ;
    UpdateUserStatusRequest& operator=(UpdateUserStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->newStatus_ == nullptr && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateUserStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newStatus Field Functions 
    bool hasNewStatus() const { return this->newStatus_ != nullptr;};
    void deleteNewStatus() { this->newStatus_ = nullptr;};
    inline string getNewStatus() const { DARABONBA_PTR_GET_DEFAULT(newStatus_, "") };
    inline UpdateUserStatusRequest& setNewStatus(string newStatus) { DARABONBA_PTR_SET_VALUE(newStatus_, newStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserStatusRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The new status of the user. Valid values:
    // 
    // - Enabled: The logon of the user is enabled.
    // 
    // - Disabled: The logon of the user is disabled.
    shared_ptr<string> newStatus_ {};
    // The ID of the user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
