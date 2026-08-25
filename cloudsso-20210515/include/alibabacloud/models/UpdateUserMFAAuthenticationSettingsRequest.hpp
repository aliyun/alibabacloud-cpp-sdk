// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserMFAAuthenticationSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserMFAAuthenticationSettings, userMFAAuthenticationSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserMFAAuthenticationSettings, userMFAAuthenticationSettings_);
    };
    UpdateUserMFAAuthenticationSettingsRequest() = default ;
    UpdateUserMFAAuthenticationSettingsRequest(const UpdateUserMFAAuthenticationSettingsRequest &) = default ;
    UpdateUserMFAAuthenticationSettingsRequest(UpdateUserMFAAuthenticationSettingsRequest &&) = default ;
    UpdateUserMFAAuthenticationSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserMFAAuthenticationSettingsRequest() = default ;
    UpdateUserMFAAuthenticationSettingsRequest& operator=(const UpdateUserMFAAuthenticationSettingsRequest &) = default ;
    UpdateUserMFAAuthenticationSettingsRequest& operator=(UpdateUserMFAAuthenticationSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->userId_ == nullptr && this->userMFAAuthenticationSettings_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateUserMFAAuthenticationSettingsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserMFAAuthenticationSettingsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userMFAAuthenticationSettings Field Functions 
    bool hasUserMFAAuthenticationSettings() const { return this->userMFAAuthenticationSettings_ != nullptr;};
    void deleteUserMFAAuthenticationSettings() { this->userMFAAuthenticationSettings_ = nullptr;};
    inline string getUserMFAAuthenticationSettings() const { DARABONBA_PTR_GET_DEFAULT(userMFAAuthenticationSettings_, "") };
    inline UpdateUserMFAAuthenticationSettingsRequest& setUserMFAAuthenticationSettings(string userMFAAuthenticationSettings) { DARABONBA_PTR_SET_VALUE(userMFAAuthenticationSettings_, userMFAAuthenticationSettings) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the user.
    shared_ptr<string> userId_ {};
    // Specifies whether to enable MFA for the user. Valid values:
    // 
    // - Enabled: enables MFA for the user.
    // 
    // - Disabled: disables MFA for the user.
    shared_ptr<string> userMFAAuthenticationSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
