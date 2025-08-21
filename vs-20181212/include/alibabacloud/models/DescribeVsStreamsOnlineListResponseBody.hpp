// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsStreamsOnlineListResponseBodyOnlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsOnlineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeVsStreamsOnlineListResponseBody() = default ;
    DescribeVsStreamsOnlineListResponseBody(const DescribeVsStreamsOnlineListResponseBody &) = default ;
    DescribeVsStreamsOnlineListResponseBody(DescribeVsStreamsOnlineListResponseBody &&) = default ;
    DescribeVsStreamsOnlineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsOnlineListResponseBody() = default ;
    DescribeVsStreamsOnlineListResponseBody& operator=(const DescribeVsStreamsOnlineListResponseBody &) = default ;
    DescribeVsStreamsOnlineListResponseBody& operator=(DescribeVsStreamsOnlineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onlineInfo_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalNum_ != nullptr && this->totalPage_ != nullptr; };
    // onlineInfo Field Functions 
    bool hasOnlineInfo() const { return this->onlineInfo_ != nullptr;};
    void deleteOnlineInfo() { this->onlineInfo_ = nullptr;};
    inline const DescribeVsStreamsOnlineListResponseBodyOnlineInfo & onlineInfo() const { DARABONBA_PTR_GET_CONST(onlineInfo_, DescribeVsStreamsOnlineListResponseBodyOnlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfo onlineInfo() { DARABONBA_PTR_GET(onlineInfo_, DescribeVsStreamsOnlineListResponseBodyOnlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBody& setOnlineInfo(const DescribeVsStreamsOnlineListResponseBodyOnlineInfo & onlineInfo) { DARABONBA_PTR_SET_VALUE(onlineInfo_, onlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBody& setOnlineInfo(DescribeVsStreamsOnlineListResponseBodyOnlineInfo && onlineInfo) { DARABONBA_PTR_SET_RVALUE(onlineInfo_, onlineInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsStreamsOnlineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeVsStreamsOnlineListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<DescribeVsStreamsOnlineListResponseBodyOnlineInfo> onlineInfo_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
