// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationResultsResponseBodyInvocationInvocationResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsResponseBodyInvocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsResponseBodyInvocation& obj) { 
      DARABONBA_PTR_TO_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsResponseBodyInvocation& obj) { 
      DARABONBA_PTR_FROM_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInvocationResultsResponseBodyInvocation() = default ;
    DescribeInvocationResultsResponseBodyInvocation(const DescribeInvocationResultsResponseBodyInvocation &) = default ;
    DescribeInvocationResultsResponseBodyInvocation(DescribeInvocationResultsResponseBodyInvocation &&) = default ;
    DescribeInvocationResultsResponseBodyInvocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsResponseBodyInvocation() = default ;
    DescribeInvocationResultsResponseBodyInvocation& operator=(const DescribeInvocationResultsResponseBodyInvocation &) = default ;
    DescribeInvocationResultsResponseBodyInvocation& operator=(DescribeInvocationResultsResponseBodyInvocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invocationResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // invocationResults Field Functions 
    bool hasInvocationResults() const { return this->invocationResults_ != nullptr;};
    void deleteInvocationResults() { this->invocationResults_ = nullptr;};
    inline const Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults & invocationResults() const { DARABONBA_PTR_GET_CONST(invocationResults_, Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults) };
    inline Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults invocationResults() { DARABONBA_PTR_GET(invocationResults_, Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults) };
    inline DescribeInvocationResultsResponseBodyInvocation& setInvocationResults(const Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults & invocationResults) { DARABONBA_PTR_SET_VALUE(invocationResults_, invocationResults) };
    inline DescribeInvocationResultsResponseBodyInvocation& setInvocationResults(Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults && invocationResults) { DARABONBA_PTR_SET_RVALUE(invocationResults_, invocationResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationResultsResponseBodyInvocation& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInvocationResultsResponseBodyInvocation& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInvocationResultsResponseBodyInvocation& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInvocationResultsResponseBodyInvocation& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The execution results.
    std::shared_ptr<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResults> invocationResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of the commands.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
