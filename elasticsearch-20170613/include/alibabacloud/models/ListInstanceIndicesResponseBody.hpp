// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceIndicesResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceIndicesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceIndicesResponseBody() = default ;
    ListInstanceIndicesResponseBody(const ListInstanceIndicesResponseBody &) = default ;
    ListInstanceIndicesResponseBody(ListInstanceIndicesResponseBody &&) = default ;
    ListInstanceIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceIndicesResponseBody() = default ;
    ListInstanceIndicesResponseBody& operator=(const ListInstanceIndicesResponseBody &) = default ;
    ListInstanceIndicesResponseBody& operator=(ListInstanceIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceIndicesResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceIndicesResponseBodyHeaders) };
    inline ListInstanceIndicesResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListInstanceIndicesResponseBodyHeaders) };
    inline ListInstanceIndicesResponseBody& setHeaders(const ListInstanceIndicesResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceIndicesResponseBody& setHeaders(ListInstanceIndicesResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceIndicesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceIndicesResponseBodyResult>) };
    inline vector<ListInstanceIndicesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListInstanceIndicesResponseBodyResult>) };
    inline ListInstanceIndicesResponseBody& setResult(const vector<ListInstanceIndicesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceIndicesResponseBody& setResult(vector<ListInstanceIndicesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The total size of the OpenStore cold stage index for this instance. Unit: bytes.
    std::shared_ptr<ListInstanceIndicesResponseBodyHeaders> headers_ = nullptr;
    // The total number of indexes in Cloud Hosting.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total storage space occupied by the current index. Unit: bytes.
    std::shared_ptr<vector<ListInstanceIndicesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
