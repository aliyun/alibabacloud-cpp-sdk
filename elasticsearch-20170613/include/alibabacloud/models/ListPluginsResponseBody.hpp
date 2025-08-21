// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPluginsResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListPluginsResponseBody() = default ;
    ListPluginsResponseBody(const ListPluginsResponseBody &) = default ;
    ListPluginsResponseBody(ListPluginsResponseBody &&) = default ;
    ListPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsResponseBody() = default ;
    ListPluginsResponseBody& operator=(const ListPluginsResponseBody &) = default ;
    ListPluginsResponseBody& operator=(ListPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListPluginsResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListPluginsResponseBodyHeaders) };
    inline ListPluginsResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListPluginsResponseBodyHeaders) };
    inline ListPluginsResponseBody& setHeaders(const ListPluginsResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListPluginsResponseBody& setHeaders(ListPluginsResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListPluginsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListPluginsResponseBodyResult>) };
    inline vector<ListPluginsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListPluginsResponseBodyResult>) };
    inline ListPluginsResponseBody& setResult(const vector<ListPluginsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPluginsResponseBody& setResult(vector<ListPluginsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The description of the plug-in.
    std::shared_ptr<ListPluginsResponseBodyHeaders> headers_ = nullptr;
    // The return results.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the plug-in.
    std::shared_ptr<vector<ListPluginsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
