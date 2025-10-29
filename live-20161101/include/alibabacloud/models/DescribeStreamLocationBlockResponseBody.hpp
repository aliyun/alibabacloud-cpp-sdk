// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStreamLocationBlockResponseBodyStreamBlockList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStreamLocationBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamLocationBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamBlockList, streamBlockList_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamLocationBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamBlockList, streamBlockList_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeStreamLocationBlockResponseBody() = default ;
    DescribeStreamLocationBlockResponseBody(const DescribeStreamLocationBlockResponseBody &) = default ;
    DescribeStreamLocationBlockResponseBody(DescribeStreamLocationBlockResponseBody &&) = default ;
    DescribeStreamLocationBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamLocationBlockResponseBody() = default ;
    DescribeStreamLocationBlockResponseBody& operator=(const DescribeStreamLocationBlockResponseBody &) = default ;
    DescribeStreamLocationBlockResponseBody& operator=(DescribeStreamLocationBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->streamBlockList_ == nullptr && return this->totalPage_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamLocationBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamBlockList Field Functions 
    bool hasStreamBlockList() const { return this->streamBlockList_ != nullptr;};
    void deleteStreamBlockList() { this->streamBlockList_ = nullptr;};
    inline const DescribeStreamLocationBlockResponseBodyStreamBlockList & streamBlockList() const { DARABONBA_PTR_GET_CONST(streamBlockList_, DescribeStreamLocationBlockResponseBodyStreamBlockList) };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockList streamBlockList() { DARABONBA_PTR_GET(streamBlockList_, DescribeStreamLocationBlockResponseBodyStreamBlockList) };
    inline DescribeStreamLocationBlockResponseBody& setStreamBlockList(const DescribeStreamLocationBlockResponseBodyStreamBlockList & streamBlockList) { DARABONBA_PTR_SET_VALUE(streamBlockList_, streamBlockList) };
    inline DescribeStreamLocationBlockResponseBody& setStreamBlockList(DescribeStreamLocationBlockResponseBodyStreamBlockList && streamBlockList) { DARABONBA_PTR_SET_RVALUE(streamBlockList_, streamBlockList) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The total number of entries that meet the specified conditions.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations.
    std::shared_ptr<DescribeStreamLocationBlockResponseBodyStreamBlockList> streamBlockList_ = nullptr;
    // The total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
