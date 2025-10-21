// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SafeAnswer, safeAnswer_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceInfo, traceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SafeAnswer, safeAnswer_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceInfo, traceInfo_);
    };
    ModelInputContentSyncDetectResponseBody() = default ;
    ModelInputContentSyncDetectResponseBody(const ModelInputContentSyncDetectResponseBody &) = default ;
    ModelInputContentSyncDetectResponseBody(ModelInputContentSyncDetectResponseBody &&) = default ;
    ModelInputContentSyncDetectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectResponseBody() = default ;
    ModelInputContentSyncDetectResponseBody& operator=(const ModelInputContentSyncDetectResponseBody &) = default ;
    ModelInputContentSyncDetectResponseBody& operator=(ModelInputContentSyncDetectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->riskResult_ == nullptr && return this->safeAnswer_ == nullptr
        && return this->success_ == nullptr && return this->traceInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModelInputContentSyncDetectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelInputContentSyncDetectResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModelInputContentSyncDetectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelInputContentSyncDetectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelInputContentSyncDetectResponseBody& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // safeAnswer Field Functions 
    bool hasSafeAnswer() const { return this->safeAnswer_ != nullptr;};
    void deleteSafeAnswer() { this->safeAnswer_ = nullptr;};
    inline string safeAnswer() const { DARABONBA_PTR_GET_DEFAULT(safeAnswer_, "") };
    inline ModelInputContentSyncDetectResponseBody& setSafeAnswer(string safeAnswer) { DARABONBA_PTR_SET_VALUE(safeAnswer_, safeAnswer) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelInputContentSyncDetectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceInfo Field Functions 
    bool hasTraceInfo() const { return this->traceInfo_ != nullptr;};
    void deleteTraceInfo() { this->traceInfo_ = nullptr;};
    inline const ModelInputContentSyncDetectResponseBodyTraceInfo & traceInfo() const { DARABONBA_PTR_GET_CONST(traceInfo_, ModelInputContentSyncDetectResponseBodyTraceInfo) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfo traceInfo() { DARABONBA_PTR_GET(traceInfo_, ModelInputContentSyncDetectResponseBodyTraceInfo) };
    inline ModelInputContentSyncDetectResponseBody& setTraceInfo(const ModelInputContentSyncDetectResponseBodyTraceInfo & traceInfo) { DARABONBA_PTR_SET_VALUE(traceInfo_, traceInfo) };
    inline ModelInputContentSyncDetectResponseBody& setTraceInfo(ModelInputContentSyncDetectResponseBodyTraceInfo && traceInfo) { DARABONBA_PTR_SET_RVALUE(traceInfo_, traceInfo) };


  protected:
    // Result code, 00000 indicates success; others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    // HTTP status code
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Error message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    std::shared_ptr<string> safeAnswer_ = nullptr;
    // Whether the operation was successful. true indicates success, false indicates failure.
    std::shared_ptr<bool> success_ = nullptr;
    // Inspection result
    std::shared_ptr<ModelInputContentSyncDetectResponseBodyTraceInfo> traceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
