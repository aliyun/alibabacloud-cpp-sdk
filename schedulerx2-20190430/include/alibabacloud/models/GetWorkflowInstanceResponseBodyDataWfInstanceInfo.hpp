// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkflowInstanceResponseBodyDataWfInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBodyDataWfInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBodyDataWfInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo(const GetWorkflowInstanceResponseBodyDataWfInstanceInfo &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo(GetWorkflowInstanceResponseBodyDataWfInstanceInfo &&) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBodyDataWfInstanceInfo() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo& operator=(const GetWorkflowInstanceResponseBodyDataWfInstanceInfo &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceInfo& operator=(GetWorkflowInstanceResponseBodyDataWfInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataTime_ == nullptr
        && return this->endTime_ == nullptr && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceInfo& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceInfo& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The data timestamp of the workflow instance.
    std::shared_ptr<string> dataTime_ = nullptr;
    // The time when the workflow instance stopped running.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the workflow instance was scheduled to run.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The time when the workflow instance started to run.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the workflow instance. Valid values:
    // 
    // *   1: pending
    // *   2: preparing
    // *   3: running
    // *   4: successful
    // *   5: failed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
