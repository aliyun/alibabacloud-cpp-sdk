// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_TO_JSON(NextpageToken, nextpageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_FROM_JSON(NextpageToken, nextpageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageGroupsResponseBody() = default ;
    ListLiveMessageGroupsResponseBody(const ListLiveMessageGroupsResponseBody &) = default ;
    ListLiveMessageGroupsResponseBody(ListLiveMessageGroupsResponseBody &&) = default ;
    ListLiveMessageGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupsResponseBody() = default ;
    ListLiveMessageGroupsResponseBody& operator=(const ListLiveMessageGroupsResponseBody &) = default ;
    ListLiveMessageGroupsResponseBody& operator=(ListLiveMessageGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupList& obj) { 
        DARABONBA_PTR_TO_JSON(AdminList, adminList_);
        DARABONBA_PTR_TO_JSON(Createtime, createtime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Delete, delete_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, GroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
        DARABONBA_PTR_FROM_JSON(Createtime, createtime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Delete, delete_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      };
      GroupList() = default ;
      GroupList(const GroupList &) = default ;
      GroupList(GroupList &&) = default ;
      GroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupList() = default ;
      GroupList& operator=(const GroupList &) = default ;
      GroupList& operator=(GroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adminList_ == nullptr
        && this->createtime_ == nullptr && this->creatorId_ == nullptr && this->delete_ == nullptr && this->groupId_ == nullptr && this->groupInfo_ == nullptr
        && this->groupName_ == nullptr; };
      // adminList Field Functions 
      bool hasAdminList() const { return this->adminList_ != nullptr;};
      void deleteAdminList() { this->adminList_ = nullptr;};
      inline const vector<string> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<string>) };
      inline vector<string> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<string>) };
      inline GroupList& setAdminList(const vector<string> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
      inline GroupList& setAdminList(vector<string> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


      // createtime Field Functions 
      bool hasCreatetime() const { return this->createtime_ != nullptr;};
      void deleteCreatetime() { this->createtime_ = nullptr;};
      inline int64_t getCreatetime() const { DARABONBA_PTR_GET_DEFAULT(createtime_, 0L) };
      inline GroupList& setCreatetime(int64_t createtime) { DARABONBA_PTR_SET_VALUE(createtime_, createtime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline GroupList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // delete Field Functions 
      bool hasDelete() const { return this->delete_ != nullptr;};
      void deleteDelete() { this->delete_ = nullptr;};
      inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
      inline GroupList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline GroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
      inline GroupList& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The list of the IDs of the group administrators.
      shared_ptr<vector<string>> adminList_ {};
      // The time when the group was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createtime_ {};
      // The ID of the group creator.
      shared_ptr<string> creatorId_ {};
      // Indicates whether the group is deleted.
      shared_ptr<bool> delete_ {};
      // The ID of the group.
      shared_ptr<string> groupId_ {};
      // The additional information about the group.
      shared_ptr<string> groupInfo_ {};
      // The name of the group.
      shared_ptr<string> groupName_ {};
    };

    virtual bool empty() const override { return this->groupList_ == nullptr
        && this->hasmore_ == nullptr && this->nextpageToken_ == nullptr && this->requestId_ == nullptr; };
    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<ListLiveMessageGroupsResponseBody::GroupList> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<ListLiveMessageGroupsResponseBody::GroupList>) };
    inline vector<ListLiveMessageGroupsResponseBody::GroupList> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<ListLiveMessageGroupsResponseBody::GroupList>) };
    inline ListLiveMessageGroupsResponseBody& setGroupList(const vector<ListLiveMessageGroupsResponseBody::GroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListLiveMessageGroupsResponseBody& setGroupList(vector<ListLiveMessageGroupsResponseBody::GroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // hasmore Field Functions 
    bool hasHasmore() const { return this->hasmore_ != nullptr;};
    void deleteHasmore() { this->hasmore_ = nullptr;};
    inline bool getHasmore() const { DARABONBA_PTR_GET_DEFAULT(hasmore_, false) };
    inline ListLiveMessageGroupsResponseBody& setHasmore(bool hasmore) { DARABONBA_PTR_SET_VALUE(hasmore_, hasmore) };


    // nextpageToken Field Functions 
    bool hasNextpageToken() const { return this->nextpageToken_ != nullptr;};
    void deleteNextpageToken() { this->nextpageToken_ = nullptr;};
    inline string getNextpageToken() const { DARABONBA_PTR_GET_DEFAULT(nextpageToken_, "") };
    inline ListLiveMessageGroupsResponseBody& setNextpageToken(string nextpageToken) { DARABONBA_PTR_SET_VALUE(nextpageToken_, nextpageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the groups.
    shared_ptr<vector<ListLiveMessageGroupsResponseBody::GroupList>> groupList_ {};
    // Indicates whether the current page is followed by another page.
    shared_ptr<bool> hasmore_ {};
    // The starting page number for the next query. This parameter is returned only if the value of Hasmore is true.
    shared_ptr<string> nextpageToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
