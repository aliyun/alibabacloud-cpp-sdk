// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_TO_JSON(OrderRule, orderRule_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_FROM_JSON(OrderRule, orderRule_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLiveStreamMonitorListRequest() = default ;
    DescribeLiveStreamMonitorListRequest(const DescribeLiveStreamMonitorListRequest &) = default ;
    DescribeLiveStreamMonitorListRequest(DescribeLiveStreamMonitorListRequest &&) = default ;
    DescribeLiveStreamMonitorListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListRequest() = default ;
    DescribeLiveStreamMonitorListRequest& operator=(const DescribeLiveStreamMonitorListRequest &) = default ;
    DescribeLiveStreamMonitorListRequest& operator=(DescribeLiveStreamMonitorListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorId_ == nullptr
        && return this->orderRule_ == nullptr && return this->ownerId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->status_ == nullptr; };
    // monitorId Field Functions 
    bool hasMonitorId() const { return this->monitorId_ != nullptr;};
    void deleteMonitorId() { this->monitorId_ = nullptr;};
    inline string monitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
    inline DescribeLiveStreamMonitorListRequest& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


    // orderRule Field Functions 
    bool hasOrderRule() const { return this->orderRule_ != nullptr;};
    void deleteOrderRule() { this->orderRule_ = nullptr;};
    inline int32_t orderRule() const { DARABONBA_PTR_GET_DEFAULT(orderRule_, 0) };
    inline DescribeLiveStreamMonitorListRequest& setOrderRule(int32_t orderRule) { DARABONBA_PTR_SET_VALUE(orderRule_, orderRule) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamMonitorListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamMonitorListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamMonitorListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamMonitorListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeLiveStreamMonitorListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the monitoring session.
    // 
    // >  You can obtain the monitoring session ID from the response parameter MonitorId of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation. If you leave this parameter empty, the data of all monitoring sessions is returned.
    std::shared_ptr<string> monitorId_ = nullptr;
    // The sorting order of monitoring sessions. Valid values:
    // 
    // *   0: Monitoring sessions are sorted by status.
    // *   1: Monitoring sessions are sorted by start time in descending order.
    // *   2: Monitoring sessions are sorted by start time in ascending order.
    std::shared_ptr<int32_t> orderRule_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of monitoring sessions to return per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the monitoring session. Valid values:
    // 
    // *   1: Monitoring
    // *   0: Unmonitored
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
