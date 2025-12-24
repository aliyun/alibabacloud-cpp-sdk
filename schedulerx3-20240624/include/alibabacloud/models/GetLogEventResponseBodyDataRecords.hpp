// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGEVENTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETLOGEVENTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetLogEventResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
    };
    GetLogEventResponseBodyDataRecords() = default ;
    GetLogEventResponseBodyDataRecords(const GetLogEventResponseBodyDataRecords &) = default ;
    GetLogEventResponseBodyDataRecords(GetLogEventResponseBodyDataRecords &&) = default ;
    GetLogEventResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogEventResponseBodyDataRecords() = default ;
    GetLogEventResponseBodyDataRecords& operator=(const GetLogEventResponseBodyDataRecords &) = default ;
    GetLogEventResponseBodyDataRecords& operator=(GetLogEventResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->content_ == nullptr && return this->event_ == nullptr && return this->eventType_ == nullptr && return this->jobExecutionId_ == nullptr && return this->jobName_ == nullptr
        && return this->time_ == nullptr && return this->workerAddr_ == nullptr && return this->workflowExecutionId_ == nullptr && return this->workflowName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetLogEventResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetLogEventResponseBodyDataRecords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetLogEventResponseBodyDataRecords& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline GetLogEventResponseBodyDataRecords& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline GetLogEventResponseBodyDataRecords& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetLogEventResponseBodyDataRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetLogEventResponseBodyDataRecords& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // workerAddr Field Functions 
    bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
    void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
    inline string workerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
    inline GetLogEventResponseBodyDataRecords& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline string workflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, "") };
    inline GetLogEventResponseBodyDataRecords& setWorkflowExecutionId(string workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string workflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline GetLogEventResponseBodyDataRecords& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> workerAddr_ = nullptr;
    std::shared_ptr<string> workflowExecutionId_ = nullptr;
    std::shared_ptr<string> workflowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
