// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDiagnoseReportResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListDiagnoseReportResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDiagnoseReportResponseBody() = default ;
    ListDiagnoseReportResponseBody(const ListDiagnoseReportResponseBody &) = default ;
    ListDiagnoseReportResponseBody(ListDiagnoseReportResponseBody &&) = default ;
    ListDiagnoseReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportResponseBody() = default ;
    ListDiagnoseReportResponseBody& operator=(const ListDiagnoseReportResponseBody &) = default ;
    ListDiagnoseReportResponseBody& operator=(ListDiagnoseReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDiagnoseReportResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListDiagnoseReportResponseBodyHeaders) };
    inline ListDiagnoseReportResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListDiagnoseReportResponseBodyHeaders) };
    inline ListDiagnoseReportResponseBody& setHeaders(const ListDiagnoseReportResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDiagnoseReportResponseBody& setHeaders(ListDiagnoseReportResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnoseReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDiagnoseReportResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDiagnoseReportResponseBodyResult>) };
    inline vector<ListDiagnoseReportResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListDiagnoseReportResponseBodyResult>) };
    inline ListDiagnoseReportResponseBody& setResult(const vector<ListDiagnoseReportResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDiagnoseReportResponseBody& setResult(vector<ListDiagnoseReportResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<ListDiagnoseReportResponseBodyHeaders> headers_ = nullptr;
    // The header of the response.
    std::shared_ptr<string> requestId_ = nullptr;
    // The trigger mode of health diagnostics. Valid values:
    // 
    // *   SYSTEM: The system is automatically triggered.
    // *   INNER: internal trigger
    // *   USER: manually triggered by the user
    std::shared_ptr<vector<ListDiagnoseReportResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
