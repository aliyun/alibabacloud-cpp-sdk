// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataObjectColumnDetailResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectColumnDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectColumnDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectColumnDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataObjectColumnDetailResponseBody() = default ;
    DescribeDataObjectColumnDetailResponseBody(const DescribeDataObjectColumnDetailResponseBody &) = default ;
    DescribeDataObjectColumnDetailResponseBody(DescribeDataObjectColumnDetailResponseBody &&) = default ;
    DescribeDataObjectColumnDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectColumnDetailResponseBody() = default ;
    DescribeDataObjectColumnDetailResponseBody& operator=(const DescribeDataObjectColumnDetailResponseBody &) = default ;
    DescribeDataObjectColumnDetailResponseBody& operator=(DescribeDataObjectColumnDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->items_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectColumnDetailResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataObjectColumnDetailResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataObjectColumnDetailResponseBodyItems>) };
    inline vector<DescribeDataObjectColumnDetailResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeDataObjectColumnDetailResponseBodyItems>) };
    inline DescribeDataObjectColumnDetailResponseBody& setItems(const vector<DescribeDataObjectColumnDetailResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataObjectColumnDetailResponseBody& setItems(vector<DescribeDataObjectColumnDetailResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectColumnDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataObjectColumnDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataObjectColumnDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // When performing a paginated query, set the current page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // List of identified results for the columns of the data table.
    std::shared_ptr<vector<DescribeDataObjectColumnDetailResponseBodyItems>> items_ = nullptr;
    // When performing a paginated query, set the maximum number of data asset instances displayed per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request. It can be used for troubleshooting and problem localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of data items in the result.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
