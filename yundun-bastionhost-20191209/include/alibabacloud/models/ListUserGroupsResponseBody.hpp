// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUserGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody(ListUserGroupsResponseBody &&) = default ;
    ListUserGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody& operator=(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody& operator=(ListUserGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      };
      UserGroups() = default ;
      UserGroups(const UserGroups &) = default ;
      UserGroups(UserGroups &&) = default ;
      UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroups() = default ;
      UserGroups& operator=(const UserGroups &) = default ;
      UserGroups& operator=(UserGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->memberCount_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline UserGroups& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // memberCount Field Functions 
      bool hasMemberCount() const { return this->memberCount_ != nullptr;};
      void deleteMemberCount() { this->memberCount_ = nullptr;};
      inline int32_t getMemberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0) };
      inline UserGroups& setMemberCount(int32_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline UserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userGroupName Field Functions 
      bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
      void deleteUserGroupName() { this->userGroupName_ = nullptr;};
      inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
      inline UserGroups& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    protected:
      // The description of the user group.
      shared_ptr<string> comment_ {};
      // The number of users in the user group.
      shared_ptr<int32_t> memberCount_ {};
      // The ID of the user group.
      shared_ptr<string> userGroupId_ {};
      // The name of the user group.
      shared_ptr<string> userGroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->userGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListUserGroupsResponseBody::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListUserGroupsResponseBody::UserGroups>) };
    inline vector<ListUserGroupsResponseBody::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListUserGroupsResponseBody::UserGroups>) };
    inline ListUserGroupsResponseBody& setUserGroups(const vector<ListUserGroupsResponseBody::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListUserGroupsResponseBody& setUserGroups(vector<ListUserGroupsResponseBody::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of user groups returned.
    shared_ptr<int32_t> totalCount_ {};
    // The user groups returned.
    shared_ptr<vector<ListUserGroupsResponseBody::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
