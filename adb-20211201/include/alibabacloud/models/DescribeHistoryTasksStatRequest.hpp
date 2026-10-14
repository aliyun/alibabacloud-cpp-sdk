// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSSTATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSSTATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeHistoryTasksStatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryTasksStatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromExecTime, fromExecTime_);
      DARABONBA_PTR_TO_JSON(FromStartTime, fromStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(ToExecTime, toExecTime_);
      DARABONBA_PTR_TO_JSON(ToStartTime, toStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryTasksStatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromExecTime, fromExecTime_);
      DARABONBA_PTR_FROM_JSON(FromStartTime, fromStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(ToExecTime, toExecTime_);
      DARABONBA_PTR_FROM_JSON(ToStartTime, toStartTime_);
    };
    DescribeHistoryTasksStatRequest() = default ;
    DescribeHistoryTasksStatRequest(const DescribeHistoryTasksStatRequest &) = default ;
    DescribeHistoryTasksStatRequest(DescribeHistoryTasksStatRequest &&) = default ;
    DescribeHistoryTasksStatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryTasksStatRequest() = default ;
    DescribeHistoryTasksStatRequest& operator=(const DescribeHistoryTasksStatRequest &) = default ;
    DescribeHistoryTasksStatRequest& operator=(DescribeHistoryTasksStatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromExecTime_ == nullptr
        && this->fromStartTime_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityToken_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->toExecTime_ == nullptr && this->toStartTime_ == nullptr; };
    // fromExecTime Field Functions 
    bool hasFromExecTime() const { return this->fromExecTime_ != nullptr;};
    void deleteFromExecTime() { this->fromExecTime_ = nullptr;};
    inline int32_t getFromExecTime() const { DARABONBA_PTR_GET_DEFAULT(fromExecTime_, 0) };
    inline DescribeHistoryTasksStatRequest& setFromExecTime(int32_t fromExecTime) { DARABONBA_PTR_SET_VALUE(fromExecTime_, fromExecTime) };


    // fromStartTime Field Functions 
    bool hasFromStartTime() const { return this->fromStartTime_ != nullptr;};
    void deleteFromStartTime() { this->fromStartTime_ = nullptr;};
    inline string getFromStartTime() const { DARABONBA_PTR_GET_DEFAULT(fromStartTime_, "") };
    inline DescribeHistoryTasksStatRequest& setFromStartTime(string fromStartTime) { DARABONBA_PTR_SET_VALUE(fromStartTime_, fromStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryTasksStatRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryTasksStatRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHistoryTasksStatRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeHistoryTasksStatRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHistoryTasksStatRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeHistoryTasksStatRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeHistoryTasksStatRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // toExecTime Field Functions 
    bool hasToExecTime() const { return this->toExecTime_ != nullptr;};
    void deleteToExecTime() { this->toExecTime_ = nullptr;};
    inline int32_t getToExecTime() const { DARABONBA_PTR_GET_DEFAULT(toExecTime_, 0) };
    inline DescribeHistoryTasksStatRequest& setToExecTime(int32_t toExecTime) { DARABONBA_PTR_SET_VALUE(toExecTime_, toExecTime) };


    // toStartTime Field Functions 
    bool hasToStartTime() const { return this->toStartTime_ != nullptr;};
    void deleteToStartTime() { this->toStartTime_ = nullptr;};
    inline string getToStartTime() const { DARABONBA_PTR_GET_DEFAULT(toStartTime_, "") };
    inline DescribeHistoryTasksStatRequest& setToStartTime(string toStartTime) { DARABONBA_PTR_SET_VALUE(toStartTime_, toStartTime) };


  protected:
    // The minimum execution duration of the task, in seconds. This parameter is used to filter tasks whose execution duration is greater than the specified value. Default value: 0, which indicates no limit.
    shared_ptr<int32_t> fromExecTime_ {};
    // The start time of the query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> fromStartTime_ {};
    // The cluster ID.
    shared_ptr<string> instanceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> securityToken_ {};
    // The task status. Valid values:
    // 
    // - **Scheduled**: Pending execution.
    // 
    // - **Running**: Running.
    // 
    // - **Succeed**: Succeeded.
    // 
    // - **Failed**: Failed.
    // 
    // - **Cancelling**: Cancelling.
    // 
    // - **Canceled**: Canceled.
    // 
    // - **Waiting**: Waiting for the scheduled time.
    // 
    // Separate multiple values with commas (,). By default, this parameter is left empty, which indicates that all statuses are queried.
    shared_ptr<string> status_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The task type.
    shared_ptr<string> taskType_ {};
    // The maximum execution duration of the task, in seconds. This parameter is used to filter tasks whose execution duration is less than or equal to the specified value. Default value: 0, which indicates no limit.
    shared_ptr<int32_t> toExecTime_ {};
    // The end time of the query. Only tasks whose start time is earlier than the specified end time are returned. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> toStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
