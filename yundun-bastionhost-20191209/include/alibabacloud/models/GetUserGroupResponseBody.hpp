// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody(GetUserGroupResponseBody &&) = default ;
    GetUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody& operator=(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody& operator=(GetUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      };
      UserGroup() = default ;
      UserGroup(const UserGroup &) = default ;
      UserGroup(UserGroup &&) = default ;
      UserGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroup() = default ;
      UserGroup& operator=(const UserGroup &) = default ;
      UserGroup& operator=(UserGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline UserGroup& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline UserGroup& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userGroupName Field Functions 
      bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
      void deleteUserGroupName() { this->userGroupName_ = nullptr;};
      inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
      inline UserGroup& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    protected:
      // The description of the user group.
      shared_ptr<string> comment_ {};
      // The ID of the group.
      shared_ptr<string> userGroupId_ {};
      // The name of the user group.
      shared_ptr<string> userGroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline const GetUserGroupResponseBody::UserGroup & getUserGroup() const { DARABONBA_PTR_GET_CONST(userGroup_, GetUserGroupResponseBody::UserGroup) };
    inline GetUserGroupResponseBody::UserGroup getUserGroup() { DARABONBA_PTR_GET(userGroup_, GetUserGroupResponseBody::UserGroup) };
    inline GetUserGroupResponseBody& setUserGroup(const GetUserGroupResponseBody::UserGroup & userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };
    inline GetUserGroupResponseBody& setUserGroup(GetUserGroupResponseBody::UserGroup && userGroup) { DARABONBA_PTR_SET_RVALUE(userGroup_, userGroup) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the user group returned.
    shared_ptr<GetUserGroupResponseBody::UserGroup> userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
