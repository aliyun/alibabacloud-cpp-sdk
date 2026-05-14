// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULETASKRESPONSEBODY_HPP_
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
  class ListWarehouseScheduleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehouseScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleTaskList, scheduleTaskList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehouseScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleTaskList, scheduleTaskList_);
    };
    ListWarehouseScheduleTaskResponseBody() = default ;
    ListWarehouseScheduleTaskResponseBody(const ListWarehouseScheduleTaskResponseBody &) = default ;
    ListWarehouseScheduleTaskResponseBody(ListWarehouseScheduleTaskResponseBody &&) = default ;
    ListWarehouseScheduleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehouseScheduleTaskResponseBody() = default ;
    ListWarehouseScheduleTaskResponseBody& operator=(const ListWarehouseScheduleTaskResponseBody &) = default ;
    ListWarehouseScheduleTaskResponseBody& operator=(ListWarehouseScheduleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleTaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleTaskList& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_TO_JSON(Plans, plans_);
        DARABONBA_PTR_TO_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
        DARABONBA_PTR_TO_JSON(WarehouseName, warehouseName_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleTaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_FROM_JSON(Plans, plans_);
        DARABONBA_PTR_FROM_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
        DARABONBA_PTR_FROM_JSON(WarehouseName, warehouseName_);
      };
      ScheduleTaskList() = default ;
      ScheduleTaskList(const ScheduleTaskList &) = default ;
      ScheduleTaskList(ScheduleTaskList &&) = default ;
      ScheduleTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleTaskList() = default ;
      ScheduleTaskList& operator=(const ScheduleTaskList &) = default ;
      ScheduleTaskList& operator=(ScheduleTaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Plans : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Plans& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ElasticCu, elasticCu_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Plans& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ElasticCu, elasticCu_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        Plans() = default ;
        Plans(const Plans &) = default ;
        Plans(Plans &&) = default ;
        Plans(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Plans() = default ;
        Plans& operator=(const Plans &) = default ;
        Plans& operator=(Plans &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->elasticCu_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->startTime_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Plans& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticCu Field Functions 
        bool hasElasticCu() const { return this->elasticCu_ != nullptr;};
        void deleteElasticCu() { this->elasticCu_ = nullptr;};
        inline int64_t getElasticCu() const { DARABONBA_PTR_GET_DEFAULT(elasticCu_, 0L) };
        inline Plans& setElasticCu(int64_t elasticCu) { DARABONBA_PTR_SET_VALUE(elasticCu_, elasticCu) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Plans& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Plans& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Plans& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> elasticCu_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->elasticType_ == nullptr
        && this->plans_ == nullptr && this->reservedCpu_ == nullptr && this->status_ == nullptr && this->warehouseId_ == nullptr && this->warehouseName_ == nullptr; };
      // elasticType Field Functions 
      bool hasElasticType() const { return this->elasticType_ != nullptr;};
      void deleteElasticType() { this->elasticType_ = nullptr;};
      inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
      inline ScheduleTaskList& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


      // plans Field Functions 
      bool hasPlans() const { return this->plans_ != nullptr;};
      void deletePlans() { this->plans_ = nullptr;};
      inline const vector<ScheduleTaskList::Plans> & getPlans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ScheduleTaskList::Plans>) };
      inline vector<ScheduleTaskList::Plans> getPlans() { DARABONBA_PTR_GET(plans_, vector<ScheduleTaskList::Plans>) };
      inline ScheduleTaskList& setPlans(const vector<ScheduleTaskList::Plans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
      inline ScheduleTaskList& setPlans(vector<ScheduleTaskList::Plans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


      // reservedCpu Field Functions 
      bool hasReservedCpu() const { return this->reservedCpu_ != nullptr;};
      void deleteReservedCpu() { this->reservedCpu_ = nullptr;};
      inline int64_t getReservedCpu() const { DARABONBA_PTR_GET_DEFAULT(reservedCpu_, 0L) };
      inline ScheduleTaskList& setReservedCpu(int64_t reservedCpu) { DARABONBA_PTR_SET_VALUE(reservedCpu_, reservedCpu) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ScheduleTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // warehouseId Field Functions 
      bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
      void deleteWarehouseId() { this->warehouseId_ = nullptr;};
      inline string getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, "") };
      inline ScheduleTaskList& setWarehouseId(string warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


      // warehouseName Field Functions 
      bool hasWarehouseName() const { return this->warehouseName_ != nullptr;};
      void deleteWarehouseName() { this->warehouseName_ = nullptr;};
      inline string getWarehouseName() const { DARABONBA_PTR_GET_DEFAULT(warehouseName_, "") };
      inline ScheduleTaskList& setWarehouseName(string warehouseName) { DARABONBA_PTR_SET_VALUE(warehouseName_, warehouseName) };


    protected:
      shared_ptr<string> elasticType_ {};
      shared_ptr<vector<ScheduleTaskList::Plans>> plans_ {};
      shared_ptr<int64_t> reservedCpu_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> warehouseId_ {};
      shared_ptr<string> warehouseName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scheduleTaskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarehouseScheduleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleTaskList Field Functions 
    bool hasScheduleTaskList() const { return this->scheduleTaskList_ != nullptr;};
    void deleteScheduleTaskList() { this->scheduleTaskList_ = nullptr;};
    inline const vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList> & getScheduleTaskList() const { DARABONBA_PTR_GET_CONST(scheduleTaskList_, vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList>) };
    inline vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList> getScheduleTaskList() { DARABONBA_PTR_GET(scheduleTaskList_, vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList>) };
    inline ListWarehouseScheduleTaskResponseBody& setScheduleTaskList(const vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList> & scheduleTaskList) { DARABONBA_PTR_SET_VALUE(scheduleTaskList_, scheduleTaskList) };
    inline ListWarehouseScheduleTaskResponseBody& setScheduleTaskList(vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList> && scheduleTaskList) { DARABONBA_PTR_SET_RVALUE(scheduleTaskList_, scheduleTaskList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListWarehouseScheduleTaskResponseBody::ScheduleTaskList>> scheduleTaskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
