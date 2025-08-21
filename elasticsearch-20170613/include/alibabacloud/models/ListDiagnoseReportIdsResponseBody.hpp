// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDiagnoseReportIdsResponseBodyHeaders.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseReportIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDiagnoseReportIdsResponseBody() = default ;
    ListDiagnoseReportIdsResponseBody(const ListDiagnoseReportIdsResponseBody &) = default ;
    ListDiagnoseReportIdsResponseBody(ListDiagnoseReportIdsResponseBody &&) = default ;
    ListDiagnoseReportIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportIdsResponseBody() = default ;
    ListDiagnoseReportIdsResponseBody& operator=(const ListDiagnoseReportIdsResponseBody &) = default ;
    ListDiagnoseReportIdsResponseBody& operator=(ListDiagnoseReportIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDiagnoseReportIdsResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListDiagnoseReportIdsResponseBodyHeaders) };
    inline ListDiagnoseReportIdsResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListDiagnoseReportIdsResponseBodyHeaders) };
    inline ListDiagnoseReportIdsResponseBody& setHeaders(const ListDiagnoseReportIdsResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDiagnoseReportIdsResponseBody& setHeaders(ListDiagnoseReportIdsResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnoseReportIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<string> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
    inline vector<string> result() { DARABONBA_PTR_GET(result_, vector<string>) };
    inline ListDiagnoseReportIdsResponseBody& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDiagnoseReportIdsResponseBody& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The header of the response.
    std::shared_ptr<ListDiagnoseReportIdsResponseBodyHeaders> headers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
