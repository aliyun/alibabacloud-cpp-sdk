// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ListDisasterRecoveryPlansResponseBodyDataListInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryPlansResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryPlansResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(planDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(planStatus, planStatus_);
      DARABONBA_PTR_TO_JSON(planType, planType_);
      DARABONBA_PTR_TO_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryPlansResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(planDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(planStatus, planStatus_);
      DARABONBA_PTR_FROM_JSON(planType, planType_);
      DARABONBA_PTR_FROM_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListDisasterRecoveryPlansResponseBodyDataList() = default ;
    ListDisasterRecoveryPlansResponseBodyDataList(const ListDisasterRecoveryPlansResponseBodyDataList &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataList(ListDisasterRecoveryPlansResponseBodyDataList &&) = default ;
    ListDisasterRecoveryPlansResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryPlansResponseBodyDataList() = default ;
    ListDisasterRecoveryPlansResponseBodyDataList& operator=(const ListDisasterRecoveryPlansResponseBodyDataList &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataList& operator=(ListDisasterRecoveryPlansResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSyncCheckpoint_ != nullptr
        && this->createTime_ != nullptr && this->extInfo_ != nullptr && this->instances_ != nullptr && this->planDesc_ != nullptr && this->planId_ != nullptr
        && this->planName_ != nullptr && this->planStatus_ != nullptr && this->planType_ != nullptr && this->syncCheckpointEnabled_ != nullptr && this->updateTime_ != nullptr; };
    // autoSyncCheckpoint Field Functions 
    bool hasAutoSyncCheckpoint() const { return this->autoSyncCheckpoint_ != nullptr;};
    void deleteAutoSyncCheckpoint() { this->autoSyncCheckpoint_ = nullptr;};
    inline bool autoSyncCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(autoSyncCheckpoint_, false) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setAutoSyncCheckpoint(bool autoSyncCheckpoint) { DARABONBA_PTR_SET_VALUE(autoSyncCheckpoint_, autoSyncCheckpoint) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const map<string, string> & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, map<string, string>) };
    inline map<string, string> extInfo() { DARABONBA_PTR_GET(extInfo_, map<string, string>) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setExtInfo(const map<string, string> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setExtInfo(map<string, string> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances>) };
    inline vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances>) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setInstances(const vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setInstances(vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline int64_t planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planStatus Field Functions 
    bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
    void deletePlanStatus() { this->planStatus_ = nullptr;};
    inline string planStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // syncCheckpointEnabled Field Functions 
    bool hasSyncCheckpointEnabled() const { return this->syncCheckpointEnabled_ != nullptr;};
    void deleteSyncCheckpointEnabled() { this->syncCheckpointEnabled_ = nullptr;};
    inline bool syncCheckpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncCheckpointEnabled_, false) };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setSyncCheckpointEnabled(bool syncCheckpointEnabled) { DARABONBA_PTR_SET_VALUE(syncCheckpointEnabled_, syncCheckpointEnabled) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Indicates whether automatic consumer progress synchronization is enabled.
    std::shared_ptr<bool> autoSyncCheckpoint_ = nullptr;
    // The time when the query task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The extended information.
    std::shared_ptr<map<string, string>> extInfo_ = nullptr;
    // The instances involved in the Global Replicator task.
    std::shared_ptr<vector<Models::ListDisasterRecoveryPlansResponseBodyDataListInstances>> instances_ = nullptr;
    // The description of the Global Replicator task.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The ID of the Global Replicator task.
    std::shared_ptr<int64_t> planId_ = nullptr;
    // The name of the Global Replicator task.
    std::shared_ptr<string> planName_ = nullptr;
    // The status of the Global Replicator task. Valid values:
    // 
    // *   CREATED
    // *   RUNNING
    // *   DELETED
    std::shared_ptr<string> planStatus_ = nullptr;
    // The type of the Global Replicator task. Valid values:
    // 
    // *   ACTIVE_PASSIVE: one-way backup
    // *   ACTIVE_ACTIVE: two-way backup
    std::shared_ptr<string> planType_ = nullptr;
    // Indicates whether consumer progress synchronization is enabled.
    std::shared_ptr<bool> syncCheckpointEnabled_ = nullptr;
    // The time when the query task was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
