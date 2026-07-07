// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
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
    virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr && this->userPoolId_ == nullptr && this->userPoolName_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPoolId Field Functions 
    bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
    void deleteUserPoolId() { this->userPoolId_ = nullptr;};
    inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
    inline GetUserRequest& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline GetUserRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> userId_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> userPoolId_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
