// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODYOWNER_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODYOWNER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDefaultWorkspaceResponseBodyOwner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultWorkspaceResponseBodyOwner& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserKp, userKp_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultWorkspaceResponseBodyOwner& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetDefaultWorkspaceResponseBodyOwner() = default ;
    GetDefaultWorkspaceResponseBodyOwner(const GetDefaultWorkspaceResponseBodyOwner &) = default ;
    GetDefaultWorkspaceResponseBodyOwner(GetDefaultWorkspaceResponseBodyOwner &&) = default ;
    GetDefaultWorkspaceResponseBodyOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultWorkspaceResponseBodyOwner() = default ;
    GetDefaultWorkspaceResponseBodyOwner& operator=(const GetDefaultWorkspaceResponseBodyOwner &) = default ;
    GetDefaultWorkspaceResponseBodyOwner& operator=(GetDefaultWorkspaceResponseBodyOwner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr
        && return this->userKp_ == nullptr && return this->userName_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetDefaultWorkspaceResponseBodyOwner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userKp Field Functions 
    bool hasUserKp() const { return this->userKp_ != nullptr;};
    void deleteUserKp() { this->userKp_ = nullptr;};
    inline string userKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
    inline GetDefaultWorkspaceResponseBodyOwner& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetDefaultWorkspaceResponseBodyOwner& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userKp_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
