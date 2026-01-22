// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserInRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetUserInRecycleBinRequest() = default ;
    GetUserInRecycleBinRequest(const GetUserInRecycleBinRequest &) = default ;
    GetUserInRecycleBinRequest(GetUserInRecycleBinRequest &&) = default ;
    GetUserInRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInRecycleBinRequest() = default ;
    GetUserInRecycleBinRequest& operator=(const GetUserInRecycleBinRequest &) = default ;
    GetUserInRecycleBinRequest& operator=(GetUserInRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr
        && this->userId_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline GetUserInRecycleBinRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserInRecycleBinRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The AccessKey ID of the RAM user.
    // 
    // >  You must specify only one of the following parameters: `UserId` and `UserAccessKeyId`.
    shared_ptr<string> userAccessKeyId_ {};
    // The ID of the RAM user.
    // 
    // >  You must specify only one of the following parameters: `UserId` and `UserAccessKeyId`.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
