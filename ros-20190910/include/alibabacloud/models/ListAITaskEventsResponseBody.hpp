// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAITASKEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAITASKEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListAITaskEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAITaskEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAITaskEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListAITaskEventsResponseBody() = default ;
    ListAITaskEventsResponseBody(const ListAITaskEventsResponseBody &) = default ;
    ListAITaskEventsResponseBody(ListAITaskEventsResponseBody &&) = default ;
    ListAITaskEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAITaskEventsResponseBody() = default ;
    ListAITaskEventsResponseBody& operator=(const ListAITaskEventsResponseBody &) = default ;
    ListAITaskEventsResponseBody& operator=(ListAITaskEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EstimatedProcessingTime, estimatedProcessingTime_);
        DARABONBA_PTR_TO_JSON(EventData, eventData_);
        DARABONBA_PTR_TO_JSON(HandlerProcessStatus, handlerProcessStatus_);
        DARABONBA_PTR_TO_JSON(HandlerType, handlerType_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EstimatedProcessingTime, estimatedProcessingTime_);
        DARABONBA_PTR_FROM_JSON(EventData, eventData_);
        DARABONBA_PTR_FROM_JSON(HandlerProcessStatus, handlerProcessStatus_);
        DARABONBA_PTR_FROM_JSON(HandlerType, handlerType_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentType_ == nullptr
        && this->createTime_ == nullptr && this->estimatedProcessingTime_ == nullptr && this->eventData_ == nullptr && this->handlerProcessStatus_ == nullptr && this->handlerType_ == nullptr; };
      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Events& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Events& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // estimatedProcessingTime Field Functions 
      bool hasEstimatedProcessingTime() const { return this->estimatedProcessingTime_ != nullptr;};
      void deleteEstimatedProcessingTime() { this->estimatedProcessingTime_ = nullptr;};
      inline string getEstimatedProcessingTime() const { DARABONBA_PTR_GET_DEFAULT(estimatedProcessingTime_, "") };
      inline Events& setEstimatedProcessingTime(string estimatedProcessingTime) { DARABONBA_PTR_SET_VALUE(estimatedProcessingTime_, estimatedProcessingTime) };


      // eventData Field Functions 
      bool hasEventData() const { return this->eventData_ != nullptr;};
      void deleteEventData() { this->eventData_ = nullptr;};
      inline string getEventData() const { DARABONBA_PTR_GET_DEFAULT(eventData_, "") };
      inline Events& setEventData(string eventData) { DARABONBA_PTR_SET_VALUE(eventData_, eventData) };


      // handlerProcessStatus Field Functions 
      bool hasHandlerProcessStatus() const { return this->handlerProcessStatus_ != nullptr;};
      void deleteHandlerProcessStatus() { this->handlerProcessStatus_ = nullptr;};
      inline string getHandlerProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(handlerProcessStatus_, "") };
      inline Events& setHandlerProcessStatus(string handlerProcessStatus) { DARABONBA_PTR_SET_VALUE(handlerProcessStatus_, handlerProcessStatus) };


      // handlerType Field Functions 
      bool hasHandlerType() const { return this->handlerType_ != nullptr;};
      void deleteHandlerType() { this->handlerType_ = nullptr;};
      inline string getHandlerType() const { DARABONBA_PTR_GET_DEFAULT(handlerType_, "") };
      inline Events& setHandlerType(string handlerType) { DARABONBA_PTR_SET_VALUE(handlerType_, handlerType) };


    protected:
      // The type of the agent that is used to execute the AI task.
      // 
      // Valid values:
      // 
      // *   GenerateTemplateAgent
      // *   FixUserTemplateAgent
      shared_ptr<string> agentType_ {};
      // The time when the event was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The estimated execution time of the handler. Unit: seconds.
      shared_ptr<string> estimatedProcessingTime_ {};
      // The details of the event.
      shared_ptr<string> eventData_ {};
      // The execution state of the handler that process the AI task.
      // 
      // Valid values:
      // 
      // *   SUCCESS
      // *   RUNNING
      // *   FAILURE
      shared_ptr<string> handlerProcessStatus_ {};
      // The type of the handler that is used to execute the task.
      // 
      // Valid values:
      // 
      // *   TerraformTemplateGenerator
      // *   TemplateGenerator
      // *   ROSTemplateModifier
      // *   TerraformTemplateStaticFixer
      // *   TerraformTemplateDynamicFixer
      // *   DocumentTemplateGenerator
      // *   TerraformTemplateModifier
      // *   TemplateModifier
      // *   FixTemplateInputPreprocessor
      // *   TemplateStaticFixer
      // *   GenerateTemplateInputPreprocessor
      // *   ROSTemplateGenerator
      // *   TemplateDynamicFixer
      // *   BaseDynamicFixer
      // *   ROSTemplateStaticFixer
      // *   ROSTemplateDynamicFixer
      shared_ptr<string> handlerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->events_ == nullptr && this->httpStatusCode_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAITaskEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<ListAITaskEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<ListAITaskEventsResponseBody::Events>) };
    inline vector<ListAITaskEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<ListAITaskEventsResponseBody::Events>) };
    inline ListAITaskEventsResponseBody& setEvents(const vector<ListAITaskEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListAITaskEventsResponseBody& setEvents(vector<ListAITaskEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAITaskEventsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAITaskEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAITaskEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListAITaskEventsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAITaskEventsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListAITaskEventsResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListAITaskEventsResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The events.
    shared_ptr<vector<ListAITaskEventsResponseBody::Events>> events_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The ID of the AI task.
    shared_ptr<string> taskId_ {};
    // The state of the AI task.
    // 
    // *   PENDING
    // *   WAITING
    // *   RUNNING
    // *   SUCCESS
    // *   FAILURE
    shared_ptr<string> taskStatus_ {};
    // The type of the AI task.
    // 
    // *   GenerateTemplate: The AI task is used to generate a template.
    // *   FixTemplate: The AI task is used to fix a template.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
