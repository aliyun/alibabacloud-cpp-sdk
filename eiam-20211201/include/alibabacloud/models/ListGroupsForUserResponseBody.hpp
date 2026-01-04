// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
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
  class ListGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody(ListGroupsForUserResponseBody &&) = default ;
    ListGroupsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody& operator=(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody& operator=(ListGroupsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupMemberRelationSourceId_ == nullptr && this->groupMemberRelationSourceType_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupMemberRelationSourceId Field Functions 
      bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
      void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
      inline string getGroupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
      inline Groups& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


      // groupMemberRelationSourceType Field Functions 
      bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
      void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
      inline string getGroupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
      inline Groups& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


    protected:
      // The group ID.
      shared_ptr<string> groupId_ {};
      // Account membership source ID
      shared_ptr<string> groupMemberRelationSourceId_ {};
      // Account membership source type
      shared_ptr<string> groupMemberRelationSourceType_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ListGroupsForUserResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ListGroupsForUserResponseBody::Groups>) };
    inline vector<ListGroupsForUserResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<ListGroupsForUserResponseBody::Groups>) };
    inline ListGroupsForUserResponseBody& setGroups(const vector<ListGroupsForUserResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForUserResponseBody& setGroups(vector<ListGroupsForUserResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried account groups.
    shared_ptr<vector<ListGroupsForUserResponseBody::Groups>> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned. The maximum number of entries returned at a time depends on the value of PageSize.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
