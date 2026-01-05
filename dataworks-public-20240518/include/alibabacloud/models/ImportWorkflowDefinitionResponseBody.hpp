// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportWorkflowDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncJob, asyncJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncJob, asyncJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportWorkflowDefinitionResponseBody() = default ;
    ImportWorkflowDefinitionResponseBody(const ImportWorkflowDefinitionResponseBody &) = default ;
    ImportWorkflowDefinitionResponseBody(ImportWorkflowDefinitionResponseBody &&) = default ;
    ImportWorkflowDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowDefinitionResponseBody() = default ;
    ImportWorkflowDefinitionResponseBody& operator=(const ImportWorkflowDefinitionResponseBody &) = default ;
    ImportWorkflowDefinitionResponseBody& operator=(ImportWorkflowDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AsyncJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AsyncJob& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AsyncJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AsyncJob() = default ;
      AsyncJob(const AsyncJob &) = default ;
      AsyncJob(AsyncJob &&) = default ;
      AsyncJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AsyncJob() = default ;
      AsyncJob& operator=(const AsyncJob &) = default ;
      AsyncJob& operator=(AsyncJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completed_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->progress_ == nullptr && this->response_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // completed Field Functions 
      bool hasCompleted() const { return this->completed_ != nullptr;};
      void deleteCompleted() { this->completed_ = nullptr;};
      inline bool getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
      inline AsyncJob& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AsyncJob& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline AsyncJob& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline AsyncJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline AsyncJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline string getResponse() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
      inline AsyncJob& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AsyncJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AsyncJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether the asynchronous task is complete.
      shared_ptr<bool> completed_ {};
      // The time when the asynchronous task was created. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The error message returned if the asynchronous task fails.
      shared_ptr<string> error_ {};
      // The ID of the asynchronous task.
      shared_ptr<string> id_ {};
      // The progress of the asynchronous task. Valid values: 0 to 100.
      shared_ptr<int32_t> progress_ {};
      // The response.
      // 
      // >  The workflow ID is returned.
      shared_ptr<string> response_ {};
      // The status of the asynchronous task.
      // 
      // Valid values:
      // 
      // *   Running: The asynchronous task is running.
      // *   Success: The asynchronous task is complete.
      // *   Fail: The asynchronous task fails.
      // *   Cancel: The asynchronous task is canceled.
      shared_ptr<string> status_ {};
      // The type of the asynchronous task.
      // 
      // Valid values:
      // 
      // *   Create: The asynchronous task is used to create an object.
      // *   Cancel: The asynchronous task is used to cancel an operation.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->asyncJob_ == nullptr
        && this->requestId_ == nullptr; };
    // asyncJob Field Functions 
    bool hasAsyncJob() const { return this->asyncJob_ != nullptr;};
    void deleteAsyncJob() { this->asyncJob_ = nullptr;};
    inline const ImportWorkflowDefinitionResponseBody::AsyncJob & getAsyncJob() const { DARABONBA_PTR_GET_CONST(asyncJob_, ImportWorkflowDefinitionResponseBody::AsyncJob) };
    inline ImportWorkflowDefinitionResponseBody::AsyncJob getAsyncJob() { DARABONBA_PTR_GET(asyncJob_, ImportWorkflowDefinitionResponseBody::AsyncJob) };
    inline ImportWorkflowDefinitionResponseBody& setAsyncJob(const ImportWorkflowDefinitionResponseBody::AsyncJob & asyncJob) { DARABONBA_PTR_SET_VALUE(asyncJob_, asyncJob) };
    inline ImportWorkflowDefinitionResponseBody& setAsyncJob(ImportWorkflowDefinitionResponseBody::AsyncJob && asyncJob) { DARABONBA_PTR_SET_RVALUE(asyncJob_, asyncJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportWorkflowDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the asynchronous task.
    shared_ptr<ImportWorkflowDefinitionResponseBody::AsyncJob> asyncJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
