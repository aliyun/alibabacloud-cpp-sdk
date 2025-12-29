// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAsyncTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody(ListAsyncTasksResponseBody &&) = default ;
    ListAsyncTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody& operator=(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody& operator=(ListAsyncTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
        DARABONBA_PTR_TO_JSON(TaskDefinition, taskDefinition_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_TO_JSON(TaskExecuteTime, taskExecuteTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskInnerErrorMessage, taskInnerErrorMessage_);
        DARABONBA_PTR_TO_JSON(TaskIntermediateResult, taskIntermediateResult_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
        DARABONBA_PTR_TO_JSON(TaskProgressMessage, taskProgressMessage_);
        DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_TO_JSON(TaskRetryCount, taskRetryCount_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
        DARABONBA_PTR_FROM_JSON(TaskDefinition, taskDefinition_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TaskExecuteTime, taskExecuteTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskInnerErrorMessage, taskInnerErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TaskIntermediateResult, taskIntermediateResult_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
        DARABONBA_PTR_FROM_JSON(TaskProgressMessage, taskProgressMessage_);
        DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_FROM_JSON(TaskRetryCount, taskRetryCount_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->id_ == nullptr && this->taskCode_ == nullptr && this->taskDefinition_ == nullptr && this->taskEndTime_ == nullptr
        && this->taskErrorMessage_ == nullptr && this->taskExecuteTime_ == nullptr && this->taskId_ == nullptr && this->taskInnerErrorMessage_ == nullptr && this->taskIntermediateResult_ == nullptr
        && this->taskName_ == nullptr && this->taskParam_ == nullptr && this->taskProgressMessage_ == nullptr && this->taskResult_ == nullptr && this->taskRetryCount_ == nullptr
        && this->taskStartTime_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // taskCode Field Functions 
      bool hasTaskCode() const { return this->taskCode_ != nullptr;};
      void deleteTaskCode() { this->taskCode_ = nullptr;};
      inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
      inline Data& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


      // taskDefinition Field Functions 
      bool hasTaskDefinition() const { return this->taskDefinition_ != nullptr;};
      void deleteTaskDefinition() { this->taskDefinition_ = nullptr;};
      inline string getTaskDefinition() const { DARABONBA_PTR_GET_DEFAULT(taskDefinition_, "") };
      inline Data& setTaskDefinition(string taskDefinition) { DARABONBA_PTR_SET_VALUE(taskDefinition_, taskDefinition) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline string getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, "") };
      inline Data& setTaskEndTime(string taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskErrorMessage Field Functions 
      bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
      void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
      inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
      inline Data& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


      // taskExecuteTime Field Functions 
      bool hasTaskExecuteTime() const { return this->taskExecuteTime_ != nullptr;};
      void deleteTaskExecuteTime() { this->taskExecuteTime_ = nullptr;};
      inline string getTaskExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(taskExecuteTime_, "") };
      inline Data& setTaskExecuteTime(string taskExecuteTime) { DARABONBA_PTR_SET_VALUE(taskExecuteTime_, taskExecuteTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskInnerErrorMessage Field Functions 
      bool hasTaskInnerErrorMessage() const { return this->taskInnerErrorMessage_ != nullptr;};
      void deleteTaskInnerErrorMessage() { this->taskInnerErrorMessage_ = nullptr;};
      inline string getTaskInnerErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskInnerErrorMessage_, "") };
      inline Data& setTaskInnerErrorMessage(string taskInnerErrorMessage) { DARABONBA_PTR_SET_VALUE(taskInnerErrorMessage_, taskInnerErrorMessage) };


      // taskIntermediateResult Field Functions 
      bool hasTaskIntermediateResult() const { return this->taskIntermediateResult_ != nullptr;};
      void deleteTaskIntermediateResult() { this->taskIntermediateResult_ = nullptr;};
      inline string getTaskIntermediateResult() const { DARABONBA_PTR_GET_DEFAULT(taskIntermediateResult_, "") };
      inline Data& setTaskIntermediateResult(string taskIntermediateResult) { DARABONBA_PTR_SET_VALUE(taskIntermediateResult_, taskIntermediateResult) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskParam Field Functions 
      bool hasTaskParam() const { return this->taskParam_ != nullptr;};
      void deleteTaskParam() { this->taskParam_ = nullptr;};
      inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
      inline Data& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


      // taskProgressMessage Field Functions 
      bool hasTaskProgressMessage() const { return this->taskProgressMessage_ != nullptr;};
      void deleteTaskProgressMessage() { this->taskProgressMessage_ = nullptr;};
      inline string getTaskProgressMessage() const { DARABONBA_PTR_GET_DEFAULT(taskProgressMessage_, "") };
      inline Data& setTaskProgressMessage(string taskProgressMessage) { DARABONBA_PTR_SET_VALUE(taskProgressMessage_, taskProgressMessage) };


      // taskResult Field Functions 
      bool hasTaskResult() const { return this->taskResult_ != nullptr;};
      void deleteTaskResult() { this->taskResult_ = nullptr;};
      inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
      inline Data& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


      // taskRetryCount Field Functions 
      bool hasTaskRetryCount() const { return this->taskRetryCount_ != nullptr;};
      void deleteTaskRetryCount() { this->taskRetryCount_ = nullptr;};
      inline string getTaskRetryCount() const { DARABONBA_PTR_GET_DEFAULT(taskRetryCount_, "") };
      inline Data& setTaskRetryCount(string taskRetryCount) { DARABONBA_PTR_SET_VALUE(taskRetryCount_, taskRetryCount) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
      inline Data& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline Data& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUser Field Functions 
      bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
      void deleteUpdateUser() { this->updateUser_ = nullptr;};
      inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
      inline Data& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> taskCode_ {};
      shared_ptr<string> taskDefinition_ {};
      shared_ptr<string> taskEndTime_ {};
      shared_ptr<string> taskErrorMessage_ {};
      shared_ptr<string> taskExecuteTime_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskInnerErrorMessage_ {};
      shared_ptr<string> taskIntermediateResult_ {};
      shared_ptr<string> taskName_ {};
      shared_ptr<string> taskParam_ {};
      shared_ptr<string> taskProgressMessage_ {};
      shared_ptr<string> taskResult_ {};
      shared_ptr<string> taskRetryCount_ {};
      shared_ptr<string> taskStartTime_ {};
      shared_ptr<int32_t> taskStatus_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> updateUser_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->size_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAsyncTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListAsyncTasksResponseBody& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAsyncTasksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAsyncTasksResponseBody::Data>) };
    inline vector<ListAsyncTasksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAsyncTasksResponseBody::Data>) };
    inline ListAsyncTasksResponseBody& setData(const vector<ListAsyncTasksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAsyncTasksResponseBody& setData(vector<ListAsyncTasksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAsyncTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAsyncTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsyncTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAsyncTasksResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAsyncTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAsyncTasksResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<vector<ListAsyncTasksResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
