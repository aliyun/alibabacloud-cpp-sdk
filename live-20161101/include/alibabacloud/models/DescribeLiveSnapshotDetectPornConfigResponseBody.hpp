// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveSnapshotDetectPornConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveSnapshotDetectPornConfigList, liveSnapshotDetectPornConfigList_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveSnapshotDetectPornConfigList, liveSnapshotDetectPornConfigList_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveSnapshotDetectPornConfigResponseBody() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(const DescribeLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(DescribeLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotDetectPornConfigResponseBody() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody& operator=(const DescribeLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody& operator=(DescribeLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveSnapshotDetectPornConfigList_ == nullptr
        && return this->order_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr
        && return this->totalPage_ == nullptr; };
    // liveSnapshotDetectPornConfigList Field Functions 
    bool hasLiveSnapshotDetectPornConfigList() const { return this->liveSnapshotDetectPornConfigList_ != nullptr;};
    void deleteLiveSnapshotDetectPornConfigList() { this->liveSnapshotDetectPornConfigList_ = nullptr;};
    inline const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList & liveSnapshotDetectPornConfigList() const { DARABONBA_PTR_GET_CONST(liveSnapshotDetectPornConfigList_, DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList liveSnapshotDetectPornConfigList() { DARABONBA_PTR_GET(liveSnapshotDetectPornConfigList_, DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setLiveSnapshotDetectPornConfigList(const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList & liveSnapshotDetectPornConfigList) { DARABONBA_PTR_SET_VALUE(liveSnapshotDetectPornConfigList_, liveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setLiveSnapshotDetectPornConfigList(DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList && liveSnapshotDetectPornConfigList) { DARABONBA_PTR_SET_RVALUE(liveSnapshotDetectPornConfigList_, liveSnapshotDetectPornConfigList) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The list of video moderation configurations.
    std::shared_ptr<DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList> liveSnapshotDetectPornConfigList_ = nullptr;
    // The sort order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries that meet the specified conditions.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    // The total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
