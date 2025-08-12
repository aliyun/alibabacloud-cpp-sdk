// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODYGROUPLIST_HPP_
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
  class ListLiveMessageGroupsResponseBodyGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupsResponseBodyGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(Createtime, createtime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupsResponseBodyGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(Createtime, createtime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListLiveMessageGroupsResponseBodyGroupList() = default ;
    ListLiveMessageGroupsResponseBodyGroupList(const ListLiveMessageGroupsResponseBodyGroupList &) = default ;
    ListLiveMessageGroupsResponseBodyGroupList(ListLiveMessageGroupsResponseBodyGroupList &&) = default ;
    ListLiveMessageGroupsResponseBodyGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupsResponseBodyGroupList() = default ;
    ListLiveMessageGroupsResponseBodyGroupList& operator=(const ListLiveMessageGroupsResponseBodyGroupList &) = default ;
    ListLiveMessageGroupsResponseBodyGroupList& operator=(ListLiveMessageGroupsResponseBodyGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminList_ != nullptr
        && this->createtime_ != nullptr && this->creatorId_ != nullptr && this->delete_ != nullptr && this->groupId_ != nullptr && this->groupInfo_ != nullptr
        && this->groupName_ != nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<string> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<string>) };
    inline vector<string> adminList() { DARABONBA_PTR_GET(adminList_, vector<string>) };
    inline ListLiveMessageGroupsResponseBodyGroupList& setAdminList(const vector<string> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline ListLiveMessageGroupsResponseBodyGroupList& setAdminList(vector<string> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // createtime Field Functions 
    bool hasCreatetime() const { return this->createtime_ != nullptr;};
    void deleteCreatetime() { this->createtime_ = nullptr;};
    inline int64_t createtime() const { DARABONBA_PTR_GET_DEFAULT(createtime_, 0L) };
    inline ListLiveMessageGroupsResponseBodyGroupList& setCreatetime(int64_t createtime) { DARABONBA_PTR_SET_VALUE(createtime_, createtime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListLiveMessageGroupsResponseBodyGroupList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ListLiveMessageGroupsResponseBodyGroupList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupsResponseBodyGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string groupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline ListLiveMessageGroupsResponseBodyGroupList& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListLiveMessageGroupsResponseBodyGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The list of the IDs of the group administrators.
    std::shared_ptr<vector<string>> adminList_ = nullptr;
    // The time when the group was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createtime_ = nullptr;
    // The ID of the group creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // Indicates whether the group is deleted.
    std::shared_ptr<bool> delete_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The additional information about the group.
    std::shared_ptr<string> groupInfo_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
