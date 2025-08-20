// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDiagnosticResponseBodyDiagnosticResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetDiagnosticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiagnosticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_TO_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_TO_JSON(DiagnosticResult, diagnosticResult_);
      DARABONBA_PTR_TO_JSON(DiagnosticTime, diagnosticTime_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_ANY_TO_JSON(Recommends, recommends_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiagnosticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_FROM_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_FROM_JSON(DiagnosticResult, diagnosticResult_);
      DARABONBA_PTR_FROM_JSON(DiagnosticTime, diagnosticTime_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_ANY_FROM_JSON(Recommends, recommends_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDiagnosticResponseBody() = default ;
    GetDiagnosticResponseBody(const GetDiagnosticResponseBody &) = default ;
    GetDiagnosticResponseBody(GetDiagnosticResponseBody &&) = default ;
    GetDiagnosticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiagnosticResponseBody() = default ;
    GetDiagnosticResponseBody& operator=(const GetDiagnosticResponseBody &) = default ;
    GetDiagnosticResponseBody& operator=(GetDiagnosticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->diagnosticKey_ != nullptr && this->diagnosticProduct_ != nullptr && this->diagnosticResult_ != nullptr && this->diagnosticTime_ != nullptr && this->httpCode_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->recommends_ != nullptr && this->reportId_ != nullptr && this->requestId_ != nullptr
        && this->status_ != nullptr && this->statusReason_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDiagnosticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // diagnosticKey Field Functions 
    bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
    void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
    inline string diagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


    // diagnosticProduct Field Functions 
    bool hasDiagnosticProduct() const { return this->diagnosticProduct_ != nullptr;};
    void deleteDiagnosticProduct() { this->diagnosticProduct_ = nullptr;};
    inline string diagnosticProduct() const { DARABONBA_PTR_GET_DEFAULT(diagnosticProduct_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticProduct(string diagnosticProduct) { DARABONBA_PTR_SET_VALUE(diagnosticProduct_, diagnosticProduct) };


    // diagnosticResult Field Functions 
    bool hasDiagnosticResult() const { return this->diagnosticResult_ != nullptr;};
    void deleteDiagnosticResult() { this->diagnosticResult_ = nullptr;};
    inline const GetDiagnosticResponseBodyDiagnosticResult & diagnosticResult() const { DARABONBA_PTR_GET_CONST(diagnosticResult_, GetDiagnosticResponseBodyDiagnosticResult) };
    inline GetDiagnosticResponseBodyDiagnosticResult diagnosticResult() { DARABONBA_PTR_GET(diagnosticResult_, GetDiagnosticResponseBodyDiagnosticResult) };
    inline GetDiagnosticResponseBody& setDiagnosticResult(const GetDiagnosticResponseBodyDiagnosticResult & diagnosticResult) { DARABONBA_PTR_SET_VALUE(diagnosticResult_, diagnosticResult) };
    inline GetDiagnosticResponseBody& setDiagnosticResult(GetDiagnosticResponseBodyDiagnosticResult && diagnosticResult) { DARABONBA_PTR_SET_RVALUE(diagnosticResult_, diagnosticResult) };


    // diagnosticTime Field Functions 
    bool hasDiagnosticTime() const { return this->diagnosticTime_ != nullptr;};
    void deleteDiagnosticTime() { this->diagnosticTime_ = nullptr;};
    inline string diagnosticTime() const { DARABONBA_PTR_GET_DEFAULT(diagnosticTime_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticTime(string diagnosticTime) { DARABONBA_PTR_SET_VALUE(diagnosticTime_, diagnosticTime) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetDiagnosticResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDiagnosticResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDiagnosticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline     const Darabonba::Json & recommends() const { DARABONBA_GET(recommends_) };
    Darabonba::Json & recommends() { DARABONBA_GET(recommends_) };
    inline GetDiagnosticResponseBody& setRecommends(const Darabonba::Json & recommends) { DARABONBA_SET_VALUE(recommends_, recommends) };
    inline GetDiagnosticResponseBody& setRecommends(Darabonba::Json & recommends) { DARABONBA_SET_RVALUE(recommends_, recommends) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetDiagnosticResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDiagnosticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDiagnosticResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetDiagnosticResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDiagnosticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The keyword in the diagnosis.
    std::shared_ptr<string> diagnosticKey_ = nullptr;
    // The name of the diagnostic item.
    std::shared_ptr<string> diagnosticProduct_ = nullptr;
    // The diagnosis result.
    std::shared_ptr<GetDiagnosticResponseBodyDiagnosticResult> diagnosticResult_ = nullptr;
    // The time when the diagnosis was performed.
    std::shared_ptr<string> diagnosticTime_ = nullptr;
    // The HTTP status code
    std::shared_ptr<string> httpCode_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The suggestion for the diagnosis.
    Darabonba::Json recommends_ = nullptr;
    // The ID of the diagnostic report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The diagnosis status. Valid values:
    // 
    // *   Running: The diagnosis is in progress.
    // *   Complete: The diagnosis is complete.
    // *   Failed: The diagnosis failed.
    std::shared_ptr<string> status_ = nullptr;
    // The reason for the diagnosis status.
    std::shared_ptr<string> statusReason_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
