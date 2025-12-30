// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribePlayListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(OrderName, orderName_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlayType, playType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(OrderName, orderName_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlayType, playType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribePlayListRequest() = default ;
    DescribePlayListRequest(const DescribePlayListRequest &) = default ;
    DescribePlayListRequest(DescribePlayListRequest &&) = default ;
    DescribePlayListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayListRequest() = default ;
    DescribePlayListRequest& operator=(const DescribePlayListRequest &) = default ;
    DescribePlayListRequest& operator=(DescribePlayListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTs_ == nullptr
        && this->endTs_ == nullptr && this->orderName_ == nullptr && this->orderType_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->playType_ == nullptr && this->status_ == nullptr && this->traceId_ == nullptr; };
    // beginTs Field Functions 
    bool hasBeginTs() const { return this->beginTs_ != nullptr;};
    void deleteBeginTs() { this->beginTs_ = nullptr;};
    inline string getBeginTs() const { DARABONBA_PTR_GET_DEFAULT(beginTs_, "") };
    inline DescribePlayListRequest& setBeginTs(string beginTs) { DARABONBA_PTR_SET_VALUE(beginTs_, beginTs) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline string getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
    inline DescribePlayListRequest& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string getOrderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline DescribePlayListRequest& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePlayListRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribePlayListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePlayListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playType Field Functions 
    bool hasPlayType() const { return this->playType_ != nullptr;};
    void deletePlayType() { this->playType_ = nullptr;};
    inline string getPlayType() const { DARABONBA_PTR_GET_DEFAULT(playType_, "") };
    inline DescribePlayListRequest& setPlayType(string playType) { DARABONBA_PTR_SET_VALUE(playType_, playType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePlayListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePlayListRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The beginning of the time range to query. By default, the system queries data of the current day.
    // 
    // This parameter is required.
    shared_ptr<string> beginTs_ {};
    // The end of the time range to query. The time range cannot exceed 24 hours.
    // 
    // This parameter is required.
    shared_ptr<string> endTs_ {};
    // The criteria by which the sorting is performed. Valid values:
    // 
    // - FirstFrameDuration
    // - PlayDuration
    // - VideoDuration
    // - StuckDuration
    shared_ptr<string> orderName_ {};
    // The sort order. Valid values:
    // 
    // - DESC: descending order.
    // - ASC: ascending order.
    shared_ptr<string> orderType_ {};
    // The page number. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The playback type. Valid value: 
    // 
    // - vod
    shared_ptr<string> playType_ {};
    // The playback status. Valid values:
    // 
    // - complete
    // - playing
    // - unusual: A playback error occurs.
    shared_ptr<string> status_ {};
    // The TraceId of the player.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
