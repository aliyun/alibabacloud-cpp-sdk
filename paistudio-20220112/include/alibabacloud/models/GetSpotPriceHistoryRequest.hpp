// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPOTPRICEHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPOTPRICEHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetSpotPriceHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpotPriceHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpotPriceHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetSpotPriceHistoryRequest() = default ;
    GetSpotPriceHistoryRequest(const GetSpotPriceHistoryRequest &) = default ;
    GetSpotPriceHistoryRequest(GetSpotPriceHistoryRequest &&) = default ;
    GetSpotPriceHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpotPriceHistoryRequest() = default ;
    GetSpotPriceHistoryRequest& operator=(const GetSpotPriceHistoryRequest &) = default ;
    GetSpotPriceHistoryRequest& operator=(GetSpotPriceHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->spotDuration_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetSpotPriceHistoryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetSpotPriceHistoryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetSpotPriceHistoryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSpotPriceHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetSpotPriceHistoryRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline GetSpotPriceHistoryRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSpotPriceHistoryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time for querying historical spot instance prices. Specify the time in ISO 8601 format using UTC+0, as yyyy-MM-ddTHH:mm:ssZ. Default value: empty. An empty value means the current time.
    shared_ptr<string> endTime_ {};
    // The sort order. Default value: asc. Valid values:
    // 
    // - desc: descending order.
    // 
    // - asc: ascending order.
    // 
    // This parameter applies only when you query historical prices for Lingjun instance types.
    shared_ptr<string> order_ {};
    // The page number of the current page. Default value: ***1***. This parameter applies only when you query historical prices for Lingjun instance types.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**. This parameter applies only when you query historical prices for Lingjun instance types.
    shared_ptr<int32_t> pageSize_ {};
    // The field to sort by. Default value: GmtCreatedTime. Valid values:
    // 
    // - GmtCreatedTime
    // 
    // This parameter applies only when you query historical prices for Lingjun instance types.
    shared_ptr<string> sortBy_ {};
    // The retention period for the spot instance, in hours. Note that only ECS instance types support this parameter. Default value: 0. Valid values:
    // 
    // - 1: Alibaba Cloud guarantees that the instance runs for at least one hour after creation. After one hour, the system compares your bid price with the current market price and checks resource inventory to decide whether to retain or revoke the instance.
    // 
    // - 0: Alibaba Cloud does not guarantee one-hour runtime. The system compares your bid price with the current market price and checks resource inventory to decide whether to retain or revoke the instance.
    shared_ptr<int32_t> spotDuration_ {};
    // The start time for querying historical spot instance prices. This time must be no more than seven days before the end time. Specify the time in ISO 8601 format using UTC+0, as yyyy-MM-ddTHH:mm:ssZ. Default value: empty. An empty value means three days before the end time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
