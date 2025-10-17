// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODYDATATIMERINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODYDATATIMERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeScheduleTasksResponseBodyDataTimerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduleTasksResponseBodyDataTimerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DbClusterDescription, dbClusterDescription_);
      DARABONBA_PTR_TO_JSON(DbClusterStatus, dbClusterStatus_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(PlannedTime, plannedTime_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskCancel, taskCancel_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduleTasksResponseBodyDataTimerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DbClusterDescription, dbClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DbClusterStatus, dbClusterStatus_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(PlannedTime, plannedTime_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskCancel, taskCancel_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeScheduleTasksResponseBodyDataTimerInfos() = default ;
    DescribeScheduleTasksResponseBodyDataTimerInfos(const DescribeScheduleTasksResponseBodyDataTimerInfos &) = default ;
    DescribeScheduleTasksResponseBodyDataTimerInfos(DescribeScheduleTasksResponseBodyDataTimerInfos &&) = default ;
    DescribeScheduleTasksResponseBodyDataTimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduleTasksResponseBodyDataTimerInfos() = default ;
    DescribeScheduleTasksResponseBodyDataTimerInfos& operator=(const DescribeScheduleTasksResponseBodyDataTimerInfos &) = default ;
    DescribeScheduleTasksResponseBodyDataTimerInfos& operator=(DescribeScheduleTasksResponseBodyDataTimerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->crontabJobId_ == nullptr && return this->DBClusterId_ == nullptr && return this->dbClusterDescription_ == nullptr && return this->dbClusterStatus_ == nullptr && return this->orderId_ == nullptr
        && return this->plannedEndTime_ == nullptr && return this->plannedFlashingOffTime_ == nullptr && return this->plannedStartTime_ == nullptr && return this->plannedTime_ == nullptr && return this->region_ == nullptr
        && return this->status_ == nullptr && return this->taskCancel_ == nullptr && return this->taskId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // crontabJobId Field Functions 
    bool hasCrontabJobId() const { return this->crontabJobId_ != nullptr;};
    void deleteCrontabJobId() { this->crontabJobId_ = nullptr;};
    inline string crontabJobId() const { DARABONBA_PTR_GET_DEFAULT(crontabJobId_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setCrontabJobId(string crontabJobId) { DARABONBA_PTR_SET_VALUE(crontabJobId_, crontabJobId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dbClusterDescription Field Functions 
    bool hasDbClusterDescription() const { return this->dbClusterDescription_ != nullptr;};
    void deleteDbClusterDescription() { this->dbClusterDescription_ = nullptr;};
    inline string dbClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(dbClusterDescription_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setDbClusterDescription(string dbClusterDescription) { DARABONBA_PTR_SET_VALUE(dbClusterDescription_, dbClusterDescription) };


    // dbClusterStatus Field Functions 
    bool hasDbClusterStatus() const { return this->dbClusterStatus_ != nullptr;};
    void deleteDbClusterStatus() { this->dbClusterStatus_ = nullptr;};
    inline string dbClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(dbClusterStatus_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setDbClusterStatus(string dbClusterStatus) { DARABONBA_PTR_SET_VALUE(dbClusterStatus_, dbClusterStatus) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string plannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedFlashingOffTime Field Functions 
    bool hasPlannedFlashingOffTime() const { return this->plannedFlashingOffTime_ != nullptr;};
    void deletePlannedFlashingOffTime() { this->plannedFlashingOffTime_ = nullptr;};
    inline string plannedFlashingOffTime() const { DARABONBA_PTR_GET_DEFAULT(plannedFlashingOffTime_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setPlannedFlashingOffTime(string plannedFlashingOffTime) { DARABONBA_PTR_SET_VALUE(plannedFlashingOffTime_, plannedFlashingOffTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string plannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // plannedTime Field Functions 
    bool hasPlannedTime() const { return this->plannedTime_ != nullptr;};
    void deletePlannedTime() { this->plannedTime_ = nullptr;};
    inline string plannedTime() const { DARABONBA_PTR_GET_DEFAULT(plannedTime_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setPlannedTime(string plannedTime) { DARABONBA_PTR_SET_VALUE(plannedTime_, plannedTime) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskCancel Field Functions 
    bool hasTaskCancel() const { return this->taskCancel_ != nullptr;};
    void deleteTaskCancel() { this->taskCancel_ = nullptr;};
    inline bool taskCancel() const { DARABONBA_PTR_GET_DEFAULT(taskCancel_, false) };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setTaskCancel(bool taskCancel) { DARABONBA_PTR_SET_VALUE(taskCancel_, taskCancel) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeScheduleTasksResponseBodyDataTimerInfos& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The type of the scheduled tasks.
    std::shared_ptr<string> action_ = nullptr;
    // The ID of the scheduled task.
    std::shared_ptr<string> crontabJobId_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> dbClusterDescription_ = nullptr;
    // The state of the cluster.
    std::shared_ptr<string> dbClusterStatus_ = nullptr;
    // The ID of the order.
    // 
    // >  This parameter is returned only when you set the `Action` parameter to **CreateDBNodes** or **ModifyDBNodeClass**.
    std::shared_ptr<string> orderId_ = nullptr;
    // The latest start time of the task that you specified when you created the scheduled task. The time is displayed in UTC.
    std::shared_ptr<string> plannedEndTime_ = nullptr;
    std::shared_ptr<string> plannedFlashingOffTime_ = nullptr;
    // The earliest start time of the task that you specified when you created the scheduled task. The time is displayed in UTC.
    std::shared_ptr<string> plannedStartTime_ = nullptr;
    // The expected start time of the task. The time is displayed in UTC.
    std::shared_ptr<string> plannedTime_ = nullptr;
    // The ID of the region in which the scheduled task runs.
    std::shared_ptr<string> region_ = nullptr;
    // The state of the scheduled task.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the scheduled task can be canceled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> taskCancel_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
