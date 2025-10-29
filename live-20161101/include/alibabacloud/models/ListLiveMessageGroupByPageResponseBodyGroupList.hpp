// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGERESPONSEBODYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGERESPONSEBODYGROUPLIST_HPP_
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
  class ListLiveMessageGroupByPageResponseBodyGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupByPageResponseBodyGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(Createtime, createtime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupByPageResponseBodyGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(Createtime, createtime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListLiveMessageGroupByPageResponseBodyGroupList() = default ;
    ListLiveMessageGroupByPageResponseBodyGroupList(const ListLiveMessageGroupByPageResponseBodyGroupList &) = default ;
    ListLiveMessageGroupByPageResponseBodyGroupList(ListLiveMessageGroupByPageResponseBodyGroupList &&) = default ;
    ListLiveMessageGroupByPageResponseBodyGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupByPageResponseBodyGroupList() = default ;
    ListLiveMessageGroupByPageResponseBodyGroupList& operator=(const ListLiveMessageGroupByPageResponseBodyGroupList &) = default ;
    ListLiveMessageGroupByPageResponseBodyGroupList& operator=(ListLiveMessageGroupByPageResponseBodyGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminList_ == nullptr
        && return this->createtime_ == nullptr && return this->creatorId_ == nullptr && return this->delete_ == nullptr && return this->groupId_ == nullptr && return this->groupInfo_ == nullptr
        && return this->groupName_ == nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<string> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<string>) };
    inline vector<string> adminList() { DARABONBA_PTR_GET(adminList_, vector<string>) };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setAdminList(const vector<string> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setAdminList(vector<string> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // createtime Field Functions 
    bool hasCreatetime() const { return this->createtime_ != nullptr;};
    void deleteCreatetime() { this->createtime_ = nullptr;};
    inline int64_t createtime() const { DARABONBA_PTR_GET_DEFAULT(createtime_, 0L) };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setCreatetime(int64_t createtime) { DARABONBA_PTR_SET_VALUE(createtime_, createtime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string groupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListLiveMessageGroupByPageResponseBodyGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The list of administrators.
    std::shared_ptr<vector<string>> adminList_ = nullptr;
    // The time when the group was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createtime_ = nullptr;
    // The ID of the user who created the group.
    std::shared_ptr<string> creatorId_ = nullptr;
    // Indicates whether the group is deleted.
    std::shared_ptr<bool> delete_ = nullptr;
    // The ID of the interactive messaging group.
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
