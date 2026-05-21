// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONEVENTSRESPONSEBODY_HPP_
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
  class ListOperationEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationEventsResponseBody() = default ;
    ListOperationEventsResponseBody(const ListOperationEventsResponseBody &) = default ;
    ListOperationEventsResponseBody(ListOperationEventsResponseBody &&) = default ;
    ListOperationEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationEventsResponseBody() = default ;
    ListOperationEventsResponseBody& operator=(const ListOperationEventsResponseBody &) = default ;
    ListOperationEventsResponseBody& operator=(ListOperationEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cancelable, cancelable_);
        DARABONBA_PTR_TO_JSON(ChangeScheduleTime, changeScheduleTime_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(FollowerInstances, followerInstances_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MaintainWindow, maintainWindow_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cancelable, cancelable_);
        DARABONBA_PTR_FROM_JSON(ChangeScheduleTime, changeScheduleTime_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(FollowerInstances, followerInstances_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MaintainWindow, maintainWindow_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class FollowerInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FollowerInstances& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        };
        friend void from_json(const Darabonba::Json& j, FollowerInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        };
        FollowerInstances() = default ;
        FollowerInstances(const FollowerInstances &) = default ;
        FollowerInstances(FollowerInstances &&) = default ;
        FollowerInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FollowerInstances() = default ;
        FollowerInstances& operator=(const FollowerInstances &) = default ;
        FollowerInstances& operator=(FollowerInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline FollowerInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline FollowerInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
      };

      virtual bool empty() const override { return this->cancelable_ == nullptr
        && this->changeScheduleTime_ == nullptr && this->detail_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->followerInstances_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->maintainWindow_ == nullptr && this->resourceId_ == nullptr && this->scheduleTime_ == nullptr
        && this->state_ == nullptr && this->zoneId_ == nullptr; };
      // cancelable Field Functions 
      bool hasCancelable() const { return this->cancelable_ != nullptr;};
      void deleteCancelable() { this->cancelable_ = nullptr;};
      inline bool getCancelable() const { DARABONBA_PTR_GET_DEFAULT(cancelable_, false) };
      inline Data& setCancelable(bool cancelable) { DARABONBA_PTR_SET_VALUE(cancelable_, cancelable) };


      // changeScheduleTime Field Functions 
      bool hasChangeScheduleTime() const { return this->changeScheduleTime_ != nullptr;};
      void deleteChangeScheduleTime() { this->changeScheduleTime_ = nullptr;};
      inline bool getChangeScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(changeScheduleTime_, false) };
      inline Data& setChangeScheduleTime(bool changeScheduleTime) { DARABONBA_PTR_SET_VALUE(changeScheduleTime_, changeScheduleTime) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Data& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // followerInstances Field Functions 
      bool hasFollowerInstances() const { return this->followerInstances_ != nullptr;};
      void deleteFollowerInstances() { this->followerInstances_ = nullptr;};
      inline const vector<Data::FollowerInstances> & getFollowerInstances() const { DARABONBA_PTR_GET_CONST(followerInstances_, vector<Data::FollowerInstances>) };
      inline vector<Data::FollowerInstances> getFollowerInstances() { DARABONBA_PTR_GET(followerInstances_, vector<Data::FollowerInstances>) };
      inline Data& setFollowerInstances(const vector<Data::FollowerInstances> & followerInstances) { DARABONBA_PTR_SET_VALUE(followerInstances_, followerInstances) };
      inline Data& setFollowerInstances(vector<Data::FollowerInstances> && followerInstances) { DARABONBA_PTR_SET_RVALUE(followerInstances_, followerInstances) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // maintainWindow Field Functions 
      bool hasMaintainWindow() const { return this->maintainWindow_ != nullptr;};
      void deleteMaintainWindow() { this->maintainWindow_ = nullptr;};
      inline string getMaintainWindow() const { DARABONBA_PTR_GET_DEFAULT(maintainWindow_, "") };
      inline Data& setMaintainWindow(string maintainWindow) { DARABONBA_PTR_SET_VALUE(maintainWindow_, maintainWindow) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // scheduleTime Field Functions 
      bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
      void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
      inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
      inline Data& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<bool> cancelable_ {};
      shared_ptr<bool> changeScheduleTime_ {};
      shared_ptr<string> detail_ {};
      shared_ptr<string> eventName_ {};
      shared_ptr<string> eventType_ {};
      shared_ptr<vector<Data::FollowerInstances>> followerInstances_ {};
      // Id
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> maintainWindow_ {};
      shared_ptr<string> resourceId_ {};
      // ScheduleTime
      shared_ptr<string> scheduleTime_ {};
      // State
      shared_ptr<string> state_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOperationEventsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOperationEventsResponseBody::Data>) };
    inline vector<ListOperationEventsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOperationEventsResponseBody::Data>) };
    inline ListOperationEventsResponseBody& setData(const vector<ListOperationEventsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOperationEventsResponseBody& setData(vector<ListOperationEventsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListOperationEventsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOperationEventsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListOperationEventsResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
