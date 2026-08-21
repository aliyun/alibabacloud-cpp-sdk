// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWorkflowTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishTimeUtc, finishTimeUtc_);
      DARABONBA_PTR_TO_JSON(GmtCreateUtc, gmtCreateUtc_);
      DARABONBA_PTR_TO_JSON(NodeResults, nodeResults_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTimeUtc, finishTimeUtc_);
      DARABONBA_PTR_FROM_JSON(GmtCreateUtc, gmtCreateUtc_);
      DARABONBA_PTR_FROM_JSON(NodeResults, nodeResults_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody(GetWorkflowTaskResponseBody &&) = default ;
    GetWorkflowTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody& operator=(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody& operator=(GetWorkflowTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->finishTimeUtc_ == nullptr && this->gmtCreateUtc_ == nullptr && this->nodeResults_ == nullptr && this->outputs_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkflowTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetWorkflowTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTimeUtc Field Functions 
    bool hasFinishTimeUtc() const { return this->finishTimeUtc_ != nullptr;};
    void deleteFinishTimeUtc() { this->finishTimeUtc_ = nullptr;};
    inline string getFinishTimeUtc() const { DARABONBA_PTR_GET_DEFAULT(finishTimeUtc_, "") };
    inline GetWorkflowTaskResponseBody& setFinishTimeUtc(string finishTimeUtc) { DARABONBA_PTR_SET_VALUE(finishTimeUtc_, finishTimeUtc) };


    // gmtCreateUtc Field Functions 
    bool hasGmtCreateUtc() const { return this->gmtCreateUtc_ != nullptr;};
    void deleteGmtCreateUtc() { this->gmtCreateUtc_ = nullptr;};
    inline string getGmtCreateUtc() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateUtc_, "") };
    inline GetWorkflowTaskResponseBody& setGmtCreateUtc(string gmtCreateUtc) { DARABONBA_PTR_SET_VALUE(gmtCreateUtc_, gmtCreateUtc) };


    // nodeResults Field Functions 
    bool hasNodeResults() const { return this->nodeResults_ != nullptr;};
    void deleteNodeResults() { this->nodeResults_ = nullptr;};
    inline string getNodeResults() const { DARABONBA_PTR_GET_DEFAULT(nodeResults_, "") };
    inline GetWorkflowTaskResponseBody& setNodeResults(string nodeResults) { DARABONBA_PTR_SET_VALUE(nodeResults_, nodeResults) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline GetWorkflowTaskResponseBody& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkflowTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWorkflowTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetWorkflowTaskResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline GetWorkflowTaskResponseBody& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The error code returned when transcoding fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when transcoding fails.
    shared_ptr<string> errorMessage_ {};
    // The time when the task was completed. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> finishTimeUtc_ {};
    // The time when the task was created. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> gmtCreateUtc_ {};
    // The node results of the workflow task. The value is in JSON format and varies based on the workflow configuration.
    shared_ptr<string> nodeResults_ {};
    // The output information.
    shared_ptr<string> outputs_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The result of this review. This indicates the current manual review result. Valid values:
    // - **running**: Running.
    // - **stopped**: Stopped.
    // - **failed**: Failed.
    // - **partial-succeeded**: Partially succeeded.
    // - **succeeded**: Succeeded.
    shared_ptr<string> status_ {};
    // The task ID used to query the refresh status.
    shared_ptr<string> taskId_ {};
    // The custom information.
    shared_ptr<string> userData_ {};
    // The workflow ID. You can log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing** > **Workflow Management** to view the ID.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
