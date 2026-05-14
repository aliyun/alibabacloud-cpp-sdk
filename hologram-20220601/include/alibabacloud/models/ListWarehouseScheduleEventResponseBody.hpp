// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListWarehouseScheduleEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehouseScheduleEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehouseScheduleEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWarehouseScheduleEventResponseBody() = default ;
    ListWarehouseScheduleEventResponseBody(const ListWarehouseScheduleEventResponseBody &) = default ;
    ListWarehouseScheduleEventResponseBody(ListWarehouseScheduleEventResponseBody &&) = default ;
    ListWarehouseScheduleEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehouseScheduleEventResponseBody() = default ;
    ListWarehouseScheduleEventResponseBody& operator=(const ListWarehouseScheduleEventResponseBody &) = default ;
    ListWarehouseScheduleEventResponseBody& operator=(ListWarehouseScheduleEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventList& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_TO_JSON(ClusterCpu, clusterCpu_);
        DARABONBA_PTR_TO_JSON(ElasticCpu, elasticCpu_);
        DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(InitClusterCount, initClusterCount_);
        DARABONBA_PTR_TO_JSON(OriginalElasticCpu, originalElasticCpu_);
        DARABONBA_PTR_TO_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(WarehouseName, warehouseName_);
      };
      friend void from_json(const Darabonba::Json& j, EventList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_FROM_JSON(ClusterCpu, clusterCpu_);
        DARABONBA_PTR_FROM_JSON(ElasticCpu, elasticCpu_);
        DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(InitClusterCount, initClusterCount_);
        DARABONBA_PTR_FROM_JSON(OriginalElasticCpu, originalElasticCpu_);
        DARABONBA_PTR_FROM_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(WarehouseName, warehouseName_);
      };
      EventList() = default ;
      EventList(const EventList &) = default ;
      EventList(EventList &&) = default ;
      EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventList() = default ;
      EventList& operator=(const EventList &) = default ;
      EventList& operator=(EventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterCount_ == nullptr
        && this->clusterCpu_ == nullptr && this->elasticCpu_ == nullptr && this->elasticType_ == nullptr && this->eventName_ == nullptr && this->eventTime_ == nullptr
        && this->failedReason_ == nullptr && this->initClusterCount_ == nullptr && this->originalElasticCpu_ == nullptr && this->reservedCpu_ == nullptr && this->result_ == nullptr
        && this->warehouseName_ == nullptr; };
      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int64_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0L) };
      inline EventList& setClusterCount(int64_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // clusterCpu Field Functions 
      bool hasClusterCpu() const { return this->clusterCpu_ != nullptr;};
      void deleteClusterCpu() { this->clusterCpu_ = nullptr;};
      inline int64_t getClusterCpu() const { DARABONBA_PTR_GET_DEFAULT(clusterCpu_, 0L) };
      inline EventList& setClusterCpu(int64_t clusterCpu) { DARABONBA_PTR_SET_VALUE(clusterCpu_, clusterCpu) };


      // elasticCpu Field Functions 
      bool hasElasticCpu() const { return this->elasticCpu_ != nullptr;};
      void deleteElasticCpu() { this->elasticCpu_ = nullptr;};
      inline int64_t getElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(elasticCpu_, 0L) };
      inline EventList& setElasticCpu(int64_t elasticCpu) { DARABONBA_PTR_SET_VALUE(elasticCpu_, elasticCpu) };


      // elasticType Field Functions 
      bool hasElasticType() const { return this->elasticType_ != nullptr;};
      void deleteElasticType() { this->elasticType_ = nullptr;};
      inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
      inline EventList& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline EventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline EventList& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline EventList& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // initClusterCount Field Functions 
      bool hasInitClusterCount() const { return this->initClusterCount_ != nullptr;};
      void deleteInitClusterCount() { this->initClusterCount_ = nullptr;};
      inline int64_t getInitClusterCount() const { DARABONBA_PTR_GET_DEFAULT(initClusterCount_, 0L) };
      inline EventList& setInitClusterCount(int64_t initClusterCount) { DARABONBA_PTR_SET_VALUE(initClusterCount_, initClusterCount) };


      // originalElasticCpu Field Functions 
      bool hasOriginalElasticCpu() const { return this->originalElasticCpu_ != nullptr;};
      void deleteOriginalElasticCpu() { this->originalElasticCpu_ = nullptr;};
      inline int64_t getOriginalElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(originalElasticCpu_, 0L) };
      inline EventList& setOriginalElasticCpu(int64_t originalElasticCpu) { DARABONBA_PTR_SET_VALUE(originalElasticCpu_, originalElasticCpu) };


      // reservedCpu Field Functions 
      bool hasReservedCpu() const { return this->reservedCpu_ != nullptr;};
      void deleteReservedCpu() { this->reservedCpu_ = nullptr;};
      inline int64_t getReservedCpu() const { DARABONBA_PTR_GET_DEFAULT(reservedCpu_, 0L) };
      inline EventList& setReservedCpu(int64_t reservedCpu) { DARABONBA_PTR_SET_VALUE(reservedCpu_, reservedCpu) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline EventList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // warehouseName Field Functions 
      bool hasWarehouseName() const { return this->warehouseName_ != nullptr;};
      void deleteWarehouseName() { this->warehouseName_ = nullptr;};
      inline string getWarehouseName() const { DARABONBA_PTR_GET_DEFAULT(warehouseName_, "") };
      inline EventList& setWarehouseName(string warehouseName) { DARABONBA_PTR_SET_VALUE(warehouseName_, warehouseName) };


    protected:
      shared_ptr<int64_t> clusterCount_ {};
      shared_ptr<int64_t> clusterCpu_ {};
      shared_ptr<int64_t> elasticCpu_ {};
      shared_ptr<string> elasticType_ {};
      shared_ptr<string> eventName_ {};
      shared_ptr<string> eventTime_ {};
      shared_ptr<string> failedReason_ {};
      shared_ptr<int64_t> initClusterCount_ {};
      shared_ptr<int64_t> originalElasticCpu_ {};
      shared_ptr<int64_t> reservedCpu_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> warehouseName_ {};
    };

    virtual bool empty() const override { return this->eventList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<ListWarehouseScheduleEventResponseBody::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<ListWarehouseScheduleEventResponseBody::EventList>) };
    inline vector<ListWarehouseScheduleEventResponseBody::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<ListWarehouseScheduleEventResponseBody::EventList>) };
    inline ListWarehouseScheduleEventResponseBody& setEventList(const vector<ListWarehouseScheduleEventResponseBody::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline ListWarehouseScheduleEventResponseBody& setEventList(vector<ListWarehouseScheduleEventResponseBody::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListWarehouseScheduleEventResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWarehouseScheduleEventResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarehouseScheduleEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWarehouseScheduleEventResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListWarehouseScheduleEventResponseBody::EventList>> eventList_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
