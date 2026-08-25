// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserMFAAuthenticationSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetUserMFAAuthenticationSettingsRequest() = default ;
    GetUserMFAAuthenticationSettingsRequest(const GetUserMFAAuthenticationSettingsRequest &) = default ;
    GetUserMFAAuthenticationSettingsRequest(GetUserMFAAuthenticationSettingsRequest &&) = default ;
    GetUserMFAAuthenticationSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAAuthenticationSettingsRequest() = default ;
    GetUserMFAAuthenticationSettingsRequest& operator=(const GetUserMFAAuthenticationSettingsRequest &) = default ;
    GetUserMFAAuthenticationSettingsRequest& operator=(GetUserMFAAuthenticationSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetUserMFAAuthenticationSettingsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserMFAAuthenticationSettingsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
