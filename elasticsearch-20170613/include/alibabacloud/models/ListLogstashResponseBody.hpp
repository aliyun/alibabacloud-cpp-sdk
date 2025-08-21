// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogstashResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListLogstashResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListLogstashResponseBody() = default ;
    ListLogstashResponseBody(const ListLogstashResponseBody &) = default ;
    ListLogstashResponseBody(ListLogstashResponseBody &&) = default ;
    ListLogstashResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashResponseBody() = default ;
    ListLogstashResponseBody& operator=(const ListLogstashResponseBody &) = default ;
    ListLogstashResponseBody& operator=(ListLogstashResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListLogstashResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListLogstashResponseBodyHeaders) };
    inline ListLogstashResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListLogstashResponseBodyHeaders) };
    inline ListLogstashResponseBody& setHeaders(const ListLogstashResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListLogstashResponseBody& setHeaders(ListLogstashResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogstashResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListLogstashResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListLogstashResponseBodyResult>) };
    inline vector<ListLogstashResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListLogstashResponseBodyResult>) };
    inline ListLogstashResponseBody& setResult(const vector<ListLogstashResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListLogstashResponseBody& setResult(vector<ListLogstashResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The billing method of the instance. Supported: prepaid (subscription) and postpaid (pay-as-you-go).
    std::shared_ptr<ListLogstashResponseBodyHeaders> headers_ = nullptr;
    // Detailed information about the matching instances.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<vector<ListLogstashResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
