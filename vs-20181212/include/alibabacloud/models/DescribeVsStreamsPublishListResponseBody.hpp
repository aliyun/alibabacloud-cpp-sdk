// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSPUBLISHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSPUBLISHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsStreamsPublishListResponseBodyPublishInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsPublishListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsPublishListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishInfo, publishInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsPublishListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishInfo, publishInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeVsStreamsPublishListResponseBody() = default ;
    DescribeVsStreamsPublishListResponseBody(const DescribeVsStreamsPublishListResponseBody &) = default ;
    DescribeVsStreamsPublishListResponseBody(DescribeVsStreamsPublishListResponseBody &&) = default ;
    DescribeVsStreamsPublishListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsPublishListResponseBody() = default ;
    DescribeVsStreamsPublishListResponseBody& operator=(const DescribeVsStreamsPublishListResponseBody &) = default ;
    DescribeVsStreamsPublishListResponseBody& operator=(DescribeVsStreamsPublishListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->publishInfo_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeVsStreamsPublishListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVsStreamsPublishListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishInfo Field Functions 
    bool hasPublishInfo() const { return this->publishInfo_ != nullptr;};
    void deletePublishInfo() { this->publishInfo_ = nullptr;};
    inline const DescribeVsStreamsPublishListResponseBodyPublishInfo & publishInfo() const { DARABONBA_PTR_GET_CONST(publishInfo_, DescribeVsStreamsPublishListResponseBodyPublishInfo) };
    inline DescribeVsStreamsPublishListResponseBodyPublishInfo publishInfo() { DARABONBA_PTR_GET(publishInfo_, DescribeVsStreamsPublishListResponseBodyPublishInfo) };
    inline DescribeVsStreamsPublishListResponseBody& setPublishInfo(const DescribeVsStreamsPublishListResponseBodyPublishInfo & publishInfo) { DARABONBA_PTR_SET_VALUE(publishInfo_, publishInfo) };
    inline DescribeVsStreamsPublishListResponseBody& setPublishInfo(DescribeVsStreamsPublishListResponseBodyPublishInfo && publishInfo) { DARABONBA_PTR_SET_RVALUE(publishInfo_, publishInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsStreamsPublishListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeVsStreamsPublishListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeVsStreamsPublishListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<DescribeVsStreamsPublishListResponseBodyPublishInfo> publishInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
