// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreadLevel, threadLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreadLevel, threadLevel_);
    };
    DescribeCloudSiemEventsRequest() = default ;
    DescribeCloudSiemEventsRequest(const DescribeCloudSiemEventsRequest &) = default ;
    DescribeCloudSiemEventsRequest(DescribeCloudSiemEventsRequest &&) = default ;
    DescribeCloudSiemEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventsRequest() = default ;
    DescribeCloudSiemEventsRequest& operator=(const DescribeCloudSiemEventsRequest &) = default ;
    DescribeCloudSiemEventsRequest& operator=(DescribeCloudSiemEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetId_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->entityUuid_ == nullptr && this->eventName_ == nullptr && this->incidentUuid_ == nullptr
        && this->order_ == nullptr && this->orderField_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr
        && this->roleType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->threadLevel_ == nullptr; };
    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline DescribeCloudSiemEventsRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCloudSiemEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeCloudSiemEventsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline DescribeCloudSiemEventsRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeCloudSiemEventsRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeCloudSiemEventsRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeCloudSiemEventsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline DescribeCloudSiemEventsRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudSiemEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudSiemEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeCloudSiemEventsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeCloudSiemEventsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeCloudSiemEventsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudSiemEventsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threadLevel Field Functions 
    bool hasThreadLevel() const { return this->threadLevel_ != nullptr;};
    void deleteThreadLevel() { this->threadLevel_ = nullptr;};
    inline const vector<string> & getThreadLevel() const { DARABONBA_PTR_GET_CONST(threadLevel_, vector<string>) };
    inline vector<string> getThreadLevel() { DARABONBA_PTR_GET(threadLevel_, vector<string>) };
    inline DescribeCloudSiemEventsRequest& setThreadLevel(const vector<string> & threadLevel) { DARABONBA_PTR_SET_VALUE(threadLevel_, threadLevel) };
    inline DescribeCloudSiemEventsRequest& setThreadLevel(vector<string> && threadLevel) { DARABONBA_PTR_SET_RVALUE(threadLevel_, threadLevel) };


  protected:
    // The ID of the asset that is associated with the event.
    shared_ptr<string> assetId_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> entityUuid_ {};
    // The name of the event.
    shared_ptr<string> eventName_ {};
    // The ID of the event.
    shared_ptr<string> incidentUuid_ {};
    // The sort order. Valid values:
    // 
    // *   desc: descending order
    // *   asc: ascending order
    shared_ptr<string> order_ {};
    // The sort field. Valid values:
    // 
    // *   GmtModified: sorts the events by creation time. This is the default value.
    // *   ThreatScore: sorts the events by risk score.
    shared_ptr<string> orderField_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The status of the event. Valid values:
    // 
    // *   0: unhandled
    // *   1: handling
    // *   5: handling failed
    // *   10: handled
    shared_ptr<int32_t> status_ {};
    // The risk levels of the events. The value is a JSON array. Valid values:
    // 
    // *   serious: high
    // *   suspicious: medium
    // *   remind: low
    shared_ptr<vector<string>> threadLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
