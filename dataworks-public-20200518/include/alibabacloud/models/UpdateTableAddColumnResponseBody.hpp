// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableAddColumnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableAddColumnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableAddColumnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    UpdateTableAddColumnResponseBody() = default ;
    UpdateTableAddColumnResponseBody(const UpdateTableAddColumnResponseBody &) = default ;
    UpdateTableAddColumnResponseBody(UpdateTableAddColumnResponseBody &&) = default ;
    UpdateTableAddColumnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableAddColumnResponseBody() = default ;
    UpdateTableAddColumnResponseBody& operator=(const UpdateTableAddColumnResponseBody &) = default ;
    UpdateTableAddColumnResponseBody& operator=(UpdateTableAddColumnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(NextTaskId, nextTaskId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(NextTaskId, nextTaskId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->nextTaskId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline TaskInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // nextTaskId Field Functions 
      bool hasNextTaskId() const { return this->nextTaskId_ != nullptr;};
      void deleteNextTaskId() { this->nextTaskId_ = nullptr;};
      inline string getNextTaskId() const { DARABONBA_PTR_GET_DEFAULT(nextTaskId_, "") };
      inline TaskInfo& setNextTaskId(string nextTaskId) { DARABONBA_PTR_SET_VALUE(nextTaskId_, nextTaskId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The detailed execution status of the current subtask:
      // - If the execution succeeds, "success" is returned.
      // - If the execution fails, the corresponding error details are returned.
      shared_ptr<string> content_ {};
      // The ID of the subtask to be executed next. If this field is empty, all subtasks have been completed.
      shared_ptr<string> nextTaskId_ {};
      // The status of the current subtask. Valid values:
      // - operating: The subtask is being executed.
      // - success: The subtask is executed.
      // - failure: The subtask failed to be executed. For detailed error information, see the Content parameter.
      shared_ptr<string> status_ {};
      // The ID of the current subtask.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTableAddColumnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const UpdateTableAddColumnResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, UpdateTableAddColumnResponseBody::TaskInfo) };
    inline UpdateTableAddColumnResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, UpdateTableAddColumnResponseBody::TaskInfo) };
    inline UpdateTableAddColumnResponseBody& setTaskInfo(const UpdateTableAddColumnResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline UpdateTableAddColumnResponseBody& setTaskInfo(UpdateTableAddColumnResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the request task.
    // 
    // After the request task is submitted, it is divided into multiple subtasks that are executed in sequence. The next subtask is executed only after the current subtask succeeds. The request task ends when all subtasks are completed. The request task terminates in the following situations. You must resolve the issue based on the error code and resubmit the request task:
    // - The request task fails to be submitted.
    // - After the request task is submitted, any subtask fails.
    shared_ptr<UpdateTableAddColumnResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
