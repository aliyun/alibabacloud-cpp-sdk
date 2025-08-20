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
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
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
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
    virtual bool empty() const override { this->fromExecTime_ != nullptr
        && this->fromStartTime_ != nullptr && this->instanceId_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityToken_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr
        && this->taskType_ != nullptr && this->toExecTime_ != nullptr && this->toStartTime_ != nullptr; };
    // fromExecTime Field Functions 
    bool hasFromExecTime() const { return this->fromExecTime_ != nullptr;};
    void deleteFromExecTime() { this->fromExecTime_ = nullptr;};
    inline int32_t fromExecTime() const { DARABONBA_PTR_GET_DEFAULT(fromExecTime_, 0) };
    inline DescribeHistoryTasksStatRequest& setFromExecTime(int32_t fromExecTime) { DARABONBA_PTR_SET_VALUE(fromExecTime_, fromExecTime) };


    // fromStartTime Field Functions 
    bool hasFromStartTime() const { return this->fromStartTime_ != nullptr;};
    void deleteFromStartTime() { this->fromStartTime_ = nullptr;};
    inline string fromStartTime() const { DARABONBA_PTR_GET_DEFAULT(fromStartTime_, "") };
    inline DescribeHistoryTasksStatRequest& setFromStartTime(string fromStartTime) { DARABONBA_PTR_SET_VALUE(fromStartTime_, fromStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryTasksStatRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeHistoryTasksStatRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryTasksStatRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHistoryTasksStatRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline int64_t resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, 0L) };
    inline DescribeHistoryTasksStatRequest& setResourceOwnerAccount(int64_t resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeHistoryTasksStatRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeHistoryTasksStatRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHistoryTasksStatRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeHistoryTasksStatRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeHistoryTasksStatRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // toExecTime Field Functions 
    bool hasToExecTime() const { return this->toExecTime_ != nullptr;};
    void deleteToExecTime() { this->toExecTime_ = nullptr;};
    inline int32_t toExecTime() const { DARABONBA_PTR_GET_DEFAULT(toExecTime_, 0) };
    inline DescribeHistoryTasksStatRequest& setToExecTime(int32_t toExecTime) { DARABONBA_PTR_SET_VALUE(toExecTime_, toExecTime) };


    // toStartTime Field Functions 
    bool hasToStartTime() const { return this->toStartTime_ != nullptr;};
    void deleteToStartTime() { this->toStartTime_ = nullptr;};
    inline string toStartTime() const { DARABONBA_PTR_GET_DEFAULT(toStartTime_, "") };
    inline DescribeHistoryTasksStatRequest& setToStartTime(string toStartTime) { DARABONBA_PTR_SET_VALUE(toStartTime_, toStartTime) };


  protected:
    std::shared_ptr<int32_t> fromExecTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fromStartTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<int32_t> toExecTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
