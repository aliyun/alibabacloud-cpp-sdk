// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody(DescribePipelineResponseBody &&) = default ;
    DescribePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody& operator=(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody& operator=(DescribePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CoStatus, coStatus_);
        DARABONBA_PTR_TO_JSON(CurrentStageId, currentStageId_);
        DARABONBA_PTR_TO_JSON(NextPipelineId, nextPipelineId_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(PipelineStatus, pipelineStatus_);
        DARABONBA_PTR_TO_JSON(ShowBatch, showBatch_);
        DARABONBA_PTR_TO_JSON(StageList, stageList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CoStatus, coStatus_);
        DARABONBA_PTR_FROM_JSON(CurrentStageId, currentStageId_);
        DARABONBA_PTR_FROM_JSON(NextPipelineId, nextPipelineId_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(PipelineStatus, pipelineStatus_);
        DARABONBA_PTR_FROM_JSON(ShowBatch, showBatch_);
        DARABONBA_PTR_FROM_JSON(StageList, stageList_);
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
      class StageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StageList& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutorType, executorType_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskList, taskList_);
        };
        friend void from_json(const Darabonba::Json& j, StageList& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutorType, executorType_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
        };
        StageList() = default ;
        StageList(const StageList &) = default ;
        StageList(StageList &&) = default ;
        StageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StageList() = default ;
        StageList& operator=(const StageList &) = default ;
        StageList& operator=(StageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorIgnore, errorIgnore_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(ShowManualIgnore, showManualIgnore_);
            DARABONBA_PTR_TO_JSON(StageId, stageId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          };
          friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorIgnore, errorIgnore_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(ShowManualIgnore, showManualIgnore_);
            DARABONBA_PTR_FROM_JSON(StageId, stageId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          };
          TaskList() = default ;
          TaskList(const TaskList &) = default ;
          TaskList(TaskList &&) = default ;
          TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskList() = default ;
          TaskList& operator=(const TaskList &) = default ;
          TaskList& operator=(TaskList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorIgnore_ == nullptr && this->errorMessage_ == nullptr && this->message_ == nullptr && this->showManualIgnore_ == nullptr && this->stageId_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline TaskList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorIgnore Field Functions 
          bool hasErrorIgnore() const { return this->errorIgnore_ != nullptr;};
          void deleteErrorIgnore() { this->errorIgnore_ = nullptr;};
          inline int32_t getErrorIgnore() const { DARABONBA_PTR_GET_DEFAULT(errorIgnore_, 0) };
          inline TaskList& setErrorIgnore(int32_t errorIgnore) { DARABONBA_PTR_SET_VALUE(errorIgnore_, errorIgnore) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline TaskList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline TaskList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // showManualIgnore Field Functions 
          bool hasShowManualIgnore() const { return this->showManualIgnore_ != nullptr;};
          void deleteShowManualIgnore() { this->showManualIgnore_ = nullptr;};
          inline bool getShowManualIgnore() const { DARABONBA_PTR_GET_DEFAULT(showManualIgnore_, false) };
          inline TaskList& setShowManualIgnore(bool showManualIgnore) { DARABONBA_PTR_SET_VALUE(showManualIgnore_, showManualIgnore) };


          // stageId Field Functions 
          bool hasStageId() const { return this->stageId_ != nullptr;};
          void deleteStageId() { this->stageId_ = nullptr;};
          inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
          inline TaskList& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline TaskList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // taskName Field Functions 
          bool hasTaskName() const { return this->taskName_ != nullptr;};
          void deleteTaskName() { this->taskName_ = nullptr;};
          inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
          inline TaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        protected:
          // The error code returned when the task could not be executed. If the task is successfully executed, this parameter is not returned.
          shared_ptr<string> errorCode_ {};
          // Indicates whether to execute the subsequent tasks when the task failed. Valid values:
          // 
          // *   **0**: The subsequent tasks cannot be executed.
          // *   **1**: The subsequent tasks can be executed.
          shared_ptr<int32_t> errorIgnore_ {};
          // The error message returned when the task could not be executed. If the task is successfully executed, this parameter is not returned.
          shared_ptr<string> errorMessage_ {};
          // The returned message indicating the task execution result.
          shared_ptr<string> message_ {};
          // Indicates whether a running task can be manually skipped. Valid values:
          // 
          // *   **true**: The running task can be skipped.
          // *   **false**: The zone does not allow you to change the network type of an ApsaraDB for Redis instance from classic network to VPC.
          shared_ptr<bool> showManualIgnore_ {};
          // The ID of the stage.
          shared_ptr<string> stageId_ {};
          // The task status. Valid values:
          // 
          // *   **0**: The task is prepared for execution.
          // *   **1**: The task is being executed.
          // *   **2**: successful
          // *   **3**: The task could not be executed.
          // *   **5**: The task is pending retry.
          // *   **6**: The task was terminated.
          shared_ptr<int32_t> status_ {};
          // The ID of the task.
          shared_ptr<string> taskId_ {};
          // The name of the task.
          shared_ptr<string> taskName_ {};
        };

        virtual bool empty() const override { return this->executorType_ == nullptr
        && this->stageId_ == nullptr && this->stageName_ == nullptr && this->status_ == nullptr && this->taskList_ == nullptr; };
        // executorType Field Functions 
        bool hasExecutorType() const { return this->executorType_ != nullptr;};
        void deleteExecutorType() { this->executorType_ = nullptr;};
        inline int32_t getExecutorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, 0) };
        inline StageList& setExecutorType(int32_t executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline StageList& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline StageList& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline StageList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskList Field Functions 
        bool hasTaskList() const { return this->taskList_ != nullptr;};
        void deleteTaskList() { this->taskList_ = nullptr;};
        inline const vector<StageList::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<StageList::TaskList>) };
        inline vector<StageList::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<StageList::TaskList>) };
        inline StageList& setTaskList(const vector<StageList::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
        inline StageList& setTaskList(vector<StageList::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


      protected:
        // The execution type of the stage. Valid values:
        // 
        // *   **0**: in sequence.
        // *   **1**: in parallel.
        shared_ptr<int32_t> executorType_ {};
        // The ID of the stage.
        shared_ptr<string> stageId_ {};
        // The name of the stage.
        shared_ptr<string> stageName_ {};
        // The status of the batch processing stage. Valid values:
        // 
        // *   **0**: The batch is prepared for this processing stage.
        // *   **1**: The task is being executed.
        // *   **2**: successful
        // *   **3**: The processing failed in this stage.
        // *   **6**: The processing stage was terminated.
        shared_ptr<int32_t> status_ {};
        // The list of task statuses.
        shared_ptr<vector<StageList::TaskList>> taskList_ {};
      };

      virtual bool empty() const override { return this->coStatus_ == nullptr
        && this->currentStageId_ == nullptr && this->nextPipelineId_ == nullptr && this->pipelineId_ == nullptr && this->pipelineName_ == nullptr && this->pipelineStatus_ == nullptr
        && this->showBatch_ == nullptr && this->stageList_ == nullptr; };
      // coStatus Field Functions 
      bool hasCoStatus() const { return this->coStatus_ != nullptr;};
      void deleteCoStatus() { this->coStatus_ = nullptr;};
      inline string getCoStatus() const { DARABONBA_PTR_GET_DEFAULT(coStatus_, "") };
      inline Data& setCoStatus(string coStatus) { DARABONBA_PTR_SET_VALUE(coStatus_, coStatus) };


      // currentStageId Field Functions 
      bool hasCurrentStageId() const { return this->currentStageId_ != nullptr;};
      void deleteCurrentStageId() { this->currentStageId_ = nullptr;};
      inline string getCurrentStageId() const { DARABONBA_PTR_GET_DEFAULT(currentStageId_, "") };
      inline Data& setCurrentStageId(string currentStageId) { DARABONBA_PTR_SET_VALUE(currentStageId_, currentStageId) };


      // nextPipelineId Field Functions 
      bool hasNextPipelineId() const { return this->nextPipelineId_ != nullptr;};
      void deleteNextPipelineId() { this->nextPipelineId_ = nullptr;};
      inline string getNextPipelineId() const { DARABONBA_PTR_GET_DEFAULT(nextPipelineId_, "") };
      inline Data& setNextPipelineId(string nextPipelineId) { DARABONBA_PTR_SET_VALUE(nextPipelineId_, nextPipelineId) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Data& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline Data& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // pipelineStatus Field Functions 
      bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
      void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
      inline int32_t getPipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, 0) };
      inline Data& setPipelineStatus(int32_t pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


      // showBatch Field Functions 
      bool hasShowBatch() const { return this->showBatch_ != nullptr;};
      void deleteShowBatch() { this->showBatch_ = nullptr;};
      inline bool getShowBatch() const { DARABONBA_PTR_GET_DEFAULT(showBatch_, false) };
      inline Data& setShowBatch(bool showBatch) { DARABONBA_PTR_SET_VALUE(showBatch_, showBatch) };


      // stageList Field Functions 
      bool hasStageList() const { return this->stageList_ != nullptr;};
      void deleteStageList() { this->stageList_ = nullptr;};
      inline const vector<Data::StageList> & getStageList() const { DARABONBA_PTR_GET_CONST(stageList_, vector<Data::StageList>) };
      inline vector<Data::StageList> getStageList() { DARABONBA_PTR_GET(stageList_, vector<Data::StageList>) };
      inline Data& setStageList(const vector<Data::StageList> & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
      inline Data& setStageList(vector<Data::StageList> && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


    protected:
      // The status of the change order for the batch.
      shared_ptr<string> coStatus_ {};
      // The ID of the batch processing stage.
      shared_ptr<string> currentStageId_ {};
      // The ID of the next batch.
      shared_ptr<string> nextPipelineId_ {};
      // The ID of the batch.
      shared_ptr<string> pipelineId_ {};
      // The name of the batch.
      shared_ptr<string> pipelineName_ {};
      // The batch status. Valid values:
      // 
      // *   **0**: The batch is prepared for processing.
      // *   **1**: The task is being executed.
      // *   **2**: successful
      // *   **3**: The processing failed in this stage.
      // *   **6**: The batch processing was terminated.
      // *   **10**: The batch could not be processed due to a system exception.
      shared_ptr<int32_t> pipelineStatus_ {};
      // Indicates whether to start processing the next batch. Valid values:
      // 
      // *   **false**: indicates that the next batch cannot be processed yet.
      // *   **true**: indicates that the next batch can be processed now.
      shared_ptr<bool> showBatch_ {};
      // The list of batch processing stages.
      shared_ptr<vector<Data::StageList>> stageList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePipelineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePipelineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePipelineResponseBody::Data) };
    inline DescribePipelineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePipelineResponseBody::Data) };
    inline DescribePipelineResponseBody& setData(const DescribePipelineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePipelineResponseBody& setData(DescribePipelineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribePipelineResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePipelineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePipelineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePipelineResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The batch information.
    shared_ptr<DescribePipelineResponseBody::Data> data_ {};
    // The error code returned if the request failed. Take note of the following rules:
    // 
    // *   The **ErrorCode** parameter is not returned if the request succeeds.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned for the operation.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the batch information was obtained. Valid values:
    // 
    // *   **true**: The information was queried.
    // *   **false**: The image failed to be found.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
