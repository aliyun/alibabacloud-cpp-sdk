// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisResponseBody() = default ;
    DescribeApisResponseBody(const DescribeApisResponseBody &) = default ;
    DescribeApisResponseBody(DescribeApisResponseBody &&) = default ;
    DescribeApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBody() = default ;
    DescribeApisResponseBody& operator=(const DescribeApisResponseBody &) = default ;
    DescribeApisResponseBody& operator=(DescribeApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSummarys_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiSummarys Field Functions 
    bool hasApiSummarys() const { return this->apiSummarys_ != nullptr;};
    void deleteApiSummarys() { this->apiSummarys_ = nullptr;};
    inline const DescribeApisResponseBodyApiSummarys & apiSummarys() const { DARABONBA_PTR_GET_CONST(apiSummarys_, DescribeApisResponseBodyApiSummarys) };
    inline DescribeApisResponseBodyApiSummarys apiSummarys() { DARABONBA_PTR_GET(apiSummarys_, DescribeApisResponseBodyApiSummarys) };
    inline DescribeApisResponseBody& setApiSummarys(const DescribeApisResponseBodyApiSummarys & apiSummarys) { DARABONBA_PTR_SET_VALUE(apiSummarys_, apiSummarys) };
    inline DescribeApisResponseBody& setApiSummarys(DescribeApisResponseBodyApiSummarys && apiSummarys) { DARABONBA_PTR_SET_RVALUE(apiSummarys_, apiSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried API definitions.
    std::shared_ptr<DescribeApisResponseBodyApiSummarys> apiSummarys_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
