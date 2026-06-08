// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class DiagnosticResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnosticResult& obj) { 
        DARABONBA_ANY_TO_JSON(FailedResources, failedResources_);
        DARABONBA_ANY_TO_JSON(RosActionMessages, rosActionMessages_);
        DARABONBA_ANY_TO_JSON(StackMessages, stackMessages_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnosticResult& obj) { 
        DARABONBA_ANY_FROM_JSON(FailedResources, failedResources_);
        DARABONBA_ANY_FROM_JSON(RosActionMessages, rosActionMessages_);
        DARABONBA_ANY_FROM_JSON(StackMessages, stackMessages_);
      };
      DiagnosticResult() = default ;
      DiagnosticResult(const DiagnosticResult &) = default ;
      DiagnosticResult(DiagnosticResult &&) = default ;
      DiagnosticResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnosticResult() = default ;
      DiagnosticResult& operator=(const DiagnosticResult &) = default ;
      DiagnosticResult& operator=(DiagnosticResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failedResources_ == nullptr
        && this->rosActionMessages_ == nullptr && this->stackMessages_ == nullptr; };
      // failedResources Field Functions 
      bool hasFailedResources() const { return this->failedResources_ != nullptr;};
      void deleteFailedResources() { this->failedResources_ = nullptr;};
      inline       const Darabonba::Json & getFailedResources() const { DARABONBA_GET(failedResources_) };
      Darabonba::Json & getFailedResources() { DARABONBA_GET(failedResources_) };
      inline DiagnosticResult& setFailedResources(const Darabonba::Json & failedResources) { DARABONBA_SET_VALUE(failedResources_, failedResources) };
      inline DiagnosticResult& setFailedResources(Darabonba::Json && failedResources) { DARABONBA_SET_RVALUE(failedResources_, failedResources) };


      // rosActionMessages Field Functions 
      bool hasRosActionMessages() const { return this->rosActionMessages_ != nullptr;};
      void deleteRosActionMessages() { this->rosActionMessages_ = nullptr;};
      inline       const Darabonba::Json & getRosActionMessages() const { DARABONBA_GET(rosActionMessages_) };
      Darabonba::Json & getRosActionMessages() { DARABONBA_GET(rosActionMessages_) };
      inline DiagnosticResult& setRosActionMessages(const Darabonba::Json & rosActionMessages) { DARABONBA_SET_VALUE(rosActionMessages_, rosActionMessages) };
      inline DiagnosticResult& setRosActionMessages(Darabonba::Json && rosActionMessages) { DARABONBA_SET_RVALUE(rosActionMessages_, rosActionMessages) };


      // stackMessages Field Functions 
      bool hasStackMessages() const { return this->stackMessages_ != nullptr;};
      void deleteStackMessages() { this->stackMessages_ = nullptr;};
      inline       const Darabonba::Json & getStackMessages() const { DARABONBA_GET(stackMessages_) };
      Darabonba::Json & getStackMessages() { DARABONBA_GET(stackMessages_) };
      inline DiagnosticResult& setStackMessages(const Darabonba::Json & stackMessages) { DARABONBA_SET_VALUE(stackMessages_, stackMessages) };
      inline DiagnosticResult& setStackMessages(Darabonba::Json && stackMessages) { DARABONBA_SET_RVALUE(stackMessages_, stackMessages) };


    protected:
      // The resources that failed to be diagnosed.
      Darabonba::Json failedResources_ {};
      // The information about Resource Orchestration Service (ROS) calling.
      Darabonba::Json rosActionMessages_ {};
      // The stack information.
      Darabonba::Json stackMessages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->diagnosticKey_ == nullptr && this->diagnosticProduct_ == nullptr && this->diagnosticResult_ == nullptr && this->diagnosticTime_ == nullptr && this->httpCode_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->recommends_ == nullptr && this->reportId_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDiagnosticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // diagnosticKey Field Functions 
    bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
    void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
    inline string getDiagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


    // diagnosticProduct Field Functions 
    bool hasDiagnosticProduct() const { return this->diagnosticProduct_ != nullptr;};
    void deleteDiagnosticProduct() { this->diagnosticProduct_ = nullptr;};
    inline string getDiagnosticProduct() const { DARABONBA_PTR_GET_DEFAULT(diagnosticProduct_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticProduct(string diagnosticProduct) { DARABONBA_PTR_SET_VALUE(diagnosticProduct_, diagnosticProduct) };


    // diagnosticResult Field Functions 
    bool hasDiagnosticResult() const { return this->diagnosticResult_ != nullptr;};
    void deleteDiagnosticResult() { this->diagnosticResult_ = nullptr;};
    inline const GetDiagnosticResponseBody::DiagnosticResult & getDiagnosticResult() const { DARABONBA_PTR_GET_CONST(diagnosticResult_, GetDiagnosticResponseBody::DiagnosticResult) };
    inline GetDiagnosticResponseBody::DiagnosticResult getDiagnosticResult() { DARABONBA_PTR_GET(diagnosticResult_, GetDiagnosticResponseBody::DiagnosticResult) };
    inline GetDiagnosticResponseBody& setDiagnosticResult(const GetDiagnosticResponseBody::DiagnosticResult & diagnosticResult) { DARABONBA_PTR_SET_VALUE(diagnosticResult_, diagnosticResult) };
    inline GetDiagnosticResponseBody& setDiagnosticResult(GetDiagnosticResponseBody::DiagnosticResult && diagnosticResult) { DARABONBA_PTR_SET_RVALUE(diagnosticResult_, diagnosticResult) };


    // diagnosticTime Field Functions 
    bool hasDiagnosticTime() const { return this->diagnosticTime_ != nullptr;};
    void deleteDiagnosticTime() { this->diagnosticTime_ = nullptr;};
    inline string getDiagnosticTime() const { DARABONBA_PTR_GET_DEFAULT(diagnosticTime_, "") };
    inline GetDiagnosticResponseBody& setDiagnosticTime(string diagnosticTime) { DARABONBA_PTR_SET_VALUE(diagnosticTime_, diagnosticTime) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetDiagnosticResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDiagnosticResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDiagnosticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline     const Darabonba::Json & getRecommends() const { DARABONBA_GET(recommends_) };
    Darabonba::Json & getRecommends() { DARABONBA_GET(recommends_) };
    inline GetDiagnosticResponseBody& setRecommends(const Darabonba::Json & recommends) { DARABONBA_SET_VALUE(recommends_, recommends) };
    inline GetDiagnosticResponseBody& setRecommends(Darabonba::Json && recommends) { DARABONBA_SET_RVALUE(recommends_, recommends) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetDiagnosticResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDiagnosticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDiagnosticResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetDiagnosticResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDiagnosticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> code_ {};
    // The keyword in the diagnosis.
    shared_ptr<string> diagnosticKey_ {};
    // The name of the diagnostic item.
    shared_ptr<string> diagnosticProduct_ {};
    // The diagnosis result.
    shared_ptr<GetDiagnosticResponseBody::DiagnosticResult> diagnosticResult_ {};
    // The time when the diagnosis was performed.
    shared_ptr<string> diagnosticTime_ {};
    // The HTTP status code
    shared_ptr<string> httpCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The suggestion for the diagnosis.
    Darabonba::Json recommends_ {};
    // The ID of the diagnostic report.
    shared_ptr<string> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The diagnosis status. Valid values:
    // 
    // *   Running: The diagnosis is in progress.
    // *   Complete: The diagnosis is complete.
    // *   Failed: The diagnosis failed.
    shared_ptr<string> status_ {};
    // The reason for the diagnosis status.
    shared_ptr<string> statusReason_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
