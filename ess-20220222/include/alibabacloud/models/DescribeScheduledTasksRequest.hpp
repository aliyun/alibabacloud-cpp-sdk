// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScheduledTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledActions, scheduledActions_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskIds, scheduledTaskIds_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskNames, scheduledTaskNames_);
      DARABONBA_PTR_TO_JSON(TaskEnabled, taskEnabled_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledActions, scheduledActions_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskIds, scheduledTaskIds_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskNames, scheduledTaskNames_);
      DARABONBA_PTR_FROM_JSON(TaskEnabled, taskEnabled_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeScheduledTasksRequest() = default ;
    DescribeScheduledTasksRequest(const DescribeScheduledTasksRequest &) = default ;
    DescribeScheduledTasksRequest(DescribeScheduledTasksRequest &&) = default ;
    DescribeScheduledTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduledTasksRequest() = default ;
    DescribeScheduledTasksRequest& operator=(const DescribeScheduledTasksRequest &) = default ;
    DescribeScheduledTasksRequest& operator=(DescribeScheduledTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingGroupId_ == nullptr && this->scheduledActions_ == nullptr
        && this->scheduledTaskIds_ == nullptr && this->scheduledTaskNames_ == nullptr && this->taskEnabled_ == nullptr && this->taskName_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScheduledTasksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScheduledTasksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScheduledTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScheduledTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline DescribeScheduledTasksRequest& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline DescribeScheduledTasksRequest& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScheduledTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScheduledTasksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScheduledTasksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScheduledTasksRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scheduledActions Field Functions 
    bool hasScheduledActions() const { return this->scheduledActions_ != nullptr;};
    void deleteScheduledActions() { this->scheduledActions_ = nullptr;};
    inline const vector<string> & getScheduledActions() const { DARABONBA_PTR_GET_CONST(scheduledActions_, vector<string>) };
    inline vector<string> getScheduledActions() { DARABONBA_PTR_GET(scheduledActions_, vector<string>) };
    inline DescribeScheduledTasksRequest& setScheduledActions(const vector<string> & scheduledActions) { DARABONBA_PTR_SET_VALUE(scheduledActions_, scheduledActions) };
    inline DescribeScheduledTasksRequest& setScheduledActions(vector<string> && scheduledActions) { DARABONBA_PTR_SET_RVALUE(scheduledActions_, scheduledActions) };


    // scheduledTaskIds Field Functions 
    bool hasScheduledTaskIds() const { return this->scheduledTaskIds_ != nullptr;};
    void deleteScheduledTaskIds() { this->scheduledTaskIds_ = nullptr;};
    inline const vector<string> & getScheduledTaskIds() const { DARABONBA_PTR_GET_CONST(scheduledTaskIds_, vector<string>) };
    inline vector<string> getScheduledTaskIds() { DARABONBA_PTR_GET(scheduledTaskIds_, vector<string>) };
    inline DescribeScheduledTasksRequest& setScheduledTaskIds(const vector<string> & scheduledTaskIds) { DARABONBA_PTR_SET_VALUE(scheduledTaskIds_, scheduledTaskIds) };
    inline DescribeScheduledTasksRequest& setScheduledTaskIds(vector<string> && scheduledTaskIds) { DARABONBA_PTR_SET_RVALUE(scheduledTaskIds_, scheduledTaskIds) };


    // scheduledTaskNames Field Functions 
    bool hasScheduledTaskNames() const { return this->scheduledTaskNames_ != nullptr;};
    void deleteScheduledTaskNames() { this->scheduledTaskNames_ = nullptr;};
    inline const vector<string> & getScheduledTaskNames() const { DARABONBA_PTR_GET_CONST(scheduledTaskNames_, vector<string>) };
    inline vector<string> getScheduledTaskNames() { DARABONBA_PTR_GET(scheduledTaskNames_, vector<string>) };
    inline DescribeScheduledTasksRequest& setScheduledTaskNames(const vector<string> & scheduledTaskNames) { DARABONBA_PTR_SET_VALUE(scheduledTaskNames_, scheduledTaskNames) };
    inline DescribeScheduledTasksRequest& setScheduledTaskNames(vector<string> && scheduledTaskNames) { DARABONBA_PTR_SET_RVALUE(scheduledTaskNames_, scheduledTaskNames) };


    // taskEnabled Field Functions 
    bool hasTaskEnabled() const { return this->taskEnabled_ != nullptr;};
    void deleteTaskEnabled() { this->taskEnabled_ = nullptr;};
    inline bool getTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(taskEnabled_, false) };
    inline DescribeScheduledTasksRequest& setTaskEnabled(bool taskEnabled) { DARABONBA_PTR_SET_VALUE(taskEnabled_, taskEnabled) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeScheduledTasksRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The interval at which scheduled task N is repeatedly executed. Valid values:
    // 
    // *   Daily: Scheduled task N is executed once every specified number of days.
    // *   Weekly: Scheduled task N is executed on each specified day of a week.
    // *   Monthly: Scheduled task N is executed on each specified day of a month.
    // *   Cron: Scheduled task N is executed based on the specified Cron expression.
    shared_ptr<string> recurrenceType_ {};
    // The number of times scheduled task N is repeatedly executed.
    // 
    // You can specify this parameter only if you set RecurrenceType to Weekly. Separate multiple values with commas (,). The values that correspond to Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday are 0, 1, 2, 3, 4, 5, and 6.
    shared_ptr<string> recurrenceValue_ {};
    // The region ID of the scaling group to which the scheduled task belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group to which the scheduled task belongs.
    shared_ptr<string> scalingGroupId_ {};
    // The scaling rules of the scheduled tasks. Once the scheduled tasks are triggered, the scaling rules are executed.
    shared_ptr<vector<string>> scheduledActions_ {};
    // The IDs of the scheduled tasks that you want to query.
    shared_ptr<vector<string>> scheduledTaskIds_ {};
    // The names of the scheduled tasks that you want to query.
    shared_ptr<vector<string>> scheduledTaskNames_ {};
    // Specifies whether scheduled task N is enabled.
    // 
    // *   true
    // *   false
    shared_ptr<bool> taskEnabled_ {};
    // The name of scheduled task N. Fuzzy search based on keywords is supported.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
