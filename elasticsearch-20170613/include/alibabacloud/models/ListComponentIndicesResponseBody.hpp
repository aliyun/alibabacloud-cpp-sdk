// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentIndicesResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListComponentIndicesResponseBody() = default ;
    ListComponentIndicesResponseBody(const ListComponentIndicesResponseBody &) = default ;
    ListComponentIndicesResponseBody(ListComponentIndicesResponseBody &&) = default ;
    ListComponentIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBody() = default ;
    ListComponentIndicesResponseBody& operator=(const ListComponentIndicesResponseBody &) = default ;
    ListComponentIndicesResponseBody& operator=(ListComponentIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListComponentIndicesResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListComponentIndicesResponseBodyHeaders) };
    inline ListComponentIndicesResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListComponentIndicesResponseBodyHeaders) };
    inline ListComponentIndicesResponseBody& setHeaders(const ListComponentIndicesResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListComponentIndicesResponseBody& setHeaders(ListComponentIndicesResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListComponentIndicesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListComponentIndicesResponseBodyResult>) };
    inline vector<ListComponentIndicesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListComponentIndicesResponseBodyResult>) };
    inline ListComponentIndicesResponseBody& setResult(const vector<ListComponentIndicesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListComponentIndicesResponseBody& setResult(vector<ListComponentIndicesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<ListComponentIndicesResponseBodyHeaders> headers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListComponentIndicesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
