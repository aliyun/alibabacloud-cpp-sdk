// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
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
  class ListGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGroupsResponseBody() = default ;
    ListGroupsResponseBody(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody(ListGroupsResponseBody &&) = default ;
    ListGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBody() = default ;
    ListGroupsResponseBody& operator=(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody& operator=(ListGroupsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, Group& obj) { 
          DARABONBA_PTR_FROM_JSON(Comments, comments_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
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
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->updateDate_ == nullptr; };
        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
        inline Group& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline Group& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


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


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline Group& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The description.
        shared_ptr<string> comments_ {};
        // The creation time.
        shared_ptr<string> createDate_ {};
        // The display name of the RAM user group.
        shared_ptr<string> displayName_ {};
        // The ID of the RAM user group.
        shared_ptr<string> groupId_ {};
        // The name of the RAM user group.
        shared_ptr<string> groupName_ {};
        // The update time.
        shared_ptr<string> updateDate_ {};
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
        && this->isTruncated_ == nullptr && this->marker_ == nullptr && this->requestId_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const ListGroupsResponseBody::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, ListGroupsResponseBody::Groups) };
    inline ListGroupsResponseBody::Groups getGroups() { DARABONBA_PTR_GET(groups_, ListGroupsResponseBody::Groups) };
    inline ListGroupsResponseBody& setGroups(const ListGroupsResponseBody::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsResponseBody& setGroups(ListGroupsResponseBody::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListGroupsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListGroupsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user groups.
    shared_ptr<ListGroupsResponseBody::Groups> groups_ {};
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
