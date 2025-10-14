// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEventRebootInstanceResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRebootInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRebootInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRebootInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchEventRebootInstanceResponseBody() = default ;
    BatchEventRebootInstanceResponseBody(const BatchEventRebootInstanceResponseBody &) = default ;
    BatchEventRebootInstanceResponseBody(BatchEventRebootInstanceResponseBody &&) = default ;
    BatchEventRebootInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRebootInstanceResponseBody() = default ;
    BatchEventRebootInstanceResponseBody& operator=(const BatchEventRebootInstanceResponseBody &) = default ;
    BatchEventRebootInstanceResponseBody& operator=(BatchEventRebootInstanceResponseBody &&) = default ;
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
    inline BatchEventRebootInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchEventRebootInstanceResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchEventRebootInstanceResponseBodyResults>) };
    inline vector<BatchEventRebootInstanceResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<BatchEventRebootInstanceResponseBodyResults>) };
    inline BatchEventRebootInstanceResponseBody& setResults(const vector<BatchEventRebootInstanceResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchEventRebootInstanceResponseBody& setResults(vector<BatchEventRebootInstanceResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // Id of the request。
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchEventRebootInstanceResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
