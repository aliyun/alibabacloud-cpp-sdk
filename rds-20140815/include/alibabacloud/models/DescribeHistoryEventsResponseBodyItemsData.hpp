// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYITEMSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYITEMSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHistoryEventsResponseBodyItemsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsResponseBodyItemsData& obj) { 
      DARABONBA_PTR_TO_JSON(CmsProduct, cmsProduct_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DetailImpact, detailImpact_);
      DARABONBA_PTR_TO_JSON(DetailReason, detailReason_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventImpact, eventImpact_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventReason, eventReason_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_TO_JSON(HasLifeCycle, hasLifeCycle_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsClosed, isClosed_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsResponseBodyItemsData& obj) { 
      DARABONBA_PTR_FROM_JSON(CmsProduct, cmsProduct_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DetailImpact, detailImpact_);
      DARABONBA_PTR_FROM_JSON(DetailReason, detailReason_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventImpact, eventImpact_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventReason, eventReason_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_FROM_JSON(HasLifeCycle, hasLifeCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsClosed, isClosed_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DescribeHistoryEventsResponseBodyItemsData() = default ;
    DescribeHistoryEventsResponseBodyItemsData(const DescribeHistoryEventsResponseBodyItemsData &) = default ;
    DescribeHistoryEventsResponseBodyItemsData(DescribeHistoryEventsResponseBodyItemsData &&) = default ;
    DescribeHistoryEventsResponseBodyItemsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsResponseBodyItemsData() = default ;
    DescribeHistoryEventsResponseBodyItemsData& operator=(const DescribeHistoryEventsResponseBodyItemsData &) = default ;
    DescribeHistoryEventsResponseBodyItemsData& operator=(DescribeHistoryEventsResponseBodyItemsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmsProduct_ == nullptr
        && return this->dbType_ == nullptr && return this->detailImpact_ == nullptr && return this->detailReason_ == nullptr && return this->endTime_ == nullptr && return this->eventCategory_ == nullptr
        && return this->eventCode_ == nullptr && return this->eventDetail_ == nullptr && return this->eventId_ == nullptr && return this->eventImpact_ == nullptr && return this->eventLevel_ == nullptr
        && return this->eventReason_ == nullptr && return this->eventStatus_ == nullptr && return this->eventType_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr
        && return this->handleStatus_ == nullptr && return this->hasLifeCycle_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->isClosed_ == nullptr
        && return this->product_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr
        && return this->uid_ == nullptr; };
    // cmsProduct Field Functions 
    bool hasCmsProduct() const { return this->cmsProduct_ != nullptr;};
    void deleteCmsProduct() { this->cmsProduct_ = nullptr;};
    inline string cmsProduct() const { DARABONBA_PTR_GET_DEFAULT(cmsProduct_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setCmsProduct(string cmsProduct) { DARABONBA_PTR_SET_VALUE(cmsProduct_, cmsProduct) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // detailImpact Field Functions 
    bool hasDetailImpact() const { return this->detailImpact_ != nullptr;};
    void deleteDetailImpact() { this->detailImpact_ = nullptr;};
    inline string detailImpact() const { DARABONBA_PTR_GET_DEFAULT(detailImpact_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setDetailImpact(string detailImpact) { DARABONBA_PTR_SET_VALUE(detailImpact_, detailImpact) };


    // detailReason Field Functions 
    bool hasDetailReason() const { return this->detailReason_ != nullptr;};
    void deleteDetailReason() { this->detailReason_ = nullptr;};
    inline string detailReason() const { DARABONBA_PTR_GET_DEFAULT(detailReason_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setDetailReason(string detailReason) { DARABONBA_PTR_SET_VALUE(detailReason_, detailReason) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCategory Field Functions 
    bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
    void deleteEventCategory() { this->eventCategory_ = nullptr;};
    inline string eventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline string eventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventImpact Field Functions 
    bool hasEventImpact() const { return this->eventImpact_ != nullptr;};
    void deleteEventImpact() { this->eventImpact_ = nullptr;};
    inline string eventImpact() const { DARABONBA_PTR_GET_DEFAULT(eventImpact_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventImpact(string eventImpact) { DARABONBA_PTR_SET_VALUE(eventImpact_, eventImpact) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventReason Field Functions 
    bool hasEventReason() const { return this->eventReason_ != nullptr;};
    void deleteEventReason() { this->eventReason_ = nullptr;};
    inline string eventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // handleStatus Field Functions 
    bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
    void deleteHandleStatus() { this->handleStatus_ = nullptr;};
    inline string handleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setHandleStatus(string handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


    // hasLifeCycle Field Functions 
    bool hasHasLifeCycle() const { return this->hasLifeCycle_ != nullptr;};
    void deleteHasLifeCycle() { this->hasLifeCycle_ = nullptr;};
    inline int32_t hasLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(hasLifeCycle_, 0) };
    inline DescribeHistoryEventsResponseBodyItemsData& setHasLifeCycle(int32_t hasLifeCycle) { DARABONBA_PTR_SET_VALUE(hasLifeCycle_, hasLifeCycle) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isClosed Field Functions 
    bool hasIsClosed() const { return this->isClosed_ != nullptr;};
    void deleteIsClosed() { this->isClosed_ = nullptr;};
    inline int32_t isClosed() const { DARABONBA_PTR_GET_DEFAULT(isClosed_, 0) };
    inline DescribeHistoryEventsResponseBodyItemsData& setIsClosed(int32_t isClosed) { DARABONBA_PTR_SET_VALUE(isClosed_, isClosed) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeHistoryEventsResponseBodyItemsData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The cloud service type of the application group. Valid values: **web** and native. The value web indicates a web application. The value **native** indicates a local application.
    std::shared_ptr<string> cmsProduct_ = nullptr;
    // The database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The pagination parameter.
    std::shared_ptr<string> detailImpact_ = nullptr;
    // The details of the instance operation.
    std::shared_ptr<string> detailReason_ = nullptr;
    // The time when the alert was closed. The time follows the ISO 8601 standard in the *yyyy-mm-dd*t*hh:mm*z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The system event category. For more information, see [View the event history of an ApsaraDB RDS instance](https://help.aliyun.com/document_detail/129759.html).
    std::shared_ptr<string> eventCategory_ = nullptr;
    // The event code.
    std::shared_ptr<string> eventCode_ = nullptr;
    // The event details.
    std::shared_ptr<string> eventDetail_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The event impact.
    std::shared_ptr<string> eventImpact_ = nullptr;
    // The event level. For more information, see [View the event history of an ApsaraDB RDS instance](https://help.aliyun.com/document_detail/129759.html).
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The event source.
    std::shared_ptr<string> eventReason_ = nullptr;
    // The status of the alert event. Valid values:
    // 
    // *   **1**: pending
    // *   **2**: ignored
    // *   **4**: confirmed
    // *   **8**: marked as false positive
    // *   **16**: handling
    // *   **32**: handled
    // *   **64**: expired
    std::shared_ptr<string> eventStatus_ = nullptr;
    // The event type. Valid values:
    std::shared_ptr<string> eventType_ = nullptr;
    // The creation time. The time follows the ISO 8601 standard in the *yyyy-mm-dd*t*hh:mm*z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The update time. The time follows the ISO 8601 standard in the *yyyy-mm-dd*t*hh:mm*z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The handling status.
    std::shared_ptr<string> handleStatus_ = nullptr;
    // Indicates whether the event has a lifecycle.
    std::shared_ptr<int32_t> hasLifeCycle_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Indicates whether the alert is closed. Valid values: **0**: closed. **1**: not closed.
    std::shared_ptr<int32_t> isClosed_ = nullptr;
    // The service name.
    std::shared_ptr<string> product_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource type. The value is fixed as **INSTANCE**.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The type of the source data.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The start time. The time follows the ISO 8601 standard in the *yyyy-mm-dd*t*hh:mm*z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the resource owner.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
