// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPRECATEDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPRECATEDTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDeprecatedTemplatesResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListDeprecatedTemplatesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDeprecatedTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeprecatedTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeprecatedTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDeprecatedTemplatesResponseBody() = default ;
    ListDeprecatedTemplatesResponseBody(const ListDeprecatedTemplatesResponseBody &) = default ;
    ListDeprecatedTemplatesResponseBody(ListDeprecatedTemplatesResponseBody &&) = default ;
    ListDeprecatedTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeprecatedTemplatesResponseBody() = default ;
    ListDeprecatedTemplatesResponseBody& operator=(const ListDeprecatedTemplatesResponseBody &) = default ;
    ListDeprecatedTemplatesResponseBody& operator=(ListDeprecatedTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDeprecatedTemplatesResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListDeprecatedTemplatesResponseBodyHeaders) };
    inline ListDeprecatedTemplatesResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListDeprecatedTemplatesResponseBodyHeaders) };
    inline ListDeprecatedTemplatesResponseBody& setHeaders(const ListDeprecatedTemplatesResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDeprecatedTemplatesResponseBody& setHeaders(ListDeprecatedTemplatesResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeprecatedTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDeprecatedTemplatesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDeprecatedTemplatesResponseBodyResult>) };
    inline vector<ListDeprecatedTemplatesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListDeprecatedTemplatesResponseBodyResult>) };
    inline ListDeprecatedTemplatesResponseBody& setResult(const vector<ListDeprecatedTemplatesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDeprecatedTemplatesResponseBody& setResult(vector<ListDeprecatedTemplatesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<ListDeprecatedTemplatesResponseBodyHeaders> headers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListDeprecatedTemplatesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
