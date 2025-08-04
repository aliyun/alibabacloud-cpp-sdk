// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcChannelListResponseBodyChannelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeRtcChannelListResponseBody() = default ;
    DescribeRtcChannelListResponseBody(const DescribeRtcChannelListResponseBody &) = default ;
    DescribeRtcChannelListResponseBody(DescribeRtcChannelListResponseBody &&) = default ;
    DescribeRtcChannelListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelListResponseBody() = default ;
    DescribeRtcChannelListResponseBody& operator=(const DescribeRtcChannelListResponseBody &) = default ;
    DescribeRtcChannelListResponseBody& operator=(DescribeRtcChannelListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelList_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCnt_ != nullptr; };
    // channelList Field Functions 
    bool hasChannelList() const { return this->channelList_ != nullptr;};
    void deleteChannelList() { this->channelList_ = nullptr;};
    inline const DescribeRtcChannelListResponseBodyChannelList & channelList() const { DARABONBA_PTR_GET_CONST(channelList_, DescribeRtcChannelListResponseBodyChannelList) };
    inline DescribeRtcChannelListResponseBodyChannelList channelList() { DARABONBA_PTR_GET(channelList_, DescribeRtcChannelListResponseBodyChannelList) };
    inline DescribeRtcChannelListResponseBody& setChannelList(const DescribeRtcChannelListResponseBodyChannelList & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
    inline DescribeRtcChannelListResponseBody& setChannelList(DescribeRtcChannelListResponseBodyChannelList && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeRtcChannelListResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRtcChannelListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcChannelListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int64_t totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0L) };
    inline DescribeRtcChannelListResponseBody& setTotalCnt(int64_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    std::shared_ptr<DescribeRtcChannelListResponseBodyChannelList> channelList_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
