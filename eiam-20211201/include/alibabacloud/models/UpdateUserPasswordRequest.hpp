// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNotificationChannels, userNotificationChannels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNotificationChannels, userNotificationChannels_);
    };
    UpdateUserPasswordRequest() = default ;
    UpdateUserPasswordRequest(const UpdateUserPasswordRequest &) = default ;
    UpdateUserPasswordRequest(UpdateUserPasswordRequest &&) = default ;
    UpdateUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserPasswordRequest() = default ;
    UpdateUserPasswordRequest& operator=(const UpdateUserPasswordRequest &) = default ;
    UpdateUserPasswordRequest& operator=(UpdateUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->password_ == nullptr && return this->passwordForcedUpdateStatus_ == nullptr && return this->userId_ == nullptr && return this->userNotificationChannels_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateUserPasswordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateUserPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordForcedUpdateStatus Field Functions 
    bool hasPasswordForcedUpdateStatus() const { return this->passwordForcedUpdateStatus_ != nullptr;};
    void deletePasswordForcedUpdateStatus() { this->passwordForcedUpdateStatus_ = nullptr;};
    inline string passwordForcedUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateStatus_, "") };
    inline UpdateUserPasswordRequest& setPasswordForcedUpdateStatus(string passwordForcedUpdateStatus) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateStatus_, passwordForcedUpdateStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserPasswordRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNotificationChannels Field Functions 
    bool hasUserNotificationChannels() const { return this->userNotificationChannels_ != nullptr;};
    void deleteUserNotificationChannels() { this->userNotificationChannels_ = nullptr;};
    inline const vector<string> & userNotificationChannels() const { DARABONBA_PTR_GET_CONST(userNotificationChannels_, vector<string>) };
    inline vector<string> userNotificationChannels() { DARABONBA_PTR_GET(userNotificationChannels_, vector<string>) };
    inline UpdateUserPasswordRequest& setUserNotificationChannels(const vector<string> & userNotificationChannels) { DARABONBA_PTR_SET_VALUE(userNotificationChannels_, userNotificationChannels) };
    inline UpdateUserPasswordRequest& setUserNotificationChannels(vector<string> && userNotificationChannels) { DARABONBA_PTR_SET_RVALUE(userNotificationChannels_, userNotificationChannels) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The new password of the account. For more information about the password format, see the "Password Policies" topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to enable forcible password change upon first logon. Default value: disabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordForcedUpdateStatus_ = nullptr;
    // The account ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The methods for receiving password notifications.
    std::shared_ptr<vector<string>> userNotificationChannels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
