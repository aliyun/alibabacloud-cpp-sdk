// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchLogResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchLogResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListSearchLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListSearchLogResponseBody() = default ;
    ListSearchLogResponseBody(const ListSearchLogResponseBody &) = default ;
    ListSearchLogResponseBody(ListSearchLogResponseBody &&) = default ;
    ListSearchLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLogResponseBody() = default ;
    ListSearchLogResponseBody& operator=(const ListSearchLogResponseBody &) = default ;
    ListSearchLogResponseBody& operator=(ListSearchLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListSearchLogResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListSearchLogResponseBodyHeaders) };
    inline ListSearchLogResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListSearchLogResponseBodyHeaders) };
    inline ListSearchLogResponseBody& setHeaders(const ListSearchLogResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListSearchLogResponseBody& setHeaders(ListSearchLogResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListSearchLogResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListSearchLogResponseBodyResult>) };
    inline vector<ListSearchLogResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListSearchLogResponseBodyResult>) };
    inline ListSearchLogResponseBody& setResult(const vector<ListSearchLogResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSearchLogResponseBody& setResult(vector<ListSearchLogResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The level of the log. Valid values:
    // 
    // *   warn: warning log
    // *   info: information log
    // *   error: error log
    // *   trace: trace logs
    // *   debug: debug logs
    // 
    // The level information has been migrated to the contentCollection field.
    std::shared_ptr<ListSearchLogResponseBodyHeaders> headers_ = nullptr;
    // The list of logs returned by the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The content of the log entry. Migrated to the contentCollection field.
    std::shared_ptr<vector<ListSearchLogResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
