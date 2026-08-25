// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOFTWARELIBDISTRIBUTETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESOFTWARELIBDISTRIBUTETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateSoftwarelibDistributeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoftwarelibDistributeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoftwarelibDistributeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    CreateSoftwarelibDistributeTaskResponseBody() = default ;
    CreateSoftwarelibDistributeTaskResponseBody(const CreateSoftwarelibDistributeTaskResponseBody &) = default ;
    CreateSoftwarelibDistributeTaskResponseBody(CreateSoftwarelibDistributeTaskResponseBody &&) = default ;
    CreateSoftwarelibDistributeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoftwarelibDistributeTaskResponseBody() = default ;
    CreateSoftwarelibDistributeTaskResponseBody& operator=(const CreateSoftwarelibDistributeTaskResponseBody &) = default ;
    CreateSoftwarelibDistributeTaskResponseBody& operator=(CreateSoftwarelibDistributeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportOs, supportOs_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportOs, supportOs_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->name_ == nullptr && this->softwareName_ == nullptr && this->status_ == nullptr && this->supportOs_ == nullptr && this->taskId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // softwareName Field Functions 
      bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
      void deleteSoftwareName() { this->softwareName_ = nullptr;};
      inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
      inline Task& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportOs Field Functions 
      bool hasSupportOs() const { return this->supportOs_ != nullptr;};
      void deleteSupportOs() { this->supportOs_ = nullptr;};
      inline string getSupportOs() const { DARABONBA_PTR_GET_DEFAULT(supportOs_, "") };
      inline Task& setSupportOs(string supportOs) { DARABONBA_PTR_SET_VALUE(supportOs_, supportOs) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The task creation time as a second-level UNIX timestamp.
      shared_ptr<string> createTime_ {};
      // The task name.
      shared_ptr<string> name_ {};
      // The software name.
      shared_ptr<string> softwareName_ {};
      // The task status. Valid values:
      // - **enabled**: enabled.
      // - **disabled**: disabled.
      // 
      // The initial status of a task after creation is disabled.
      shared_ptr<string> status_ {};
      // The operating system to which the task applies. Valid values:
      // - **Windows**: Windows.
      // - **Mac(Apple)**: macOS with Apple silicon.
      // - **Mac(Intel)**: macOS with Intel processors.
      shared_ptr<string> supportOs_ {};
      // The task ID, which is used to query the task execution result.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSoftwarelibDistributeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const CreateSoftwarelibDistributeTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, CreateSoftwarelibDistributeTaskResponseBody::Task) };
    inline CreateSoftwarelibDistributeTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, CreateSoftwarelibDistributeTaskResponseBody::Task) };
    inline CreateSoftwarelibDistributeTaskResponseBody& setTask(const CreateSoftwarelibDistributeTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline CreateSoftwarelibDistributeTaskResponseBody& setTask(CreateSoftwarelibDistributeTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The information about the created task.
    shared_ptr<CreateSoftwarelibDistributeTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
