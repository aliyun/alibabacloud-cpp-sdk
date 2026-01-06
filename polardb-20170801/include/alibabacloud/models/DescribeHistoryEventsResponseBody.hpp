// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHistoryEventsResponseBody() = default ;
    DescribeHistoryEventsResponseBody(const DescribeHistoryEventsResponseBody &) = default ;
    DescribeHistoryEventsResponseBody(DescribeHistoryEventsResponseBody &&) = default ;
    DescribeHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsResponseBody() = default ;
    DescribeHistoryEventsResponseBody& operator=(const DescribeHistoryEventsResponseBody &) = default ;
    DescribeHistoryEventsResponseBody& operator=(DescribeHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Specversion, specversion_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Specversion, specversion_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cmsProduct_ == nullptr
        && this->dbType_ == nullptr && this->detailImpact_ == nullptr && this->detailReason_ == nullptr && this->endTime_ == nullptr && this->eventCategory_ == nullptr
        && this->eventCode_ == nullptr && this->eventDetail_ == nullptr && this->eventId_ == nullptr && this->eventImpact_ == nullptr && this->eventLevel_ == nullptr
        && this->eventReason_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->handleStatus_ == nullptr && this->hasLifeCycle_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isClosed_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr
        && this->uid_ == nullptr; };
        // cmsProduct Field Functions 
        bool hasCmsProduct() const { return this->cmsProduct_ != nullptr;};
        void deleteCmsProduct() { this->cmsProduct_ = nullptr;};
        inline string getCmsProduct() const { DARABONBA_PTR_GET_DEFAULT(cmsProduct_, "") };
        inline Data& setCmsProduct(string cmsProduct) { DARABONBA_PTR_SET_VALUE(cmsProduct_, cmsProduct) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline Data& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // detailImpact Field Functions 
        bool hasDetailImpact() const { return this->detailImpact_ != nullptr;};
        void deleteDetailImpact() { this->detailImpact_ = nullptr;};
        inline string getDetailImpact() const { DARABONBA_PTR_GET_DEFAULT(detailImpact_, "") };
        inline Data& setDetailImpact(string detailImpact) { DARABONBA_PTR_SET_VALUE(detailImpact_, detailImpact) };


        // detailReason Field Functions 
        bool hasDetailReason() const { return this->detailReason_ != nullptr;};
        void deleteDetailReason() { this->detailReason_ = nullptr;};
        inline string getDetailReason() const { DARABONBA_PTR_GET_DEFAULT(detailReason_, "") };
        inline Data& setDetailReason(string detailReason) { DARABONBA_PTR_SET_VALUE(detailReason_, detailReason) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // eventCategory Field Functions 
        bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
        void deleteEventCategory() { this->eventCategory_ = nullptr;};
        inline string getEventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
        inline Data& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline Data& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventDetail Field Functions 
        bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
        void deleteEventDetail() { this->eventDetail_ = nullptr;};
        inline string getEventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
        inline Data& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventImpact Field Functions 
        bool hasEventImpact() const { return this->eventImpact_ != nullptr;};
        void deleteEventImpact() { this->eventImpact_ = nullptr;};
        inline string getEventImpact() const { DARABONBA_PTR_GET_DEFAULT(eventImpact_, "") };
        inline Data& setEventImpact(string eventImpact) { DARABONBA_PTR_SET_VALUE(eventImpact_, eventImpact) };


        // eventLevel Field Functions 
        bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
        void deleteEventLevel() { this->eventLevel_ = nullptr;};
        inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
        inline Data& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


        // eventReason Field Functions 
        bool hasEventReason() const { return this->eventReason_ != nullptr;};
        void deleteEventReason() { this->eventReason_ = nullptr;};
        inline string getEventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
        inline Data& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


        // eventStatus Field Functions 
        bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
        void deleteEventStatus() { this->eventStatus_ = nullptr;};
        inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
        inline Data& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // handleStatus Field Functions 
        bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
        void deleteHandleStatus() { this->handleStatus_ = nullptr;};
        inline string getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, "") };
        inline Data& setHandleStatus(string handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


        // hasLifeCycle Field Functions 
        bool hasHasLifeCycle() const { return this->hasLifeCycle_ != nullptr;};
        void deleteHasLifeCycle() { this->hasLifeCycle_ = nullptr;};
        inline int32_t getHasLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(hasLifeCycle_, 0) };
        inline Data& setHasLifeCycle(int32_t hasLifeCycle) { DARABONBA_PTR_SET_VALUE(hasLifeCycle_, hasLifeCycle) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // isClosed Field Functions 
        bool hasIsClosed() const { return this->isClosed_ != nullptr;};
        void deleteIsClosed() { this->isClosed_ = nullptr;};
        inline int32_t getIsClosed() const { DARABONBA_PTR_GET_DEFAULT(isClosed_, 0) };
        inline Data& setIsClosed(int32_t isClosed) { DARABONBA_PTR_SET_VALUE(isClosed_, isClosed) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline Data& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        shared_ptr<string> cmsProduct_ {};
        shared_ptr<string> dbType_ {};
        shared_ptr<string> detailImpact_ {};
        shared_ptr<string> detailReason_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> eventCategory_ {};
        shared_ptr<string> eventCode_ {};
        shared_ptr<string> eventDetail_ {};
        shared_ptr<string> eventId_ {};
        shared_ptr<string> eventImpact_ {};
        shared_ptr<string> eventLevel_ {};
        shared_ptr<string> eventReason_ {};
        shared_ptr<string> eventStatus_ {};
        shared_ptr<string> eventType_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> handleStatus_ {};
        shared_ptr<int32_t> hasLifeCycle_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<int32_t> isClosed_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> uid_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->id_ == nullptr && this->region_ == nullptr && this->source_ == nullptr && this->specversion_ == nullptr && this->subject_ == nullptr
        && this->time_ == nullptr && this->type_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Items::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Items::Data) };
      inline Items::Data getData() { DARABONBA_PTR_GET(data_, Items::Data) };
      inline Items& setData(const Items::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Items& setData(Items::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Items& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // specversion Field Functions 
      bool hasSpecversion() const { return this->specversion_ != nullptr;};
      void deleteSpecversion() { this->specversion_ = nullptr;};
      inline string getSpecversion() const { DARABONBA_PTR_GET_DEFAULT(specversion_, "") };
      inline Items& setSpecversion(string specversion) { DARABONBA_PTR_SET_VALUE(specversion_, specversion) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline Items& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Items& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Items::Data> data_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> specversion_ {};
      shared_ptr<string> subject_ {};
      shared_ptr<string> time_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeHistoryEventsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeHistoryEventsResponseBody::Items>) };
    inline vector<DescribeHistoryEventsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeHistoryEventsResponseBody::Items>) };
    inline DescribeHistoryEventsResponseBody& setItems(const vector<DescribeHistoryEventsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeHistoryEventsResponseBody& setItems(vector<DescribeHistoryEventsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHistoryEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeHistoryEventsResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
