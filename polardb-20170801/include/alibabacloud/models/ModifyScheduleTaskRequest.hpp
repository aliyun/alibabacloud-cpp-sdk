// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyScheduleTaskRequest() = default ;
    ModifyScheduleTaskRequest(const ModifyScheduleTaskRequest &) = default ;
    ModifyScheduleTaskRequest(ModifyScheduleTaskRequest &&) = default ;
    ModifyScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduleTaskRequest() = default ;
    ModifyScheduleTaskRequest& operator=(const ModifyScheduleTaskRequest &) = default ;
    ModifyScheduleTaskRequest& operator=(ModifyScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyScheduleTaskRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScheduleTaskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScheduleTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyScheduleTaskRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyScheduleTaskRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyScheduleTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScheduleTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScheduleTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyScheduleTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters in your account, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest time to start the scheduled task. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    // 
    // > - The latest start time must be at least 30 minutes later than the earliest start time.
    // 
    // - If you specify `PlannedStartTime` but not this parameter, the latest start time of the task is `PlannedStartTime + 30 minutes` by default. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task will be executed no later than `2021-01-14T09:30:00Z`.
    // 
    // This parameter is required.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled task. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    // 
    // > - The start time can be any point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can set the start time to a value in the range of `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // 
    // - If you leave this parameter empty, the task is executed immediately.
    // 
    // This parameter is required.
    shared_ptr<string> plannedStartTime_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
