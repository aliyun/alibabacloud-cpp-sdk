// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListDiagnosticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDiagnosticsResponseBody() = default ;
    ListDiagnosticsResponseBody(const ListDiagnosticsResponseBody &) = default ;
    ListDiagnosticsResponseBody(ListDiagnosticsResponseBody &&) = default ;
    ListDiagnosticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticsResponseBody() = default ;
    ListDiagnosticsResponseBody& operator=(const ListDiagnosticsResponseBody &) = default ;
    ListDiagnosticsResponseBody& operator=(ListDiagnosticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Diagnostics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Diagnostics& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DiagnosticKey, diagnosticKey_);
        DARABONBA_PTR_TO_JSON(DiagnosticProduct, diagnosticProduct_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Diagnostics& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DiagnosticKey, diagnosticKey_);
        DARABONBA_PTR_FROM_JSON(DiagnosticProduct, diagnosticProduct_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Diagnostics() = default ;
      Diagnostics(const Diagnostics &) = default ;
      Diagnostics(Diagnostics &&) = default ;
      Diagnostics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Diagnostics() = default ;
      Diagnostics& operator=(const Diagnostics &) = default ;
      Diagnostics& operator=(Diagnostics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->diagnosticKey_ == nullptr && this->diagnosticProduct_ == nullptr && this->reportId_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Diagnostics& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diagnosticKey Field Functions 
      bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
      void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
      inline string getDiagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
      inline Diagnostics& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


      // diagnosticProduct Field Functions 
      bool hasDiagnosticProduct() const { return this->diagnosticProduct_ != nullptr;};
      void deleteDiagnosticProduct() { this->diagnosticProduct_ = nullptr;};
      inline string getDiagnosticProduct() const { DARABONBA_PTR_GET_DEFAULT(diagnosticProduct_, "") };
      inline Diagnostics& setDiagnosticProduct(string diagnosticProduct) { DARABONBA_PTR_SET_VALUE(diagnosticProduct_, diagnosticProduct) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Diagnostics& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Diagnostics& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the diagnostic report was generated.
      shared_ptr<string> createTime_ {};
      // The keyword in the diagnosis.
      shared_ptr<string> diagnosticKey_ {};
      // The product that is diagnosed.
      shared_ptr<string> diagnosticProduct_ {};
      // The ID of the diagnostic report.
      shared_ptr<string> reportId_ {};
      // The diagnosis status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->diagnostics_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // diagnostics Field Functions 
    bool hasDiagnostics() const { return this->diagnostics_ != nullptr;};
    void deleteDiagnostics() { this->diagnostics_ = nullptr;};
    inline const vector<ListDiagnosticsResponseBody::Diagnostics> & getDiagnostics() const { DARABONBA_PTR_GET_CONST(diagnostics_, vector<ListDiagnosticsResponseBody::Diagnostics>) };
    inline vector<ListDiagnosticsResponseBody::Diagnostics> getDiagnostics() { DARABONBA_PTR_GET(diagnostics_, vector<ListDiagnosticsResponseBody::Diagnostics>) };
    inline ListDiagnosticsResponseBody& setDiagnostics(const vector<ListDiagnosticsResponseBody::Diagnostics> & diagnostics) { DARABONBA_PTR_SET_VALUE(diagnostics_, diagnostics) };
    inline ListDiagnosticsResponseBody& setDiagnostics(vector<ListDiagnosticsResponseBody::Diagnostics> && diagnostics) { DARABONBA_PTR_SET_RVALUE(diagnostics_, diagnostics) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDiagnosticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDiagnosticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListDiagnosticsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The items that are diagnosed.
    shared_ptr<vector<ListDiagnosticsResponseBody::Diagnostics>> diagnostics_ {};
    // The HTTP status code returned. The value 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
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
