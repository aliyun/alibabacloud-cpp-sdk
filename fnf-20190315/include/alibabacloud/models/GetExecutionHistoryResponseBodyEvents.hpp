// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class GetExecutionHistoryResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecutionHistoryResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(ScheduleEventId, scheduleEventId_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecutionHistoryResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(ScheduleEventId, scheduleEventId_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetExecutionHistoryResponseBodyEvents() = default ;
    GetExecutionHistoryResponseBodyEvents(const GetExecutionHistoryResponseBodyEvents &) = default ;
    GetExecutionHistoryResponseBodyEvents(GetExecutionHistoryResponseBodyEvents &&) = default ;
    GetExecutionHistoryResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecutionHistoryResponseBodyEvents() = default ;
    GetExecutionHistoryResponseBodyEvents& operator=(const GetExecutionHistoryResponseBodyEvents &) = default ;
    GetExecutionHistoryResponseBodyEvents& operator=(GetExecutionHistoryResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventDetail_ == nullptr
        && return this->eventId_ == nullptr && return this->scheduleEventId_ == nullptr && return this->stepName_ == nullptr && return this->time_ == nullptr && return this->type_ == nullptr; };
    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline string eventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
    inline GetExecutionHistoryResponseBodyEvents& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline GetExecutionHistoryResponseBodyEvents& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // scheduleEventId Field Functions 
    bool hasScheduleEventId() const { return this->scheduleEventId_ != nullptr;};
    void deleteScheduleEventId() { this->scheduleEventId_ = nullptr;};
    inline int64_t scheduleEventId() const { DARABONBA_PTR_GET_DEFAULT(scheduleEventId_, 0L) };
    inline GetExecutionHistoryResponseBodyEvents& setScheduleEventId(int64_t scheduleEventId) { DARABONBA_PTR_SET_VALUE(scheduleEventId_, scheduleEventId) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline GetExecutionHistoryResponseBodyEvents& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetExecutionHistoryResponseBodyEvents& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetExecutionHistoryResponseBodyEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The details about the execution step.
    std::shared_ptr<string> eventDetail_ = nullptr;
    // The ID of the execution step.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The ID of the scheduling step.
    std::shared_ptr<int64_t> scheduleEventId_ = nullptr;
    // The name of the execution step.
    std::shared_ptr<string> stepName_ = nullptr;
    // The time when the event was updated.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the execution step. Valid values:
    // 
    // *   **StepEntered**
    // *   **StepStarted**
    // *   **StepSucceeded**
    // *   **StepFailed**
    // *   **StepExited**
    // *   **BranchEntered**
    // *   **BranchExited**
    // *   **IterationEntered**
    // *   **IterationExited**
    // *   **TaskScheduled**
    // *   **TaskStarted**
    // *   **TaskSubmitted**
    // *   **TaskSubmitFailed**
    // *   **TaskSucceeded**
    // *   **TaskFailed**
    // *   **TaskTimedOut**
    // *   **ExecutionStarted**
    // *   **ExecutionStopped**
    // *   **ExecutionSucceeded**
    // *   **ExecutionFailed**
    // *   **ExecutionTimedOut**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
