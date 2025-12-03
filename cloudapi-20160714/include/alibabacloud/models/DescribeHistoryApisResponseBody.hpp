// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHistoryApisResponseBodyApiHisItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeHistoryApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHisItems, apiHisItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHisItems, apiHisItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHistoryApisResponseBody() = default ;
    DescribeHistoryApisResponseBody(const DescribeHistoryApisResponseBody &) = default ;
    DescribeHistoryApisResponseBody(DescribeHistoryApisResponseBody &&) = default ;
    DescribeHistoryApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryApisResponseBody() = default ;
    DescribeHistoryApisResponseBody& operator=(const DescribeHistoryApisResponseBody &) = default ;
    DescribeHistoryApisResponseBody& operator=(DescribeHistoryApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiHisItems_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiHisItems Field Functions 
    bool hasApiHisItems() const { return this->apiHisItems_ != nullptr;};
    void deleteApiHisItems() { this->apiHisItems_ = nullptr;};
    inline const DescribeHistoryApisResponseBodyApiHisItems & apiHisItems() const { DARABONBA_PTR_GET_CONST(apiHisItems_, DescribeHistoryApisResponseBodyApiHisItems) };
    inline DescribeHistoryApisResponseBodyApiHisItems apiHisItems() { DARABONBA_PTR_GET(apiHisItems_, DescribeHistoryApisResponseBodyApiHisItems) };
    inline DescribeHistoryApisResponseBody& setApiHisItems(const DescribeHistoryApisResponseBodyApiHisItems & apiHisItems) { DARABONBA_PTR_SET_VALUE(apiHisItems_, apiHisItems) };
    inline DescribeHistoryApisResponseBody& setApiHisItems(DescribeHistoryApisResponseBodyApiHisItems && apiHisItems) { DARABONBA_PTR_SET_RVALUE(apiHisItems_, apiHisItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHistoryApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array consisting of ApiHisItems.
    std::shared_ptr<DescribeHistoryApisResponseBodyApiHisItems> apiHisItems_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
