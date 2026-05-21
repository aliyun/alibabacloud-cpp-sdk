// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListOperationEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventNameDesc, eventNameDesc_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scheduleTimeDesc, scheduleTimeDesc_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventNameDesc, eventNameDesc_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scheduleTimeDesc, scheduleTimeDesc_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListOperationEventsRequest() = default ;
    ListOperationEventsRequest(const ListOperationEventsRequest &) = default ;
    ListOperationEventsRequest(ListOperationEventsRequest &&) = default ;
    ListOperationEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationEventsRequest() = default ;
    ListOperationEventsRequest& operator=(const ListOperationEventsRequest &) = default ;
    ListOperationEventsRequest& operator=(ListOperationEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventNameDesc_ == nullptr && this->eventType_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->scheduleTimeDesc_ == nullptr && this->state_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListOperationEventsRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventNameDesc Field Functions 
    bool hasEventNameDesc() const { return this->eventNameDesc_ != nullptr;};
    void deleteEventNameDesc() { this->eventNameDesc_ = nullptr;};
    inline bool getEventNameDesc() const { DARABONBA_PTR_GET_DEFAULT(eventNameDesc_, false) };
    inline ListOperationEventsRequest& setEventNameDesc(bool eventNameDesc) { DARABONBA_PTR_SET_VALUE(eventNameDesc_, eventNameDesc) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListOperationEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListOperationEventsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOperationEventsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduleTimeDesc Field Functions 
    bool hasScheduleTimeDesc() const { return this->scheduleTimeDesc_ != nullptr;};
    void deleteScheduleTimeDesc() { this->scheduleTimeDesc_ = nullptr;};
    inline bool getScheduleTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeDesc_, false) };
    inline ListOperationEventsRequest& setScheduleTimeDesc(bool scheduleTimeDesc) { DARABONBA_PTR_SET_VALUE(scheduleTimeDesc_, scheduleTimeDesc) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListOperationEventsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> eventName_ {};
    shared_ptr<bool> eventNameDesc_ {};
    shared_ptr<string> eventType_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<bool> scheduleTimeDesc_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
