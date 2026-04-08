// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    UpdateTableResponseBody() = default ;
    UpdateTableResponseBody(const UpdateTableResponseBody &) = default ;
    UpdateTableResponseBody(UpdateTableResponseBody &&) = default ;
    UpdateTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableResponseBody() = default ;
    UpdateTableResponseBody& operator=(const UpdateTableResponseBody &) = default ;
    UpdateTableResponseBody& operator=(UpdateTableResponseBody &&) = default ;
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
      // The details about the status of the current subtask. Valid values:
      // 
      // *   If the current subtask is successful, success is returned.
      // *   If the current subtask fails, the error details are displayed.
      shared_ptr<string> content_ {};
      // The ID of the subtask that you want to run. If this parameter is left empty, all subtasks are complete. You can call the [GetDDLJobStatus](https://help.aliyun.com/document_detail/185659.html) operation to query the status of the subtask based on the subtask ID.
      shared_ptr<string> nextTaskId_ {};
      // The status of the current subtask. Valid values:
      // 
      // *   operating: The subtask is running.
      // *   success: The subtask succeeds.
      // *   failure: The subtask fails to run. For more information about the error details, see the Content parameter.
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
    inline UpdateTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const UpdateTableResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, UpdateTableResponseBody::TaskInfo) };
    inline UpdateTableResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, UpdateTableResponseBody::TaskInfo) };
    inline UpdateTableResponseBody& setTaskInfo(const UpdateTableResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline UpdateTableResponseBody& setTaskInfo(UpdateTableResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the request task. After a request task is submitted, it is divided into multiple subtasks that are run in sequence. After the current subtask is complete, the next subtask starts to run. After all subtasks are complete, the request task is complete. If a request task is terminated due to one of the following issues, address the issue based on the error code and initiate the request task again:
    // 
    // *   The request task fails to be submitted.
    // *   After the request task is submitted, a subtask fails to run.
    shared_ptr<UpdateTableResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
