// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEcsInstancesResponseBodyHeaders.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsInstancesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListEcsInstancesResponseBody() = default ;
    ListEcsInstancesResponseBody(const ListEcsInstancesResponseBody &) = default ;
    ListEcsInstancesResponseBody(ListEcsInstancesResponseBody &&) = default ;
    ListEcsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBody() = default ;
    ListEcsInstancesResponseBody& operator=(const ListEcsInstancesResponseBody &) = default ;
    ListEcsInstancesResponseBody& operator=(ListEcsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListEcsInstancesResponseBodyHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, ListEcsInstancesResponseBodyHeaders) };
    inline ListEcsInstancesResponseBodyHeaders headers() { DARABONBA_PTR_GET(headers_, ListEcsInstancesResponseBodyHeaders) };
    inline ListEcsInstancesResponseBody& setHeaders(const ListEcsInstancesResponseBodyHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListEcsInstancesResponseBody& setHeaders(ListEcsInstancesResponseBodyHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListEcsInstancesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListEcsInstancesResponseBodyResult>) };
    inline vector<ListEcsInstancesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListEcsInstancesResponseBodyResult>) };
    inline ListEcsInstancesResponseBody& setResult(const vector<ListEcsInstancesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListEcsInstancesResponseBody& setResult(vector<ListEcsInstancesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The number of returned records.
    std::shared_ptr<ListEcsInstancesResponseBodyHeaders> headers_ = nullptr;
    // The header of the response.
    std::shared_ptr<string> requestId_ = nullptr;
    // Cloud Assistant the installation status, support:
    // 
    // *   true: The Prometheus agent was installed.
    // *   false: The Prometheus agent was not installed.
    std::shared_ptr<vector<ListEcsInstancesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
