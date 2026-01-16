// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The total number of entries returned.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDiagnoseReportIdsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListDiagnoseReportIdsResponseBody::Headers) };
    inline ListDiagnoseReportIdsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListDiagnoseReportIdsResponseBody::Headers) };
    inline ListDiagnoseReportIdsResponseBody& setHeaders(const ListDiagnoseReportIdsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDiagnoseReportIdsResponseBody& setHeaders(ListDiagnoseReportIdsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnoseReportIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<string> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
    inline vector<string> getResult() { DARABONBA_PTR_GET(result_, vector<string>) };
    inline ListDiagnoseReportIdsResponseBody& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDiagnoseReportIdsResponseBody& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The header of the response.
    shared_ptr<ListDiagnoseReportIdsResponseBody::Headers> headers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
