// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints.hpp>
#include <alibabacloud/models/DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_TO_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_TO_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FinishedUpdateCapacity, finishedUpdateCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SkipMatching, skipMatching_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalNeedUpdateCapacity, totalNeedUpdateCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_FROM_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_FROM_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FinishedUpdateCapacity, finishedUpdateCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SkipMatching, skipMatching_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalNeedUpdateCapacity, totalNeedUpdateCapacity_);
    };
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks() = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks(const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks &) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks(DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks &&) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks() = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& operator=(const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks &) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& operator=(DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkpointPauseTime_ != nullptr
        && this->checkpoints_ != nullptr && this->desiredConfiguration_ != nullptr && this->detail_ != nullptr && this->endTime_ != nullptr && this->finishedUpdateCapacity_ != nullptr
        && this->instanceRefreshTaskId_ != nullptr && this->maxHealthyPercentage_ != nullptr && this->minHealthyPercentage_ != nullptr && this->regionId_ != nullptr && this->scalingGroupId_ != nullptr
        && this->skipMatching_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->totalNeedUpdateCapacity_ != nullptr; };
    // checkpointPauseTime Field Functions 
    bool hasCheckpointPauseTime() const { return this->checkpointPauseTime_ != nullptr;};
    void deleteCheckpointPauseTime() { this->checkpointPauseTime_ = nullptr;};
    inline int32_t checkpointPauseTime() const { DARABONBA_PTR_GET_DEFAULT(checkpointPauseTime_, 0) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setCheckpointPauseTime(int32_t checkpointPauseTime) { DARABONBA_PTR_SET_VALUE(checkpointPauseTime_, checkpointPauseTime) };


    // checkpoints Field Functions 
    bool hasCheckpoints() const { return this->checkpoints_ != nullptr;};
    void deleteCheckpoints() { this->checkpoints_ = nullptr;};
    inline const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints> & checkpoints() const { DARABONBA_PTR_GET_CONST(checkpoints_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints>) };
    inline vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints> checkpoints() { DARABONBA_PTR_GET(checkpoints_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints>) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setCheckpoints(const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints> & checkpoints) { DARABONBA_PTR_SET_VALUE(checkpoints_, checkpoints) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setCheckpoints(vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints> && checkpoints) { DARABONBA_PTR_SET_RVALUE(checkpoints_, checkpoints) };


    // desiredConfiguration Field Functions 
    bool hasDesiredConfiguration() const { return this->desiredConfiguration_ != nullptr;};
    void deleteDesiredConfiguration() { this->desiredConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration & desiredConfiguration() const { DARABONBA_PTR_GET_CONST(desiredConfiguration_, Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration) };
    inline Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration desiredConfiguration() { DARABONBA_PTR_GET(desiredConfiguration_, Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setDesiredConfiguration(const Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration & desiredConfiguration) { DARABONBA_PTR_SET_VALUE(desiredConfiguration_, desiredConfiguration) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setDesiredConfiguration(Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration && desiredConfiguration) { DARABONBA_PTR_SET_RVALUE(desiredConfiguration_, desiredConfiguration) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishedUpdateCapacity Field Functions 
    bool hasFinishedUpdateCapacity() const { return this->finishedUpdateCapacity_ != nullptr;};
    void deleteFinishedUpdateCapacity() { this->finishedUpdateCapacity_ = nullptr;};
    inline int32_t finishedUpdateCapacity() const { DARABONBA_PTR_GET_DEFAULT(finishedUpdateCapacity_, 0) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setFinishedUpdateCapacity(int32_t finishedUpdateCapacity) { DARABONBA_PTR_SET_VALUE(finishedUpdateCapacity_, finishedUpdateCapacity) };


    // instanceRefreshTaskId Field Functions 
    bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
    void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
    inline string instanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


    // maxHealthyPercentage Field Functions 
    bool hasMaxHealthyPercentage() const { return this->maxHealthyPercentage_ != nullptr;};
    void deleteMaxHealthyPercentage() { this->maxHealthyPercentage_ = nullptr;};
    inline int32_t maxHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxHealthyPercentage_, 0) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setMaxHealthyPercentage(int32_t maxHealthyPercentage) { DARABONBA_PTR_SET_VALUE(maxHealthyPercentage_, maxHealthyPercentage) };


    // minHealthyPercentage Field Functions 
    bool hasMinHealthyPercentage() const { return this->minHealthyPercentage_ != nullptr;};
    void deleteMinHealthyPercentage() { this->minHealthyPercentage_ = nullptr;};
    inline int32_t minHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(minHealthyPercentage_, 0) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setMinHealthyPercentage(int32_t minHealthyPercentage) { DARABONBA_PTR_SET_VALUE(minHealthyPercentage_, minHealthyPercentage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // skipMatching Field Functions 
    bool hasSkipMatching() const { return this->skipMatching_ != nullptr;};
    void deleteSkipMatching() { this->skipMatching_ = nullptr;};
    inline bool skipMatching() const { DARABONBA_PTR_GET_DEFAULT(skipMatching_, false) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setSkipMatching(bool skipMatching) { DARABONBA_PTR_SET_VALUE(skipMatching_, skipMatching) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNeedUpdateCapacity Field Functions 
    bool hasTotalNeedUpdateCapacity() const { return this->totalNeedUpdateCapacity_ != nullptr;};
    void deleteTotalNeedUpdateCapacity() { this->totalNeedUpdateCapacity_ = nullptr;};
    inline int32_t totalNeedUpdateCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalNeedUpdateCapacity_, 0) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks& setTotalNeedUpdateCapacity(int32_t totalNeedUpdateCapacity) { DARABONBA_PTR_SET_VALUE(totalNeedUpdateCapacity_, totalNeedUpdateCapacity) };


  protected:
    std::shared_ptr<int32_t> checkpointPauseTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksCheckpoints>> checkpoints_ = nullptr;
    // The desired configurations of the instance refresh task.
    std::shared_ptr<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration> desiredConfiguration_ = nullptr;
    // The reason why the instance refresh task failed to be executed.
    std::shared_ptr<string> detail_ = nullptr;
    // The end time of the instance refresh task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The refreshed number of instances in the scaling group.
    std::shared_ptr<int32_t> finishedUpdateCapacity_ = nullptr;
    // The ID of the instance refresh task.
    std::shared_ptr<string> instanceRefreshTaskId_ = nullptr;
    // The ratio by which the number of instances in the scaling group can exceed the upper limit for the number of instances in the scaling group during instance refresh.
    std::shared_ptr<int32_t> maxHealthyPercentage_ = nullptr;
    // The ratio of the number of instances that provide services to the total number of instances in the scaling group during instance refresh.
    std::shared_ptr<int32_t> minHealthyPercentage_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // Indicates whether instances that match the desired scaling configuration are skipped.
    // 
    // >  The system determines the match based on the ID of the desired scaling configuration rather than individual configuration items.
    // 
    // Valid values:
    // 
    // *   true: Instances that match the desired scaling configuration are skipped. When you initiate an instance refresh task, the system checks the configurations of all instances. The refresh operation is skipped for instances created based on the desired scaling configuration.
    // *   false: Instances that match the desired scaling configuration are not skipped. When an instance refresh task is initiated, all instances in the scaling group at the time of initiation are refreshed.
    std::shared_ptr<bool> skipMatching_ = nullptr;
    // The start time of the instance refresh task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the instance refresh task. Valid values:
    // 
    // *   Pending: The instance refresh task is created and is waiting to be scheduled.
    // *   InProgress: The instance refresh task is being executed.
    // *   Paused: The instance refresh task is suspended.
    // *   Failed: The instance refresh task failed to be executed.
    // *   Successful: The instance refresh task is successful.
    // *   Cancelling: The instance refresh task is being canceled.
    // *   Cancelled: The instance refresh task is canceled.
    // *   RollbackInProgress: The instance refresh task is being rolled back.
    // *   RollbackSuccessful: The instance refresh task is rolled back.
    // *   RollbackFailed: The instance refresh task fails to be rolled back.
    std::shared_ptr<string> status_ = nullptr;
    // The total number of instances whose configurations are refreshed.
    std::shared_ptr<int32_t> totalNeedUpdateCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
