// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(AddTime, addTime_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addTime_ == nullptr
        && this->group_ == nullptr && this->groupId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline string getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
      inline User& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline User& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline User& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The time when the user was first added.
      shared_ptr<string> addTime_ {};
      // The user group. Valid values:
      // 
      // - users: ordinary permission group. This group is suitable for regular users who only need to commit and debug jobs.
      // 
      // - wheel: sudo permission group. This group is suitable for administrators who need cluster management. In addition to committing and debugging jobs, members of this group can execute sudo commands to install software, restart nodes, and perform other operations.
      shared_ptr<string> group_ {};
      // The user group ID.
      shared_ptr<string> groupId_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const GetUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody& setUser(const GetUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GetUserResponseBody& setUser(GetUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The user details.
    shared_ptr<GetUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
