// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAuditLogsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeAuditLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuditLogsResponseBody() = default ;
    DescribeAuditLogsResponseBody(const DescribeAuditLogsResponseBody &) = default ;
    DescribeAuditLogsResponseBody(DescribeAuditLogsResponseBody &&) = default ;
    DescribeAuditLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogsResponseBody() = default ;
    DescribeAuditLogsResponseBody& operator=(const DescribeAuditLogsResponseBody &) = default ;
    DescribeAuditLogsResponseBody& operator=(DescribeAuditLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncRequestId_ == nullptr
        && return this->currentPage_ == nullptr && return this->items_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // asyncRequestId Field Functions 
    bool hasAsyncRequestId() const { return this->asyncRequestId_ != nullptr;};
    void deleteAsyncRequestId() { this->asyncRequestId_ = nullptr;};
    inline string asyncRequestId() const { DARABONBA_PTR_GET_DEFAULT(asyncRequestId_, "") };
    inline DescribeAuditLogsResponseBody& setAsyncRequestId(string asyncRequestId) { DARABONBA_PTR_SET_VALUE(asyncRequestId_, asyncRequestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAuditLogsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAuditLogsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAuditLogsResponseBodyItems>) };
    inline vector<DescribeAuditLogsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeAuditLogsResponseBodyItems>) };
    inline DescribeAuditLogsResponseBody& setItems(const vector<DescribeAuditLogsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAuditLogsResponseBody& setItems(vector<DescribeAuditLogsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuditLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuditLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> asyncRequestId_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<DescribeAuditLogsResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
