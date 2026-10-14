// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETC2PASIGNRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETC2PASIGNRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetC2paSignResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetC2paSignResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReportFileUrl, reportFileUrl_);
      DARABONBA_PTR_TO_JSON(ReportObjectKey, reportObjectKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignedFileUrl, signedFileUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SucceededCount, succeededCount_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetC2paSignResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReportFileUrl, reportFileUrl_);
      DARABONBA_PTR_FROM_JSON(ReportObjectKey, reportObjectKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignedFileUrl, signedFileUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SucceededCount, succeededCount_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetC2paSignResultResponseBody() = default ;
    GetC2paSignResultResponseBody(const GetC2paSignResultResponseBody &) = default ;
    GetC2paSignResultResponseBody(GetC2paSignResultResponseBody &&) = default ;
    GetC2paSignResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetC2paSignResultResponseBody() = default ;
    GetC2paSignResultResponseBody& operator=(const GetC2paSignResultResponseBody &) = default ;
    GetC2paSignResultResponseBody& operator=(GetC2paSignResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->failedCount_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->reportFileUrl_ == nullptr && this->reportObjectKey_ == nullptr && this->requestId_ == nullptr && this->signedFileUrl_ == nullptr && this->status_ == nullptr
        && this->succeededCount_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetC2paSignResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetC2paSignResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetC2paSignResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline GetC2paSignResultResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetC2paSignResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetC2paSignResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reportFileUrl Field Functions 
    bool hasReportFileUrl() const { return this->reportFileUrl_ != nullptr;};
    void deleteReportFileUrl() { this->reportFileUrl_ = nullptr;};
    inline string getReportFileUrl() const { DARABONBA_PTR_GET_DEFAULT(reportFileUrl_, "") };
    inline GetC2paSignResultResponseBody& setReportFileUrl(string reportFileUrl) { DARABONBA_PTR_SET_VALUE(reportFileUrl_, reportFileUrl) };


    // reportObjectKey Field Functions 
    bool hasReportObjectKey() const { return this->reportObjectKey_ != nullptr;};
    void deleteReportObjectKey() { this->reportObjectKey_ = nullptr;};
    inline string getReportObjectKey() const { DARABONBA_PTR_GET_DEFAULT(reportObjectKey_, "") };
    inline GetC2paSignResultResponseBody& setReportObjectKey(string reportObjectKey) { DARABONBA_PTR_SET_VALUE(reportObjectKey_, reportObjectKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetC2paSignResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signedFileUrl Field Functions 
    bool hasSignedFileUrl() const { return this->signedFileUrl_ != nullptr;};
    void deleteSignedFileUrl() { this->signedFileUrl_ = nullptr;};
    inline string getSignedFileUrl() const { DARABONBA_PTR_GET_DEFAULT(signedFileUrl_, "") };
    inline GetC2paSignResultResponseBody& setSignedFileUrl(string signedFileUrl) { DARABONBA_PTR_SET_VALUE(signedFileUrl_, signedFileUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetC2paSignResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // succeededCount Field Functions 
    bool hasSucceededCount() const { return this->succeededCount_ != nullptr;};
    void deleteSucceededCount() { this->succeededCount_ = nullptr;};
    inline int64_t getSucceededCount() const { DARABONBA_PTR_GET_DEFAULT(succeededCount_, 0L) };
    inline GetC2paSignResultResponseBody& setSucceededCount(int64_t succeededCount) { DARABONBA_PTR_SET_VALUE(succeededCount_, succeededCount) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetC2paSignResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetC2paSignResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetC2paSignResultResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetC2paSignResultResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business error code for the API call. OK is returned when the call succeeds.
    shared_ptr<string> code_ {};
    // The error code for task failure. This parameter is returned only when Status is FAILED.
    shared_ptr<string> errorCode_ {};
    // The error message for task failure. This parameter is returned only when Status is FAILED.
    shared_ptr<string> errorMessage_ {};
    // The number of objects that failed to be signed, were skipped, or were terminated in the Bucket task. This parameter is returned only when the Bucket task is in the SUCCEEDED or CANCELED state.
    shared_ptr<int64_t> failedCount_ {};
    // The HTTP status code. 200 is returned when the API call succeeds.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The additional information. success is returned when the API call succeeds.
    shared_ptr<string> message_ {};
    // The temporary download URL returned when a Bucket task enters the CANCELED state and the JSON report is successfully generated. The report covers only the objects discovered before termination.
    shared_ptr<string> reportFileUrl_ {};
    // The object key of the final standard JSON report for the Bucket task. This parameter is returned only when the Bucket task succeeds.
    shared_ptr<string> reportObjectKey_ {};
    // The request ID of the OpenAPI call.
    shared_ptr<string> requestId_ {};
    // The temporary download URL of the signature file. This parameter is returned only when Status is SUCCEEDED.
    shared_ptr<string> signedFileUrl_ {};
    // The task status. Valid values: PROCESSING, SUCCEEDED, and FAILED.
    shared_ptr<string> status_ {};
    // The number of successfully signed objects in the Bucket task. This parameter is returned only when the Bucket task is in the SUCCEEDED or CANCELED state.
    shared_ptr<int64_t> succeededCount_ {};
    // Indicates whether the query call is successful. This value may still be true even if the task itself fails.
    shared_ptr<bool> success_ {};
    // The C2PA signing task ID.
    shared_ptr<string> taskId_ {};
    // The task type. Valid values: FILE and BUCKET.
    shared_ptr<string> taskType_ {};
    // The total number of objects scanned by the Bucket task. This parameter is returned only when the Bucket task is in the SUCCEEDED or CANCELED state.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
