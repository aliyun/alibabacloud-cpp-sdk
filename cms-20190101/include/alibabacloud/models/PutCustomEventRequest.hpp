// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutCustomEventRequest() = default ;
    PutCustomEventRequest(const PutCustomEventRequest &) = default ;
    PutCustomEventRequest(PutCustomEventRequest &&) = default ;
    PutCustomEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomEventRequest() = default ;
    PutCustomEventRequest& operator=(const PutCustomEventRequest &) = default ;
    PutCustomEventRequest& operator=(PutCustomEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, EventInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      EventInfo() = default ;
      EventInfo(const EventInfo &) = default ;
      EventInfo(EventInfo &&) = default ;
      EventInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventInfo() = default ;
      EventInfo& operator=(const EventInfo &) = default ;
      EventInfo& operator=(EventInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->eventName_ == nullptr && this->groupId_ == nullptr && this->time_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline EventInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline EventInfo& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline EventInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline EventInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The event content. Valid values of N: 1 to 50.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // The event name. Valid values of N: 1 to 50.
      // 
      // This parameter is required.
      shared_ptr<string> eventName_ {};
      // The ID of the application group. Valid values of N: 1 to 50.
      // 
      // Default value: 0. This value indicates that the event to be reported does not belong to any application group.
      shared_ptr<string> groupId_ {};
      // The time when the event occurred.
      // 
      // Format: `yyyyMMddTHHmmss.SSSZ`.
      // 
      // Valid values of N: 1 to 50.
      // 
      // >  You can also specify a UNIX timestamp. Example: 1552199984000. Unit: milliseconds.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->eventInfo_ == nullptr
        && this->regionId_ == nullptr; };
    // eventInfo Field Functions 
    bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
    void deleteEventInfo() { this->eventInfo_ = nullptr;};
    inline const vector<PutCustomEventRequest::EventInfo> & getEventInfo() const { DARABONBA_PTR_GET_CONST(eventInfo_, vector<PutCustomEventRequest::EventInfo>) };
    inline vector<PutCustomEventRequest::EventInfo> getEventInfo() { DARABONBA_PTR_GET(eventInfo_, vector<PutCustomEventRequest::EventInfo>) };
    inline PutCustomEventRequest& setEventInfo(const vector<PutCustomEventRequest::EventInfo> & eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };
    inline PutCustomEventRequest& setEventInfo(vector<PutCustomEventRequest::EventInfo> && eventInfo) { DARABONBA_PTR_SET_RVALUE(eventInfo_, eventInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutCustomEventRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The event details.
    // 
    // This parameter is required.
    shared_ptr<vector<PutCustomEventRequest::EventInfo>> eventInfo_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
