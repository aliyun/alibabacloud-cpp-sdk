// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceResponseBody() = default ;
    ListInstanceResponseBody(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody(ListInstanceResponseBody &&) = default ;
    ListInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBody() = default ;
    ListInstanceResponseBody& operator=(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody& operator=(ListInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceResponseBodyHeaders) };
    inline ListInstanceResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListInstanceResponseBodyHeaders) };
    inline ListInstanceResponseBody& setHeaders(const ListInstanceResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceResponseBody& setHeaders(ListInstanceResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceResponseBodyResult>) };
    inline vector<ListInstanceResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListInstanceResponseBodyResult>) };
    inline ListInstanceResponseBody& setResult(const vector<ListInstanceResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceResponseBody& setResult(vector<ListInstanceResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The status of the instance. Valid values:
    // 
    // *   active: normal
    // *   activating: taking effect
    // *   inactive: frozen
    // *   invalid: invalid
    std::shared_ptr<ListInstanceResponseBodyHeaders> headers_ = nullptr;
    // The time when the node is created.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether it is a service VPC.
    std::shared_ptr<vector<ListInstanceResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
