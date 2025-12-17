// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalTimerBatchesResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerBatchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerBatchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerBatchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeGlobalTimerBatchesResponseBody() = default ;
    DescribeGlobalTimerBatchesResponseBody(const DescribeGlobalTimerBatchesResponseBody &) = default ;
    DescribeGlobalTimerBatchesResponseBody(DescribeGlobalTimerBatchesResponseBody &&) = default ;
    DescribeGlobalTimerBatchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerBatchesResponseBody() = default ;
    DescribeGlobalTimerBatchesResponseBody& operator=(const DescribeGlobalTimerBatchesResponseBody &) = default ;
    DescribeGlobalTimerBatchesResponseBody& operator=(DescribeGlobalTimerBatchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->results_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGlobalTimerBatchesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerBatchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalTimerBatchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DescribeGlobalTimerBatchesResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<DescribeGlobalTimerBatchesResponseBodyResults>) };
    inline vector<DescribeGlobalTimerBatchesResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<DescribeGlobalTimerBatchesResponseBodyResults>) };
    inline DescribeGlobalTimerBatchesResponseBody& setResults(const vector<DescribeGlobalTimerBatchesResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeGlobalTimerBatchesResponseBody& setResults(vector<DescribeGlobalTimerBatchesResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeGlobalTimerBatchesResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
