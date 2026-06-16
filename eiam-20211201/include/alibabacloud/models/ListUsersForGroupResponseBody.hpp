// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersForGroupResponseBody() = default ;
    ListUsersForGroupResponseBody(const ListUsersForGroupResponseBody &) = default ;
    ListUsersForGroupResponseBody(ListUsersForGroupResponseBody &&) = default ;
    ListUsersForGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupResponseBody() = default ;
    ListUsersForGroupResponseBody& operator=(const ListUsersForGroupResponseBody &) = default ;
    ListUsersForGroupResponseBody& operator=(ListUsersForGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupMemberRelationSourceId_ == nullptr
        && this->groupMemberRelationSourceType_ == nullptr && this->userId_ == nullptr; };
      // groupMemberRelationSourceId Field Functions 
      bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
      void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
      inline string getGroupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
      inline Users& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


      // groupMemberRelationSourceType Field Functions 
      bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
      void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
      inline string getGroupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
      inline Users& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The source ID of the group member relationship.
      // 
      // If the group is created in EIAM, the value of this parameter is the instance ID. For other types of groups, the value is the enterprise ID from the source. For example, if the group is imported from DingTalk, the value is the corpId of the DingTalk enterprise.
      shared_ptr<string> groupMemberRelationSourceId_ {};
      // The source type of the group member relationship. Valid values:
      // 
      // build_in: The group is created in EIAM.
      // 
      // ding_talk: The group is imported from DingTalk.
      // 
      // ad: The group is imported from Active Directory (AD).
      // 
      // ldap: The group is imported from LDAP.
      // 
      // we_com: The group is imported from WeCom.
      shared_ptr<string> groupMemberRelationSourceType_ {};
      // The account ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersForGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersForGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersForGroupResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersForGroupResponseBody::Users>) };
    inline vector<ListUsersForGroupResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersForGroupResponseBody::Users>) };
    inline ListUsersForGroupResponseBody& setUsers(const vector<ListUsersForGroupResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersForGroupResponseBody& setUsers(vector<ListUsersForGroupResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query.
    shared_ptr<int64_t> totalCount_ {};
    // The list of account objects.
    shared_ptr<vector<ListUsersForGroupResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
