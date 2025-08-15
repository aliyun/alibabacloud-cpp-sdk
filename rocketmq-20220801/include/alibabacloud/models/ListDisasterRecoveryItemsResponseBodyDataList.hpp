// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ListDisasterRecoveryItemsResponseBodyDataListTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryItemsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryItemsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(itemId, itemId_);
      DARABONBA_PTR_TO_JSON(itemStatus, itemStatus_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(topics, topics_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryItemsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(itemId, itemId_);
      DARABONBA_PTR_FROM_JSON(itemStatus, itemStatus_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(topics, topics_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListDisasterRecoveryItemsResponseBodyDataList() = default ;
    ListDisasterRecoveryItemsResponseBodyDataList(const ListDisasterRecoveryItemsResponseBodyDataList &) = default ;
    ListDisasterRecoveryItemsResponseBodyDataList(ListDisasterRecoveryItemsResponseBodyDataList &&) = default ;
    ListDisasterRecoveryItemsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryItemsResponseBodyDataList() = default ;
    ListDisasterRecoveryItemsResponseBodyDataList& operator=(const ListDisasterRecoveryItemsResponseBodyDataList &) = default ;
    ListDisasterRecoveryItemsResponseBodyDataList& operator=(ListDisasterRecoveryItemsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->extInfo_ != nullptr && this->itemId_ != nullptr && this->itemStatus_ != nullptr && this->planId_ != nullptr && this->topics_ != nullptr
        && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const map<string, string> & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, map<string, string>) };
    inline map<string, string> extInfo() { DARABONBA_PTR_GET(extInfo_, map<string, string>) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setExtInfo(const map<string, string> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setExtInfo(map<string, string> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemStatus Field Functions 
    bool hasItemStatus() const { return this->itemStatus_ != nullptr;};
    void deleteItemStatus() { this->itemStatus_ = nullptr;};
    inline string itemStatus() const { DARABONBA_PTR_GET_DEFAULT(itemStatus_, "") };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setItemStatus(string itemStatus) { DARABONBA_PTR_SET_VALUE(itemStatus_, itemStatus) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline int64_t planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics>) };
    inline vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics> topics() { DARABONBA_PTR_GET(topics_, vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics>) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setTopics(const vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setTopics(vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDisasterRecoveryItemsResponseBodyDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the query task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The extended information.
    std::shared_ptr<map<string, string>> extInfo_ = nullptr;
    // The ID of the Global Replicator task.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // The status of the topic mapping. Valid values:
    // 
    // *   CREATING
    // *   CHANGING
    // *   RUNNING
    // *   MANUAL_STOPPED
    // *   OVERDUE_STOPPED
    std::shared_ptr<string> itemStatus_ = nullptr;
    // The ID of the topic mapping.
    std::shared_ptr<int64_t> planId_ = nullptr;
    // The topics involved in the topic mapping.
    std::shared_ptr<vector<Models::ListDisasterRecoveryItemsResponseBodyDataListTopics>> topics_ = nullptr;
    // The time when the query task was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
