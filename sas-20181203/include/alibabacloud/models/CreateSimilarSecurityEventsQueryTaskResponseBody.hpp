// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSimilarSecurityEventsQueryTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSimilarSecurityEventsQueryTaskResponse, createSimilarSecurityEventsQueryTaskResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSimilarSecurityEventsQueryTaskResponse, createSimilarSecurityEventsQueryTaskResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSimilarSecurityEventsQueryTaskResponseBody() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(const CreateSimilarSecurityEventsQueryTaskResponseBody &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(CreateSimilarSecurityEventsQueryTaskResponseBody &&) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimilarSecurityEventsQueryTaskResponseBody() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody& operator=(const CreateSimilarSecurityEventsQueryTaskResponseBody &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBody& operator=(CreateSimilarSecurityEventsQueryTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateSimilarSecurityEventsQueryTaskResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      CreateSimilarSecurityEventsQueryTaskResponse() = default ;
      CreateSimilarSecurityEventsQueryTaskResponse(const CreateSimilarSecurityEventsQueryTaskResponse &) = default ;
      CreateSimilarSecurityEventsQueryTaskResponse(CreateSimilarSecurityEventsQueryTaskResponse &&) = default ;
      CreateSimilarSecurityEventsQueryTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateSimilarSecurityEventsQueryTaskResponse() = default ;
      CreateSimilarSecurityEventsQueryTaskResponse& operator=(const CreateSimilarSecurityEventsQueryTaskResponse &) = default ;
      CreateSimilarSecurityEventsQueryTaskResponse& operator=(CreateSimilarSecurityEventsQueryTaskResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->taskId_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CreateSimilarSecurityEventsQueryTaskResponse& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline CreateSimilarSecurityEventsQueryTaskResponse& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The status of the task. Valid values:
      // 
      // *   **New**: The task is created.
      // *   **RetrievingData**: Data is being retrieved.
      // *   **DataRetrieved**: Data is retrieved.
      // *   **Processing**: The task is running.
      // *   **Success**: The task is successful.
      // *   **Failed**: The task failed.
      // *   **PartialFailed**: The task partially failed.
      shared_ptr<string> status_ {};
      // The ID of the task.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->createSimilarSecurityEventsQueryTaskResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // createSimilarSecurityEventsQueryTaskResponse Field Functions 
    bool hasCreateSimilarSecurityEventsQueryTaskResponse() const { return this->createSimilarSecurityEventsQueryTaskResponse_ != nullptr;};
    void deleteCreateSimilarSecurityEventsQueryTaskResponse() { this->createSimilarSecurityEventsQueryTaskResponse_ = nullptr;};
    inline const CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse & getCreateSimilarSecurityEventsQueryTaskResponse() const { DARABONBA_PTR_GET_CONST(createSimilarSecurityEventsQueryTaskResponse_, CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse getCreateSimilarSecurityEventsQueryTaskResponse() { DARABONBA_PTR_GET(createSimilarSecurityEventsQueryTaskResponse_, CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setCreateSimilarSecurityEventsQueryTaskResponse(const CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse & createSimilarSecurityEventsQueryTaskResponse) { DARABONBA_PTR_SET_VALUE(createSimilarSecurityEventsQueryTaskResponse_, createSimilarSecurityEventsQueryTaskResponse) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setCreateSimilarSecurityEventsQueryTaskResponse(CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse && createSimilarSecurityEventsQueryTaskResponse) { DARABONBA_PTR_SET_RVALUE(createSimilarSecurityEventsQueryTaskResponse_, createSimilarSecurityEventsQueryTaskResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSimilarSecurityEventsQueryTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the task that queries alert events of the same alert type.
    shared_ptr<CreateSimilarSecurityEventsQueryTaskResponseBody::CreateSimilarSecurityEventsQueryTaskResponse> createSimilarSecurityEventsQueryTaskResponse_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
