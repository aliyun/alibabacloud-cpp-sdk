// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEventRedeployInstanceResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchEventRedeployInstanceResponseBody() = default ;
    BatchEventRedeployInstanceResponseBody(const BatchEventRedeployInstanceResponseBody &) = default ;
    BatchEventRedeployInstanceResponseBody(BatchEventRedeployInstanceResponseBody &&) = default ;
    BatchEventRedeployInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceResponseBody() = default ;
    BatchEventRedeployInstanceResponseBody& operator=(const BatchEventRedeployInstanceResponseBody &) = default ;
    BatchEventRedeployInstanceResponseBody& operator=(BatchEventRedeployInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchEventRedeployInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchEventRedeployInstanceResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchEventRedeployInstanceResponseBodyResults>) };
    inline vector<BatchEventRedeployInstanceResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<BatchEventRedeployInstanceResponseBodyResults>) };
    inline BatchEventRedeployInstanceResponseBody& setResults(const vector<BatchEventRedeployInstanceResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchEventRedeployInstanceResponseBody& setResults(vector<BatchEventRedeployInstanceResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of results.
    std::shared_ptr<vector<BatchEventRedeployInstanceResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
