// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalTimerRecordsResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeGlobalTimerRecordsResponseBody() = default ;
    DescribeGlobalTimerRecordsResponseBody(const DescribeGlobalTimerRecordsResponseBody &) = default ;
    DescribeGlobalTimerRecordsResponseBody(DescribeGlobalTimerRecordsResponseBody &&) = default ;
    DescribeGlobalTimerRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerRecordsResponseBody() = default ;
    DescribeGlobalTimerRecordsResponseBody& operator=(const DescribeGlobalTimerRecordsResponseBody &) = default ;
    DescribeGlobalTimerRecordsResponseBody& operator=(DescribeGlobalTimerRecordsResponseBody &&) = default ;
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
    inline DescribeGlobalTimerRecordsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalTimerRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DescribeGlobalTimerRecordsResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<DescribeGlobalTimerRecordsResponseBodyResults>) };
    inline vector<DescribeGlobalTimerRecordsResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<DescribeGlobalTimerRecordsResponseBodyResults>) };
    inline DescribeGlobalTimerRecordsResponseBody& setResults(const vector<DescribeGlobalTimerRecordsResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeGlobalTimerRecordsResponseBody& setResults(vector<DescribeGlobalTimerRecordsResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<vector<DescribeGlobalTimerRecordsResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
