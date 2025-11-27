// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDPURCHASEDDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDPURCHASEDDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchBindPurchasedDevicesResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindPurchasedDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindPurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindPurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchBindPurchasedDevicesResponseBody() = default ;
    BatchBindPurchasedDevicesResponseBody(const BatchBindPurchasedDevicesResponseBody &) = default ;
    BatchBindPurchasedDevicesResponseBody(BatchBindPurchasedDevicesResponseBody &&) = default ;
    BatchBindPurchasedDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindPurchasedDevicesResponseBody() = default ;
    BatchBindPurchasedDevicesResponseBody& operator=(const BatchBindPurchasedDevicesResponseBody &) = default ;
    BatchBindPurchasedDevicesResponseBody& operator=(BatchBindPurchasedDevicesResponseBody &&) = default ;
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
    inline BatchBindPurchasedDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchBindPurchasedDevicesResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchBindPurchasedDevicesResponseBodyResults>) };
    inline vector<BatchBindPurchasedDevicesResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<BatchBindPurchasedDevicesResponseBodyResults>) };
    inline BatchBindPurchasedDevicesResponseBody& setResults(const vector<BatchBindPurchasedDevicesResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchBindPurchasedDevicesResponseBody& setResults(vector<BatchBindPurchasedDevicesResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchBindPurchasedDevicesResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
