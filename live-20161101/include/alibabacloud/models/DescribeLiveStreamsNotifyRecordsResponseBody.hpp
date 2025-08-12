// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsNotifyRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyRecordsInfo, notifyRecordsInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyRecordsInfo, notifyRecordsInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsNotifyRecordsResponseBody() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(const DescribeLiveStreamsNotifyRecordsResponseBody &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(DescribeLiveStreamsNotifyRecordsResponseBody &&) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyRecordsResponseBody() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody& operator=(const DescribeLiveStreamsNotifyRecordsResponseBody &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBody& operator=(DescribeLiveStreamsNotifyRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notifyRecordsInfo_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalNum_ != nullptr && this->totalPage_ != nullptr; };
    // notifyRecordsInfo Field Functions 
    bool hasNotifyRecordsInfo() const { return this->notifyRecordsInfo_ != nullptr;};
    void deleteNotifyRecordsInfo() { this->notifyRecordsInfo_ = nullptr;};
    inline const DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo & notifyRecordsInfo() const { DARABONBA_PTR_GET_CONST(notifyRecordsInfo_, DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo notifyRecordsInfo() { DARABONBA_PTR_GET(notifyRecordsInfo_, DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setNotifyRecordsInfo(const DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo & notifyRecordsInfo) { DARABONBA_PTR_SET_VALUE(notifyRecordsInfo_, notifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setNotifyRecordsInfo(DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo && notifyRecordsInfo) { DARABONBA_PTR_SET_RVALUE(notifyRecordsInfo_, notifyRecordsInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsNotifyRecordsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The stream ingest callback records.
    std::shared_ptr<DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo> notifyRecordsInfo_ = nullptr;
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
