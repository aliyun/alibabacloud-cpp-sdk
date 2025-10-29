// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamsOnlineListResponseBodyOnlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsOnlineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsOnlineListResponseBody() = default ;
    DescribeLiveStreamsOnlineListResponseBody(const DescribeLiveStreamsOnlineListResponseBody &) = default ;
    DescribeLiveStreamsOnlineListResponseBody(DescribeLiveStreamsOnlineListResponseBody &&) = default ;
    DescribeLiveStreamsOnlineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsOnlineListResponseBody() = default ;
    DescribeLiveStreamsOnlineListResponseBody& operator=(const DescribeLiveStreamsOnlineListResponseBody &) = default ;
    DescribeLiveStreamsOnlineListResponseBody& operator=(DescribeLiveStreamsOnlineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineInfo_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // onlineInfo Field Functions 
    bool hasOnlineInfo() const { return this->onlineInfo_ != nullptr;};
    void deleteOnlineInfo() { this->onlineInfo_ = nullptr;};
    inline const DescribeLiveStreamsOnlineListResponseBodyOnlineInfo & onlineInfo() const { DARABONBA_PTR_GET_CONST(onlineInfo_, DescribeLiveStreamsOnlineListResponseBodyOnlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfo onlineInfo() { DARABONBA_PTR_GET(onlineInfo_, DescribeLiveStreamsOnlineListResponseBodyOnlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBody& setOnlineInfo(const DescribeLiveStreamsOnlineListResponseBodyOnlineInfo & onlineInfo) { DARABONBA_PTR_SET_VALUE(onlineInfo_, onlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBody& setOnlineInfo(DescribeLiveStreamsOnlineListResponseBodyOnlineInfo && onlineInfo) { DARABONBA_PTR_SET_RVALUE(onlineInfo_, onlineInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsOnlineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The information about the live streams that are being ingested.
    std::shared_ptr<DescribeLiveStreamsOnlineListResponseBodyOnlineInfo> onlineInfo_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of streams that meet the specified conditions.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
