// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUESTEVENTINFO_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUESTEVENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomEventRequestEventInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomEventRequestEventInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomEventRequestEventInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    PutCustomEventRequestEventInfo() = default ;
    PutCustomEventRequestEventInfo(const PutCustomEventRequestEventInfo &) = default ;
    PutCustomEventRequestEventInfo(PutCustomEventRequestEventInfo &&) = default ;
    PutCustomEventRequestEventInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomEventRequestEventInfo() = default ;
    PutCustomEventRequestEventInfo& operator=(const PutCustomEventRequestEventInfo &) = default ;
    PutCustomEventRequestEventInfo& operator=(PutCustomEventRequestEventInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->eventName_ != nullptr && this->groupId_ != nullptr && this->time_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PutCustomEventRequestEventInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline PutCustomEventRequestEventInfo& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutCustomEventRequestEventInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline PutCustomEventRequestEventInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The event content. Valid values of N: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The event name. Valid values of N: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventName_ = nullptr;
    // The ID of the application group. Valid values of N: 1 to 50.
    // 
    // Default value: 0. This value indicates that the event to be reported does not belong to any application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The time when the event occurred.
    // 
    // Format: `yyyyMMddTHHmmss.SSSZ`.
    // 
    // Valid values of N: 1 to 50.
    // 
    // >  You can also specify a UNIX timestamp. Example: 1552199984000. Unit: milliseconds.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
