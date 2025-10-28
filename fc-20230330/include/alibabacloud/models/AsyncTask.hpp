// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCTASK_HPP_
#define ALIBABACLOUD_MODELS_ASYNCTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncTaskEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class AsyncTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncTask& obj) { 
      DARABONBA_PTR_TO_JSON(alreadyRetriedTimes, alreadyRetriedTimes_);
      DARABONBA_PTR_TO_JSON(destinationStatus, destinationStatus_);
      DARABONBA_PTR_TO_JSON(durationMs, durationMs_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(returnPayload, returnPayload_);
      DARABONBA_PTR_TO_JSON(startedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskPayload, taskPayload_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncTask& obj) { 
      DARABONBA_PTR_FROM_JSON(alreadyRetriedTimes, alreadyRetriedTimes_);
      DARABONBA_PTR_FROM_JSON(destinationStatus, destinationStatus_);
      DARABONBA_PTR_FROM_JSON(durationMs, durationMs_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(returnPayload, returnPayload_);
      DARABONBA_PTR_FROM_JSON(startedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskPayload, taskPayload_);
    };
    AsyncTask() = default ;
    AsyncTask(const AsyncTask &) = default ;
    AsyncTask(AsyncTask &&) = default ;
    AsyncTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncTask() = default ;
    AsyncTask& operator=(const AsyncTask &) = default ;
    AsyncTask& operator=(AsyncTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyRetriedTimes_ == nullptr
        && return this->destinationStatus_ == nullptr && return this->durationMs_ == nullptr && return this->endTime_ == nullptr && return this->events_ == nullptr && return this->functionArn_ == nullptr
        && return this->instanceId_ == nullptr && return this->qualifier_ == nullptr && return this->requestId_ == nullptr && return this->returnPayload_ == nullptr && return this->startedTime_ == nullptr
        && return this->status_ == nullptr && return this->taskErrorMessage_ == nullptr && return this->taskId_ == nullptr && return this->taskPayload_ == nullptr; };
    // alreadyRetriedTimes Field Functions 
    bool hasAlreadyRetriedTimes() const { return this->alreadyRetriedTimes_ != nullptr;};
    void deleteAlreadyRetriedTimes() { this->alreadyRetriedTimes_ = nullptr;};
    inline int64_t alreadyRetriedTimes() const { DARABONBA_PTR_GET_DEFAULT(alreadyRetriedTimes_, 0L) };
    inline AsyncTask& setAlreadyRetriedTimes(int64_t alreadyRetriedTimes) { DARABONBA_PTR_SET_VALUE(alreadyRetriedTimes_, alreadyRetriedTimes) };


    // destinationStatus Field Functions 
    bool hasDestinationStatus() const { return this->destinationStatus_ != nullptr;};
    void deleteDestinationStatus() { this->destinationStatus_ = nullptr;};
    inline string destinationStatus() const { DARABONBA_PTR_GET_DEFAULT(destinationStatus_, "") };
    inline AsyncTask& setDestinationStatus(string destinationStatus) { DARABONBA_PTR_SET_VALUE(destinationStatus_, destinationStatus) };


    // durationMs Field Functions 
    bool hasDurationMs() const { return this->durationMs_ != nullptr;};
    void deleteDurationMs() { this->durationMs_ = nullptr;};
    inline int64_t durationMs() const { DARABONBA_PTR_GET_DEFAULT(durationMs_, 0L) };
    inline AsyncTask& setDurationMs(int64_t durationMs) { DARABONBA_PTR_SET_VALUE(durationMs_, durationMs) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline AsyncTask& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<AsyncTaskEvent> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<AsyncTaskEvent>) };
    inline vector<AsyncTaskEvent> events() { DARABONBA_PTR_GET(events_, vector<AsyncTaskEvent>) };
    inline AsyncTask& setEvents(const vector<AsyncTaskEvent> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline AsyncTask& setEvents(vector<AsyncTaskEvent> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string functionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline AsyncTask& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AsyncTask& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline AsyncTask& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AsyncTask& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // returnPayload Field Functions 
    bool hasReturnPayload() const { return this->returnPayload_ != nullptr;};
    void deleteReturnPayload() { this->returnPayload_ = nullptr;};
    inline string returnPayload() const { DARABONBA_PTR_GET_DEFAULT(returnPayload_, "") };
    inline AsyncTask& setReturnPayload(string returnPayload) { DARABONBA_PTR_SET_VALUE(returnPayload_, returnPayload) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline AsyncTask& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AsyncTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline AsyncTask& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskPayload Field Functions 
    bool hasTaskPayload() const { return this->taskPayload_ != nullptr;};
    void deleteTaskPayload() { this->taskPayload_ = nullptr;};
    inline string taskPayload() const { DARABONBA_PTR_GET_DEFAULT(taskPayload_, "") };
    inline AsyncTask& setTaskPayload(string taskPayload) { DARABONBA_PTR_SET_VALUE(taskPayload_, taskPayload) };


  protected:
    std::shared_ptr<int64_t> alreadyRetriedTimes_ = nullptr;
    std::shared_ptr<string> destinationStatus_ = nullptr;
    std::shared_ptr<int64_t> durationMs_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<AsyncTaskEvent>> events_ = nullptr;
    std::shared_ptr<string> functionArn_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> returnPayload_ = nullptr;
    std::shared_ptr<int64_t> startedTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskPayload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
