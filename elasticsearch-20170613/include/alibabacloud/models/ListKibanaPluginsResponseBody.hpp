// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListKibanaPluginsResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListKibanaPluginsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListKibanaPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKibanaPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListKibanaPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListKibanaPluginsResponseBody() = default ;
    ListKibanaPluginsResponseBody(const ListKibanaPluginsResponseBody &) = default ;
    ListKibanaPluginsResponseBody(ListKibanaPluginsResponseBody &&) = default ;
    ListKibanaPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKibanaPluginsResponseBody() = default ;
    ListKibanaPluginsResponseBody& operator=(const ListKibanaPluginsResponseBody &) = default ;
    ListKibanaPluginsResponseBody& operator=(ListKibanaPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListKibanaPluginsResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListKibanaPluginsResponseBodyHeaders) };
    inline ListKibanaPluginsResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListKibanaPluginsResponseBodyHeaders) };
    inline ListKibanaPluginsResponseBody& setHeaders(const ListKibanaPluginsResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListKibanaPluginsResponseBody& setHeaders(ListKibanaPluginsResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKibanaPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListKibanaPluginsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListKibanaPluginsResponseBodyResult>) };
    inline vector<ListKibanaPluginsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListKibanaPluginsResponseBodyResult>) };
    inline ListKibanaPluginsResponseBody& setResult(const vector<ListKibanaPluginsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListKibanaPluginsResponseBody& setResult(vector<ListKibanaPluginsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request header.
    std::shared_ptr<ListKibanaPluginsResponseBodyHeaders> headers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the plug-ins.
    std::shared_ptr<vector<ListKibanaPluginsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
