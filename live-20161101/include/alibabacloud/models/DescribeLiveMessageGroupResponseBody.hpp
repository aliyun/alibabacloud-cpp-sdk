// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(Createtime, createtime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Deletatime, deletatime_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(Deletor, deletor_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(MsgAmount, msgAmount_);
      DARABONBA_PTR_TO_JSON(OnlineUserCounts, onlineUserCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuperLargeGroup, superLargeGroup_);
      DARABONBA_PTR_TO_JSON(TotalTimes, totalTimes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(Createtime, createtime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Deletatime, deletatime_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(Deletor, deletor_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(MsgAmount, msgAmount_);
      DARABONBA_PTR_FROM_JSON(OnlineUserCounts, onlineUserCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuperLargeGroup, superLargeGroup_);
      DARABONBA_PTR_FROM_JSON(TotalTimes, totalTimes_);
    };
    DescribeLiveMessageGroupResponseBody() = default ;
    DescribeLiveMessageGroupResponseBody(const DescribeLiveMessageGroupResponseBody &) = default ;
    DescribeLiveMessageGroupResponseBody(DescribeLiveMessageGroupResponseBody &&) = default ;
    DescribeLiveMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveMessageGroupResponseBody() = default ;
    DescribeLiveMessageGroupResponseBody& operator=(const DescribeLiveMessageGroupResponseBody &) = default ;
    DescribeLiveMessageGroupResponseBody& operator=(DescribeLiveMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminList_ == nullptr
        && this->createtime_ == nullptr && this->creatorId_ == nullptr && this->deletatime_ == nullptr && this->delete_ == nullptr && this->deletor_ == nullptr
        && this->groupId_ == nullptr && this->groupInfo_ == nullptr && this->groupName_ == nullptr && this->msgAmount_ == nullptr && this->onlineUserCounts_ == nullptr
        && this->requestId_ == nullptr && this->superLargeGroup_ == nullptr && this->totalTimes_ == nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<string> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<string>) };
    inline vector<string> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<string>) };
    inline DescribeLiveMessageGroupResponseBody& setAdminList(const vector<string> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline DescribeLiveMessageGroupResponseBody& setAdminList(vector<string> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // createtime Field Functions 
    bool hasCreatetime() const { return this->createtime_ != nullptr;};
    void deleteCreatetime() { this->createtime_ = nullptr;};
    inline int64_t getCreatetime() const { DARABONBA_PTR_GET_DEFAULT(createtime_, 0L) };
    inline DescribeLiveMessageGroupResponseBody& setCreatetime(int64_t createtime) { DARABONBA_PTR_SET_VALUE(createtime_, createtime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline DescribeLiveMessageGroupResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // deletatime Field Functions 
    bool hasDeletatime() const { return this->deletatime_ != nullptr;};
    void deleteDeletatime() { this->deletatime_ = nullptr;};
    inline int64_t getDeletatime() const { DARABONBA_PTR_GET_DEFAULT(deletatime_, 0L) };
    inline DescribeLiveMessageGroupResponseBody& setDeletatime(int64_t deletatime) { DARABONBA_PTR_SET_VALUE(deletatime_, deletatime) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline DescribeLiveMessageGroupResponseBody& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // deletor Field Functions 
    bool hasDeletor() const { return this->deletor_ != nullptr;};
    void deleteDeletor() { this->deletor_ = nullptr;};
    inline string getDeletor() const { DARABONBA_PTR_GET_DEFAULT(deletor_, "") };
    inline DescribeLiveMessageGroupResponseBody& setDeletor(string deletor) { DARABONBA_PTR_SET_VALUE(deletor_, deletor) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeLiveMessageGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline DescribeLiveMessageGroupResponseBody& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeLiveMessageGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // msgAmount Field Functions 
    bool hasMsgAmount() const { return this->msgAmount_ != nullptr;};
    void deleteMsgAmount() { this->msgAmount_ = nullptr;};
    inline const map<string, int64_t> & getMsgAmount() const { DARABONBA_PTR_GET_CONST(msgAmount_, map<string, int64_t>) };
    inline map<string, int64_t> getMsgAmount() { DARABONBA_PTR_GET(msgAmount_, map<string, int64_t>) };
    inline DescribeLiveMessageGroupResponseBody& setMsgAmount(const map<string, int64_t> & msgAmount) { DARABONBA_PTR_SET_VALUE(msgAmount_, msgAmount) };
    inline DescribeLiveMessageGroupResponseBody& setMsgAmount(map<string, int64_t> && msgAmount) { DARABONBA_PTR_SET_RVALUE(msgAmount_, msgAmount) };


    // onlineUserCounts Field Functions 
    bool hasOnlineUserCounts() const { return this->onlineUserCounts_ != nullptr;};
    void deleteOnlineUserCounts() { this->onlineUserCounts_ = nullptr;};
    inline int64_t getOnlineUserCounts() const { DARABONBA_PTR_GET_DEFAULT(onlineUserCounts_, 0L) };
    inline DescribeLiveMessageGroupResponseBody& setOnlineUserCounts(int64_t onlineUserCounts) { DARABONBA_PTR_SET_VALUE(onlineUserCounts_, onlineUserCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // superLargeGroup Field Functions 
    bool hasSuperLargeGroup() const { return this->superLargeGroup_ != nullptr;};
    void deleteSuperLargeGroup() { this->superLargeGroup_ = nullptr;};
    inline bool getSuperLargeGroup() const { DARABONBA_PTR_GET_DEFAULT(superLargeGroup_, false) };
    inline DescribeLiveMessageGroupResponseBody& setSuperLargeGroup(bool superLargeGroup) { DARABONBA_PTR_SET_VALUE(superLargeGroup_, superLargeGroup) };


    // totalTimes Field Functions 
    bool hasTotalTimes() const { return this->totalTimes_ != nullptr;};
    void deleteTotalTimes() { this->totalTimes_ = nullptr;};
    inline int64_t getTotalTimes() const { DARABONBA_PTR_GET_DEFAULT(totalTimes_, 0L) };
    inline DescribeLiveMessageGroupResponseBody& setTotalTimes(int64_t totalTimes) { DARABONBA_PTR_SET_VALUE(totalTimes_, totalTimes) };


  protected:
    // The list of the group administrators.
    shared_ptr<vector<string>> adminList_ {};
    // The time when the group was created. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> createtime_ {};
    // The ID of the group creator.
    shared_ptr<string> creatorId_ {};
    // The time when the group was deleted. This parameter is returned only if the group was deleted.
    shared_ptr<int64_t> deletatime_ {};
    // Indicates whether the group was deleted.
    shared_ptr<bool> delete_ {};
    // The ID of the user who deleted the group. This parameter is returned only if the group was deleted.
    shared_ptr<string> deletor_ {};
    // The group ID.
    shared_ptr<string> groupId_ {};
    // Additional information about the group.
    shared_ptr<string> groupInfo_ {};
    // The name of the group.
    shared_ptr<string> groupName_ {};
    // The categorized message statistics. This parameter is returned only if the group exists.
    shared_ptr<map<string, int64_t>> msgAmount_ {};
    // The number of online users in the group. This parameter is returned only if the group exists.
    shared_ptr<int64_t> onlineUserCounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the group is a super group. Valid values:
    // 
    // *   True
    // *   False
    shared_ptr<bool> superLargeGroup_ {};
    // The total number of sessions. This parameter is returned only if the group exists.
    shared_ptr<int64_t> totalTimes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
