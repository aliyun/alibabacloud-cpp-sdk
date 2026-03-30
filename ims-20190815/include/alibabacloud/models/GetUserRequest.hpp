// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetUserRequest() = default ;
    GetUserRequest(const GetUserRequest &) = default ;
    GetUserRequest(GetUserRequest &&) = default ;
    GetUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserRequest() = default ;
    GetUserRequest& operator=(const GetUserRequest &) = default ;
    GetUserRequest& operator=(GetUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr
        && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline GetUserRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetUserRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The AccessKey ID of the RAM user.
    // 
    // > You must specify only one of the following parameters: `UserPrincipalName`, `UserId`, and `UserAccessKeyId`.
    shared_ptr<string> userAccessKeyId_ {};
    // The ID of the RAM user.
    // 
    // > You must specify only one of the following parameters: `UserPrincipalName`, `UserId`, and `UserAccessKeyId`.
    shared_ptr<string> userId_ {};
    // The logon name of the RAM user.
    // 
    // The name is in the format of `<username>@<AccountAlias>.onaliyun.com`. `<username>` indicates the name of the RAM user. `<AccountAlias>.onaliyun.com` indicates the default domain name.
    // 
    // The value of `UserPrincipalName` must be `1 to 128` characters in length and can contain letters, digits, periods (.), hyphens (-), and underscores (_). The value of `<username>` must be `1 to 64` characters in length.
    // 
    // > You must specify only one of the following parameters: `UserPrincipalName`, `UserId`, and `UserAccessKeyId`.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
