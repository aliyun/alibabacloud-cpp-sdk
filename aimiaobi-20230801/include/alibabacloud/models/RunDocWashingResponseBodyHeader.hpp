// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODYHEADER_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODYHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocWashingResponseBodyHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocWashingResponseBodyHeader& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocWashingResponseBodyHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    RunDocWashingResponseBodyHeader() = default ;
    RunDocWashingResponseBodyHeader(const RunDocWashingResponseBodyHeader &) = default ;
    RunDocWashingResponseBodyHeader(RunDocWashingResponseBodyHeader &&) = default ;
    RunDocWashingResponseBodyHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocWashingResponseBodyHeader() = default ;
    RunDocWashingResponseBodyHeader& operator=(const RunDocWashingResponseBodyHeader &) = default ;
    RunDocWashingResponseBodyHeader& operator=(RunDocWashingResponseBodyHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->eventInfo_ != nullptr && this->requestId_ != nullptr && this->sessionId_ != nullptr && this->taskId_ != nullptr && this->traceId_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline RunDocWashingResponseBodyHeader& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventInfo Field Functions 
    bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
    void deleteEventInfo() { this->eventInfo_ = nullptr;};
    inline string eventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
    inline RunDocWashingResponseBodyHeader& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocWashingResponseBodyHeader& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocWashingResponseBodyHeader& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunDocWashingResponseBodyHeader& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline RunDocWashingResponseBodyHeader& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> eventInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
