// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_TO_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_TO_JSON(CronStr, cronStr_);
      DARABONBA_PTR_TO_JSON(CronType, cronType_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(ScheduleParam, scheduleParam_);
      DARABONBA_PTR_TO_JSON(ScheduleSwitch, scheduleSwitch_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TimeZoneId, timeZoneId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_FROM_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_FROM_JSON(CronStr, cronStr_);
      DARABONBA_PTR_FROM_JSON(CronType, cronType_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(ScheduleParam, scheduleParam_);
      DARABONBA_PTR_FROM_JSON(ScheduleSwitch, scheduleSwitch_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TimeZoneId, timeZoneId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    UpdateTaskFlowScheduleRequest() = default ;
    UpdateTaskFlowScheduleRequest(const UpdateTaskFlowScheduleRequest &) = default ;
    UpdateTaskFlowScheduleRequest(UpdateTaskFlowScheduleRequest &&) = default ;
    UpdateTaskFlowScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowScheduleRequest() = default ;
    UpdateTaskFlowScheduleRequest& operator=(const UpdateTaskFlowScheduleRequest &) = default ;
    UpdateTaskFlowScheduleRequest& operator=(UpdateTaskFlowScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronBeginDate_ == nullptr
        && this->cronEndDate_ == nullptr && this->cronStr_ == nullptr && this->cronType_ == nullptr && this->dagId_ == nullptr && this->scheduleParam_ == nullptr
        && this->scheduleSwitch_ == nullptr && this->tid_ == nullptr && this->timeZoneId_ == nullptr && this->triggerType_ == nullptr; };
    // cronBeginDate Field Functions 
    bool hasCronBeginDate() const { return this->cronBeginDate_ != nullptr;};
    void deleteCronBeginDate() { this->cronBeginDate_ = nullptr;};
    inline string getCronBeginDate() const { DARABONBA_PTR_GET_DEFAULT(cronBeginDate_, "") };
    inline UpdateTaskFlowScheduleRequest& setCronBeginDate(string cronBeginDate) { DARABONBA_PTR_SET_VALUE(cronBeginDate_, cronBeginDate) };


    // cronEndDate Field Functions 
    bool hasCronEndDate() const { return this->cronEndDate_ != nullptr;};
    void deleteCronEndDate() { this->cronEndDate_ = nullptr;};
    inline string getCronEndDate() const { DARABONBA_PTR_GET_DEFAULT(cronEndDate_, "") };
    inline UpdateTaskFlowScheduleRequest& setCronEndDate(string cronEndDate) { DARABONBA_PTR_SET_VALUE(cronEndDate_, cronEndDate) };


    // cronStr Field Functions 
    bool hasCronStr() const { return this->cronStr_ != nullptr;};
    void deleteCronStr() { this->cronStr_ = nullptr;};
    inline string getCronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
    inline UpdateTaskFlowScheduleRequest& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


    // cronType Field Functions 
    bool hasCronType() const { return this->cronType_ != nullptr;};
    void deleteCronType() { this->cronType_ = nullptr;};
    inline string getCronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, "") };
    inline UpdateTaskFlowScheduleRequest& setCronType(string cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowScheduleRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // scheduleParam Field Functions 
    bool hasScheduleParam() const { return this->scheduleParam_ != nullptr;};
    void deleteScheduleParam() { this->scheduleParam_ = nullptr;};
    inline string getScheduleParam() const { DARABONBA_PTR_GET_DEFAULT(scheduleParam_, "") };
    inline UpdateTaskFlowScheduleRequest& setScheduleParam(string scheduleParam) { DARABONBA_PTR_SET_VALUE(scheduleParam_, scheduleParam) };


    // scheduleSwitch Field Functions 
    bool hasScheduleSwitch() const { return this->scheduleSwitch_ != nullptr;};
    void deleteScheduleSwitch() { this->scheduleSwitch_ = nullptr;};
    inline bool getScheduleSwitch() const { DARABONBA_PTR_GET_DEFAULT(scheduleSwitch_, false) };
    inline UpdateTaskFlowScheduleRequest& setScheduleSwitch(bool scheduleSwitch) { DARABONBA_PTR_SET_VALUE(scheduleSwitch_, scheduleSwitch) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowScheduleRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // timeZoneId Field Functions 
    bool hasTimeZoneId() const { return this->timeZoneId_ != nullptr;};
    void deleteTimeZoneId() { this->timeZoneId_ = nullptr;};
    inline string getTimeZoneId() const { DARABONBA_PTR_GET_DEFAULT(timeZoneId_, "") };
    inline UpdateTaskFlowScheduleRequest& setTimeZoneId(string timeZoneId) { DARABONBA_PTR_SET_VALUE(timeZoneId_, timeZoneId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline UpdateTaskFlowScheduleRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The start of the time range for scheduling.
    shared_ptr<string> cronBeginDate_ {};
    // The end of the time range for scheduling.
    shared_ptr<string> cronEndDate_ {};
    // The cron expression for timed scheduling.
    shared_ptr<string> cronStr_ {};
    // The type of the scheduling cycle. Valid values:
    // 
    // *   **MINUTE**: scheduling by minute
    // *   **HOUR**: scheduling by hour
    // *   **DAY**: scheduling by day
    // *   **WEEK**: scheduling by week
    // *   **MONTH**: scheduling by month
    shared_ptr<string> cronType_ {};
    // The ID of the task flow.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The event scheduling configuration. The value of this parameter is a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> scheduleParam_ {};
    // Specifies whether to enable scheduling. Valid values:
    // 
    // *   **Enable**
    // *   **Disable**
    // 
    // This parameter is required.
    shared_ptr<bool> scheduleSwitch_ {};
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The time zone. The default time zone is UTC+8 (Asia/Shanghai).
    shared_ptr<string> timeZoneId_ {};
    // The mode in which the task flow is triggered. Valid values:
    // 
    // *   **Cron**: The task flow is triggered based on timed scheduling.
    // *   **Event**: The task flow is triggered by events.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
