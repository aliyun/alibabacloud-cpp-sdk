// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(resourcePath, resourcePath_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskAction, taskAction_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(resourcePath, resourcePath_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskAction, taskAction_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code.
        shared_ptr<string> code_ {};
        // The error message.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->error_ == nullptr && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourcePath_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->taskAction_ == nullptr && this->taskId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Task::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Task::Error) };
      inline Task::Error getError() { DARABONBA_PTR_GET(error_, Task::Error) };
      inline Task& setError(const Task::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Task& setError(Task::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Task& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Task& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Task& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourcePath Field Functions 
      bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
      void deleteResourcePath() { this->resourcePath_ = nullptr;};
      inline string getResourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
      inline Task& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Task& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskAction Field Functions 
      bool hasTaskAction() const { return this->taskAction_ != nullptr;};
      void deleteTaskAction() { this->taskAction_ = nullptr;};
      inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
      inline Task& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The error returned for the task.
      shared_ptr<Task::Error> error_ {};
      // The code of the service.
      shared_ptr<string> product_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The path of the resources. The relative resource ID. The resource path contains the complete resource location (parent resource/child resource).
      shared_ptr<string> resourcePath_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The task state.
      // 
      // Pending
      // 
      // Running
      // 
      // Succeeded
      // 
      // Failed
      // 
      // Cancelling
      // 
      // Cancelled.
      shared_ptr<string> status_ {};
      // The type of the task operation. Valid values: Create, Update, and Delete.
      shared_ptr<string> taskAction_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody& setTask(const GetTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetTaskResponseBody& setTask(GetTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The ID of a request.
    shared_ptr<string> requestId_ {};
    // The information about the task.
    shared_ptr<GetTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
