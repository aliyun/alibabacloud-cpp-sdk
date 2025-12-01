// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Truncated, truncated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Truncated, truncated_);
    };
    DescribeOssObjectsResponseBody() = default ;
    DescribeOssObjectsResponseBody(const DescribeOssObjectsResponseBody &) = default ;
    DescribeOssObjectsResponseBody(DescribeOssObjectsResponseBody &&) = default ;
    DescribeOssObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectsResponseBody() = default ;
    DescribeOssObjectsResponseBody& operator=(const DescribeOssObjectsResponseBody &) = default ;
    DescribeOssObjectsResponseBody& operator=(DescribeOssObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->items_ == nullptr && return this->marker_ == nullptr && return this->nextMarker_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->truncated_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOssObjectsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeOssObjectsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeOssObjectsResponseBodyItems>) };
    inline vector<DescribeOssObjectsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeOssObjectsResponseBodyItems>) };
    inline DescribeOssObjectsResponseBody& setItems(const vector<DescribeOssObjectsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeOssObjectsResponseBody& setItems(vector<DescribeOssObjectsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DescribeOssObjectsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // nextMarker Field Functions 
    bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
    void deleteNextMarker() { this->nextMarker_ = nullptr;};
    inline string nextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, "") };
    inline DescribeOssObjectsResponseBody& setNextMarker(string nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOssObjectsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOssObjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // truncated Field Functions 
    bool hasTruncated() const { return this->truncated_ != nullptr;};
    void deleteTruncated() { this->truncated_ = nullptr;};
    inline bool truncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
    inline DescribeOssObjectsResponseBody& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The OSS objects.
    std::shared_ptr<vector<DescribeOssObjectsResponseBodyItems>> items_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> marker_ = nullptr;
    // The ID value from which the next page of results starts.
    // 
    // >  This parameter is returned only when the `Truncated` parameter is set to `true`.
    std::shared_ptr<string> nextMarker_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> truncated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
