// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceHistoryEventsResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceHistoryEventsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceHistoryEventsResponseBody() = default ;
    ListInstanceHistoryEventsResponseBody(const ListInstanceHistoryEventsResponseBody &) = default ;
    ListInstanceHistoryEventsResponseBody(ListInstanceHistoryEventsResponseBody &&) = default ;
    ListInstanceHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsResponseBody() = default ;
    ListInstanceHistoryEventsResponseBody& operator=(const ListInstanceHistoryEventsResponseBody &) = default ;
    ListInstanceHistoryEventsResponseBody& operator=(ListInstanceHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceHistoryEventsResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceHistoryEventsResponseBodyHeaders) };
    inline ListInstanceHistoryEventsResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListInstanceHistoryEventsResponseBodyHeaders) };
    inline ListInstanceHistoryEventsResponseBody& setHeaders(const ListInstanceHistoryEventsResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceHistoryEventsResponseBody& setHeaders(ListInstanceHistoryEventsResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceHistoryEventsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceHistoryEventsResponseBodyResult>) };
    inline vector<ListInstanceHistoryEventsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListInstanceHistoryEventsResponseBodyResult>) };
    inline ListInstanceHistoryEventsResponseBody& setResult(const vector<ListInstanceHistoryEventsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceHistoryEventsResponseBody& setResult(vector<ListInstanceHistoryEventsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<ListInstanceHistoryEventsResponseBodyHeaders> headers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListInstanceHistoryEventsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
