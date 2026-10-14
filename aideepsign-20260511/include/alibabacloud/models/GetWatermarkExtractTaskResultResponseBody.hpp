// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKEXTRACTTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKEXTRACTTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetWatermarkExtractTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkExtractTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgAcc, avgAcc_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Detected, detected_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WatermarkContent, watermarkContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkExtractTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgAcc, avgAcc_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Detected, detected_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WatermarkContent, watermarkContent_);
    };
    GetWatermarkExtractTaskResultResponseBody() = default ;
    GetWatermarkExtractTaskResultResponseBody(const GetWatermarkExtractTaskResultResponseBody &) = default ;
    GetWatermarkExtractTaskResultResponseBody(GetWatermarkExtractTaskResultResponseBody &&) = default ;
    GetWatermarkExtractTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkExtractTaskResultResponseBody() = default ;
    GetWatermarkExtractTaskResultResponseBody& operator=(const GetWatermarkExtractTaskResultResponseBody &) = default ;
    GetWatermarkExtractTaskResultResponseBody& operator=(GetWatermarkExtractTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgAcc_ == nullptr
        && this->code_ == nullptr && this->detected_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->watermarkContent_ == nullptr; };
    // avgAcc Field Functions 
    bool hasAvgAcc() const { return this->avgAcc_ != nullptr;};
    void deleteAvgAcc() { this->avgAcc_ = nullptr;};
    inline double getAvgAcc() const { DARABONBA_PTR_GET_DEFAULT(avgAcc_, 0.0) };
    inline GetWatermarkExtractTaskResultResponseBody& setAvgAcc(double avgAcc) { DARABONBA_PTR_SET_VALUE(avgAcc_, avgAcc) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detected Field Functions 
    bool hasDetected() const { return this->detected_ != nullptr;};
    void deleteDetected() { this->detected_ = nullptr;};
    inline bool getDetected() const { DARABONBA_PTR_GET_DEFAULT(detected_, false) };
    inline GetWatermarkExtractTaskResultResponseBody& setDetected(bool detected) { DARABONBA_PTR_SET_VALUE(detected_, detected) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWatermarkExtractTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWatermarkExtractTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // watermarkContent Field Functions 
    bool hasWatermarkContent() const { return this->watermarkContent_ != nullptr;};
    void deleteWatermarkContent() { this->watermarkContent_ = nullptr;};
    inline string getWatermarkContent() const { DARABONBA_PTR_GET_DEFAULT(watermarkContent_, "") };
    inline GetWatermarkExtractTaskResultResponseBody& setWatermarkContent(string watermarkContent) { DARABONBA_PTR_SET_VALUE(watermarkContent_, watermarkContent) };


  protected:
    // The average extraction confidence, ranging from 0 to 1. This parameter is returned only when Status is succeeded.
    shared_ptr<double> avgAcc_ {};
    // The business error code. OK is returned if the request is successful.
    shared_ptr<string> code_ {};
    // Indicates whether a watermark is detected.
    shared_ptr<bool> detected_ {};
    // The HTTP status code. 200 is returned if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The failure reason when the task fails. This parameter is returned only when Status is failed.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The task status. Valid values:
    // - running: In progress.
    // - succeeded: Completed.
    // - failed: Failed.
    shared_ptr<string> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The dark watermark extraction task ID.
    shared_ptr<string> taskId_ {};
    // The extracted watermark content. This parameter is returned only when `Status` is `succeeded` and `Detected=true`.
    shared_ptr<string> watermarkContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
