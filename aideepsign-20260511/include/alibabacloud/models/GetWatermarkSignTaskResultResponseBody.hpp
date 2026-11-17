// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKSIGNTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKSIGNTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetWatermarkSignTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkSignTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignedFileUrl, signedFileUrl_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkSignTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignedFileUrl, signedFileUrl_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetWatermarkSignTaskResultResponseBody() = default ;
    GetWatermarkSignTaskResultResponseBody(const GetWatermarkSignTaskResultResponseBody &) = default ;
    GetWatermarkSignTaskResultResponseBody(GetWatermarkSignTaskResultResponseBody &&) = default ;
    GetWatermarkSignTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkSignTaskResultResponseBody() = default ;
    GetWatermarkSignTaskResultResponseBody& operator=(const GetWatermarkSignTaskResultResponseBody &) = default ;
    GetWatermarkSignTaskResultResponseBody& operator=(GetWatermarkSignTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->objectKey_ == nullptr
        && this->requestId_ == nullptr && this->signedFileUrl_ == nullptr && this->stage_ == nullptr && this->status_ == nullptr && this->success_ == nullptr
        && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWatermarkSignTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signedFileUrl Field Functions 
    bool hasSignedFileUrl() const { return this->signedFileUrl_ != nullptr;};
    void deleteSignedFileUrl() { this->signedFileUrl_ = nullptr;};
    inline string getSignedFileUrl() const { DARABONBA_PTR_GET_DEFAULT(signedFileUrl_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setSignedFileUrl(string signedFileUrl) { DARABONBA_PTR_SET_VALUE(signedFileUrl_, signedFileUrl) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWatermarkSignTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWatermarkSignTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The **business error code**. `"OK"` is returned when the request succeeds.
    shared_ptr<string> code_ {};
    // The error code of the task. This parameter is returned when Status is set to FAILED.
    shared_ptr<string> errorCode_ {};
    // The error message of the task. This parameter is returned under the same conditions as ErrorCode.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned when the task fails.
    shared_ptr<string> message_ {};
    // The destination object key returned when the signing result is written to the user\\"s bucket. This parameter is returned only when the task succeeds.
    shared_ptr<string> objectKey_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The temporary download URL of the signed file. This parameter is returned when the task succeeds in internal bucket mode.
    shared_ptr<string> signedFileUrl_ {};
    // The current processing stage. Valid values:
    // - WATERMARK: Invisible watermark embedding.
    // - SIGNING: C2PA signing.
    shared_ptr<string> stage_ {};
    // The status of the task. Valid values:
    // - PROCESSING: The task is being processed.
    // - SUCCEEDED: The task succeeded. This is a final state.
    // - FAILED: The task failed. This is a final state.
    // - CANCELED: The task was canceled. This is a final state.
    shared_ptr<string> status_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
    // The ID of the combined task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
