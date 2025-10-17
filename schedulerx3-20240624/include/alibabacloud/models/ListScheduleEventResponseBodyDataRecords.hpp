// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEEVENTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEEVENTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListScheduleEventResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
    };
    ListScheduleEventResponseBodyDataRecords() = default ;
    ListScheduleEventResponseBodyDataRecords(const ListScheduleEventResponseBodyDataRecords &) = default ;
    ListScheduleEventResponseBodyDataRecords(ListScheduleEventResponseBodyDataRecords &&) = default ;
    ListScheduleEventResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleEventResponseBodyDataRecords() = default ;
    ListScheduleEventResponseBodyDataRecords& operator=(const ListScheduleEventResponseBodyDataRecords &) = default ;
    ListScheduleEventResponseBodyDataRecords& operator=(ListScheduleEventResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->content_ == nullptr && return this->event_ == nullptr && return this->jobExecutionId_ == nullptr && return this->jobName_ == nullptr && return this->time_ == nullptr
        && return this->workerAddr_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // workerAddr Field Functions 
    bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
    void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
    inline string workerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
    inline ListScheduleEventResponseBodyDataRecords& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    // 130
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> workerAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
