// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateYikeUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateYikeUserResponseBody() = default ;
    CreateYikeUserResponseBody(const CreateYikeUserResponseBody &) = default ;
    CreateYikeUserResponseBody(CreateYikeUserResponseBody &&) = default ;
    CreateYikeUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeUserResponseBody() = default ;
    CreateYikeUserResponseBody& operator=(const CreateYikeUserResponseBody &) = default ;
    CreateYikeUserResponseBody& operator=(CreateYikeUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Nickname, nickname_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nickname_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr && this->workspaceId_ == nullptr; };
      // nickname Field Functions 
      bool hasNickname() const { return this->nickname_ != nullptr;};
      void deleteNickname() { this->nickname_ = nullptr;};
      inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
      inline UserInfo& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline UserInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline UserInfo& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> nickname_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateYikeUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateYikeUserResponseBody::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateYikeUserResponseBody::UserInfo) };
    inline CreateYikeUserResponseBody::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateYikeUserResponseBody::UserInfo) };
    inline CreateYikeUserResponseBody& setUserInfo(const CreateYikeUserResponseBody::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateYikeUserResponseBody& setUserInfo(CreateYikeUserResponseBody::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateYikeUserResponseBody::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
