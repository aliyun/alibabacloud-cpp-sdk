// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInvocationResultsResponseBodyInvocationResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInvocationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCInvocationResultsResponseBody() = default ;
    DescribeRCInvocationResultsResponseBody(const DescribeRCInvocationResultsResponseBody &) = default ;
    DescribeRCInvocationResultsResponseBody(DescribeRCInvocationResultsResponseBody &&) = default ;
    DescribeRCInvocationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInvocationResultsResponseBody() = default ;
    DescribeRCInvocationResultsResponseBody& operator=(const DescribeRCInvocationResultsResponseBody &) = default ;
    DescribeRCInvocationResultsResponseBody& operator=(DescribeRCInvocationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invocationResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // invocationResults Field Functions 
    bool hasInvocationResults() const { return this->invocationResults_ != nullptr;};
    void deleteInvocationResults() { this->invocationResults_ = nullptr;};
    inline const vector<DescribeRCInvocationResultsResponseBodyInvocationResults> & invocationResults() const { DARABONBA_PTR_GET_CONST(invocationResults_, vector<DescribeRCInvocationResultsResponseBodyInvocationResults>) };
    inline vector<DescribeRCInvocationResultsResponseBodyInvocationResults> invocationResults() { DARABONBA_PTR_GET(invocationResults_, vector<DescribeRCInvocationResultsResponseBodyInvocationResults>) };
    inline DescribeRCInvocationResultsResponseBody& setInvocationResults(const vector<DescribeRCInvocationResultsResponseBodyInvocationResults> & invocationResults) { DARABONBA_PTR_SET_VALUE(invocationResults_, invocationResults) };
    inline DescribeRCInvocationResultsResponseBody& setInvocationResults(vector<DescribeRCInvocationResultsResponseBodyInvocationResults> && invocationResults) { DARABONBA_PTR_SET_RVALUE(invocationResults_, invocationResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRCInvocationResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeRCInvocationResultsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRCInvocationResultsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInvocationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCInvocationResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeRCInvocationResultsResponseBodyInvocationResults>> invocationResults_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
