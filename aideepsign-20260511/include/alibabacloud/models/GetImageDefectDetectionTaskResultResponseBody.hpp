// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDEFECTDETECTIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDEFECTDETECTIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetImageDefectDetectionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDefectDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalityReason, abnormalityReason_);
      DARABONBA_PTR_TO_JSON(AbnormalityScore, abnormalityScore_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDefectDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalityReason, abnormalityReason_);
      DARABONBA_PTR_FROM_JSON(AbnormalityScore, abnormalityScore_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetImageDefectDetectionTaskResultResponseBody() = default ;
    GetImageDefectDetectionTaskResultResponseBody(const GetImageDefectDetectionTaskResultResponseBody &) = default ;
    GetImageDefectDetectionTaskResultResponseBody(GetImageDefectDetectionTaskResultResponseBody &&) = default ;
    GetImageDefectDetectionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDefectDetectionTaskResultResponseBody() = default ;
    GetImageDefectDetectionTaskResultResponseBody& operator=(const GetImageDefectDetectionTaskResultResponseBody &) = default ;
    GetImageDefectDetectionTaskResultResponseBody& operator=(GetImageDefectDetectionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalityReason_ == nullptr
        && this->abnormalityScore_ == nullptr && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->result_ == nullptr && this->riskCode_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // abnormalityReason Field Functions 
    bool hasAbnormalityReason() const { return this->abnormalityReason_ != nullptr;};
    void deleteAbnormalityReason() { this->abnormalityReason_ = nullptr;};
    inline string getAbnormalityReason() const { DARABONBA_PTR_GET_DEFAULT(abnormalityReason_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setAbnormalityReason(string abnormalityReason) { DARABONBA_PTR_SET_VALUE(abnormalityReason_, abnormalityReason) };


    // abnormalityScore Field Functions 
    bool hasAbnormalityScore() const { return this->abnormalityScore_ != nullptr;};
    void deleteAbnormalityScore() { this->abnormalityScore_ = nullptr;};
    inline float getAbnormalityScore() const { DARABONBA_PTR_GET_DEFAULT(abnormalityScore_, 0.0) };
    inline GetImageDefectDetectionTaskResultResponseBody& setAbnormalityScore(float abnormalityScore) { DARABONBA_PTR_SET_VALUE(abnormalityScore_, abnormalityScore) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetImageDefectDetectionTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageDefectDetectionTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetImageDefectDetectionTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // **The image abnormality reason.** This field is returned only when `Status` is `succeeded`.
    shared_ptr<string> abnormalityReason_ {};
    // **The image abnormality score.** The value ranges from 0 to 1. A higher value indicates a more severe image abnormality. This field is returned only when `Status` is `succeeded`.
    shared_ptr<float> abnormalityScore_ {};
    // **The business error code.** The value "OK" is returned for successful requests.
    shared_ptr<string> code_ {};
    // **The HTTP status code.** The value 200 is returned for successful requests.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The failure reason. This field is returned only when `Status` is `failed`.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The raw downstream detection result (JSON string). The `AbnormalityScore` and `AbnormalityReason` fields are parsed from this raw result. The raw result is retained for debugging and passing through newly added upstream fields.
    shared_ptr<string> result_ {};
    // The risk code. **This field is deprecated and has no meaning.** Determine whether an abnormality exists based on the AbnormalityScore, AbnormalityReason, and Result fields.
    shared_ptr<string> riskCode_ {};
    // **The task status.** Valid values:
    // - `running`: The task is running.
    // - `succeeded`: The task is completed.
    // - `failed`: The task failed.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // **The task ID.**
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
