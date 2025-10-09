// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFOUPSTREAMTASKSTASKTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFOUPSTREAMTASKSTASKTRIGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger() = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger(const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger &) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger(ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger &&) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger() = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& operator=(const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger &) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& operator=(ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cron_ != nullptr
        && this->endTime_ != nullptr && this->recurrence_ != nullptr && this->startTime_ != nullptr && this->timezone_ != nullptr && this->type_ != nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTaskTrigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The CRON expression. This parameter takes effect only if the Type parameter is set to Scheduler.
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
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
    // The trigger type. Valid values:
    // 
    // *   Scheduler: scheduling cycle-based trigger
    // *   Manual: manual trigger
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
