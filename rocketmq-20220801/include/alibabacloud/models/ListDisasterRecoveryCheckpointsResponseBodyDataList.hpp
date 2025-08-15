// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress.hpp>
#include <alibabacloud/models/ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryCheckpointsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryCheckpointsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(checkpointId, checkpointId_);
      DARABONBA_PTR_TO_JSON(itemId, itemId_);
      DARABONBA_PTR_TO_JSON(lastSyncTime, lastSyncTime_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(sourceProgress, sourceProgress_);
      DARABONBA_PTR_TO_JSON(targetProgress, targetProgress_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryCheckpointsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(checkpointId, checkpointId_);
      DARABONBA_PTR_FROM_JSON(itemId, itemId_);
      DARABONBA_PTR_FROM_JSON(lastSyncTime, lastSyncTime_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(sourceProgress, sourceProgress_);
      DARABONBA_PTR_FROM_JSON(targetProgress, targetProgress_);
    };
    ListDisasterRecoveryCheckpointsResponseBodyDataList() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataList(const ListDisasterRecoveryCheckpointsResponseBodyDataList &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataList(ListDisasterRecoveryCheckpointsResponseBodyDataList &&) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataList() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataList& operator=(const ListDisasterRecoveryCheckpointsResponseBodyDataList &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataList& operator=(ListDisasterRecoveryCheckpointsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkpointId_ != nullptr
        && this->itemId_ != nullptr && this->lastSyncTime_ != nullptr && this->planId_ != nullptr && this->sourceProgress_ != nullptr && this->targetProgress_ != nullptr; };
    // checkpointId Field Functions 
    bool hasCheckpointId() const { return this->checkpointId_ != nullptr;};
    void deleteCheckpointId() { this->checkpointId_ = nullptr;};
    inline int64_t checkpointId() const { DARABONBA_PTR_GET_DEFAULT(checkpointId_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setCheckpointId(int64_t checkpointId) { DARABONBA_PTR_SET_VALUE(checkpointId_, checkpointId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // lastSyncTime Field Functions 
    bool hasLastSyncTime() const { return this->lastSyncTime_ != nullptr;};
    void deleteLastSyncTime() { this->lastSyncTime_ = nullptr;};
    inline int64_t lastSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTime_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setLastSyncTime(int64_t lastSyncTime) { DARABONBA_PTR_SET_VALUE(lastSyncTime_, lastSyncTime) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline int64_t planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // sourceProgress Field Functions 
    bool hasSourceProgress() const { return this->sourceProgress_ != nullptr;};
    void deleteSourceProgress() { this->sourceProgress_ = nullptr;};
    inline const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress & sourceProgress() const { DARABONBA_PTR_GET_CONST(sourceProgress_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress) };
    inline Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress sourceProgress() { DARABONBA_PTR_GET(sourceProgress_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setSourceProgress(const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress & sourceProgress) { DARABONBA_PTR_SET_VALUE(sourceProgress_, sourceProgress) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setSourceProgress(Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress && sourceProgress) { DARABONBA_PTR_SET_RVALUE(sourceProgress_, sourceProgress) };


    // targetProgress Field Functions 
    bool hasTargetProgress() const { return this->targetProgress_ != nullptr;};
    void deleteTargetProgress() { this->targetProgress_ = nullptr;};
    inline const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress & targetProgress() const { DARABONBA_PTR_GET_CONST(targetProgress_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress) };
    inline Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress targetProgress() { DARABONBA_PTR_GET(targetProgress_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setTargetProgress(const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress & targetProgress) { DARABONBA_PTR_SET_VALUE(targetProgress_, targetProgress) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataList& setTargetProgress(Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress && targetProgress) { DARABONBA_PTR_SET_RVALUE(targetProgress_, targetProgress) };


  protected:
    // Consumption Progress ID
    std::shared_ptr<int64_t> checkpointId_ = nullptr;
    // Backup Mapping ID
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // Last synchronization time
    std::shared_ptr<int64_t> lastSyncTime_ = nullptr;
    // Backup Plan ID
    std::shared_ptr<int64_t> planId_ = nullptr;
    // Source consumption progress
    std::shared_ptr<Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress> sourceProgress_ = nullptr;
    // Target consumption progress
    std::shared_ptr<Models::ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress> targetProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
