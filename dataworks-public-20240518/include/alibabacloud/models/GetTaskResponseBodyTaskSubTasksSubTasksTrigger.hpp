// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSUBTASKSSUBTASKSTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSUBTASKSSUBTASKSTRIGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskSubTasksSubTasksTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskSubTasksSubTasksTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskSubTasksSubTasksTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger() = default ;
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger(const GetTaskResponseBodyTaskSubTasksSubTasksTrigger &) = default ;
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger(GetTaskResponseBodyTaskSubTasksSubTasksTrigger &&) = default ;
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskSubTasksSubTasksTrigger() = default ;
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger& operator=(const GetTaskResponseBodyTaskSubTasksSubTasksTrigger &) = default ;
    GetTaskResponseBodyTaskSubTasksSubTasksTrigger& operator=(GetTaskResponseBodyTaskSubTasksSubTasksTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cron_ != nullptr
        && this->endTime_ != nullptr && this->recurrence_ != nullptr && this->startTime_ != nullptr && this->type_ != nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline GetTaskResponseBodyTaskSubTasksSubTasksTrigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTaskResponseBodyTaskSubTasksSubTasksTrigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline GetTaskResponseBodyTaskSubTasksSubTasksTrigger& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTaskResponseBodyTaskSubTasksSubTasksTrigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTaskResponseBodyTaskSubTasksSubTasksTrigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The CRON expression of the task. This parameter takes effect only if the Type parameter is set to Scheduler.
    std::shared_ptr<string> cron_ = nullptr;
    // The end time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
    std::shared_ptr<string> endTime_ = nullptr;
    // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
    // 
    // *   Pause
    // *   Skip
    // *   Normal
    std::shared_ptr<string> recurrence_ = nullptr;
    // The start time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
    std::shared_ptr<string> startTime_ = nullptr;
    // The trigger type. Valid values:
    // 
    // *   Scheduler: periodic scheduling
    // *   Manual: manual scheduling
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
