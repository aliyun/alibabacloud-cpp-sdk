// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, StartChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    StartChatRequest() = default ;
    StartChatRequest(const StartChatRequest &) = default ;
    StartChatRequest(StartChatRequest &&) = default ;
    StartChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartChatRequest() = default ;
    StartChatRequest& operator=(const StartChatRequest &) = default ;
    StartChatRequest& operator=(StartChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(Nickname, nickname_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->nickname_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline UserList& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // nickname Field Functions 
      bool hasNickname() const { return this->nickname_ != nullptr;};
      void deleteNickname() { this->nickname_ = nullptr;};
      inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
      inline UserList& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline UserList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> nickname_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->instanceId_ == nullptr && this->token_ == nullptr && this->userList_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline StartChatRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartChatRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline StartChatRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<StartChatRequest::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<StartChatRequest::UserList>) };
    inline vector<StartChatRequest::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<StartChatRequest::UserList>) };
    inline StartChatRequest& setUserList(const vector<StartChatRequest::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline StartChatRequest& setUserList(vector<StartChatRequest::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    shared_ptr<string> accessChannelId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> token_ {};
    // This parameter is required.
    shared_ptr<vector<StartChatRequest::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
