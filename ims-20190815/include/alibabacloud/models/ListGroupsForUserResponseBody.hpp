// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        DARABONBA_PTR_TO_JSON(Group, group_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
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
      class Group : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Group& obj) { 
          DARABONBA_PTR_TO_JSON(Comments, comments_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(JoinDate, joinDate_);
        };
        friend void from_json(const Darabonba::Json& j, Group& obj) { 
          DARABONBA_PTR_FROM_JSON(Comments, comments_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(JoinDate, joinDate_);
        };
        Group() = default ;
        Group(const Group &) = default ;
        Group(Group &&) = default ;
        Group(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Group() = default ;
        Group& operator=(const Group &) = default ;
        Group& operator=(Group &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comments_ == nullptr
        && this->displayName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->joinDate_ == nullptr; };
        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
        inline Group& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Group& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Group& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // joinDate Field Functions 
        bool hasJoinDate() const { return this->joinDate_ != nullptr;};
        void deleteJoinDate() { this->joinDate_ = nullptr;};
        inline string getJoinDate() const { DARABONBA_PTR_GET_DEFAULT(joinDate_, "") };
        inline Group& setJoinDate(string joinDate) { DARABONBA_PTR_SET_VALUE(joinDate_, joinDate) };


      protected:
        // The description.
        shared_ptr<string> comments_ {};
        // The display name of the RAM user group.
        shared_ptr<string> displayName_ {};
        // The ID of the RAM user group.
        shared_ptr<string> groupId_ {};
        // The name of the RAM user group.
        shared_ptr<string> groupName_ {};
        // The time when the RAM user was added.
        shared_ptr<string> joinDate_ {};
      };

      virtual bool empty() const override { return this->group_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline const vector<Groups::Group> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<Groups::Group>) };
      inline vector<Groups::Group> getGroup() { DARABONBA_PTR_GET(group_, vector<Groups::Group>) };
      inline Groups& setGroup(const vector<Groups::Group> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
      inline Groups& setGroup(vector<Groups::Group> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    protected:
      shared_ptr<vector<Groups::Group>> group_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const ListGroupsForUserResponseBody::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, ListGroupsForUserResponseBody::Groups) };
    inline ListGroupsForUserResponseBody::Groups getGroups() { DARABONBA_PTR_GET(groups_, ListGroupsForUserResponseBody::Groups) };
    inline ListGroupsForUserResponseBody& setGroups(const ListGroupsForUserResponseBody::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForUserResponseBody& setGroups(ListGroupsForUserResponseBody::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user groups.
    shared_ptr<ListGroupsForUserResponseBody::Groups> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
