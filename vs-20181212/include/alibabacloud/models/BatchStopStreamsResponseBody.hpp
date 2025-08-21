// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPSTREAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPSTREAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchStopStreamsResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchStopStreamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopStreamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopStreamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchStopStreamsResponseBody() = default ;
    BatchStopStreamsResponseBody(const BatchStopStreamsResponseBody &) = default ;
    BatchStopStreamsResponseBody(BatchStopStreamsResponseBody &&) = default ;
    BatchStopStreamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopStreamsResponseBody() = default ;
    BatchStopStreamsResponseBody& operator=(const BatchStopStreamsResponseBody &) = default ;
    BatchStopStreamsResponseBody& operator=(BatchStopStreamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->results_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchStopStreamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchStopStreamsResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchStopStreamsResponseBodyResults>) };
    inline vector<BatchStopStreamsResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<BatchStopStreamsResponseBodyResults>) };
    inline BatchStopStreamsResponseBody& setResults(const vector<BatchStopStreamsResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchStopStreamsResponseBody& setResults(vector<BatchStopStreamsResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchStopStreamsResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
