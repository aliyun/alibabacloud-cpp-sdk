// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckWarningSummaryResponseBodyWarningSummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WarningSummarys, warningSummarys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WarningSummarys, warningSummarys_);
    };
    DescribeCheckWarningSummaryResponseBody() = default ;
    DescribeCheckWarningSummaryResponseBody(const DescribeCheckWarningSummaryResponseBody &) = default ;
    DescribeCheckWarningSummaryResponseBody(DescribeCheckWarningSummaryResponseBody &&) = default ;
    DescribeCheckWarningSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningSummaryResponseBody() = default ;
    DescribeCheckWarningSummaryResponseBody& operator=(const DescribeCheckWarningSummaryResponseBody &) = default ;
    DescribeCheckWarningSummaryResponseBody& operator=(DescribeCheckWarningSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->warningSummarys_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckWarningSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // warningSummarys Field Functions 
    bool hasWarningSummarys() const { return this->warningSummarys_ != nullptr;};
    void deleteWarningSummarys() { this->warningSummarys_ = nullptr;};
    inline const vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys> & warningSummarys() const { DARABONBA_PTR_GET_CONST(warningSummarys_, vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys>) };
    inline vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys> warningSummarys() { DARABONBA_PTR_GET(warningSummarys_, vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys>) };
    inline DescribeCheckWarningSummaryResponseBody& setWarningSummarys(const vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys> & warningSummarys) { DARABONBA_PTR_SET_VALUE(warningSummarys_, warningSummarys) };
    inline DescribeCheckWarningSummaryResponseBody& setWarningSummarys(vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys> && warningSummarys) { DARABONBA_PTR_SET_RVALUE(warningSummarys_, warningSummarys) };


  protected:
    // The number of check items returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the current page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of check items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The statistics of check items.
    std::shared_ptr<vector<DescribeCheckWarningSummaryResponseBodyWarningSummarys>> warningSummarys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
