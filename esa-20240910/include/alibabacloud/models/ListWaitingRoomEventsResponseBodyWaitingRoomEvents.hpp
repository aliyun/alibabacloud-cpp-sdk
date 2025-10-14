// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSRESPONSEBODYWAITINGROOMEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSRESPONSEBODYWAITINGROOMEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomEventsResponseBodyWaitingRoomEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomEventsResponseBodyWaitingRoomEvents& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPageHtml, customPageHtml_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableSessionRenewalEnable, disableSessionRenewalEnable_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JsonResponseEnable, jsonResponseEnable_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewUsersPerMinute, newUsersPerMinute_);
      DARABONBA_PTR_TO_JSON(PreQueueEnable, preQueueEnable_);
      DARABONBA_PTR_TO_JSON(PreQueueStartTime, preQueueStartTime_);
      DARABONBA_PTR_TO_JSON(QueuingMethod, queuingMethod_);
      DARABONBA_PTR_TO_JSON(QueuingStatusCode, queuingStatusCode_);
      DARABONBA_PTR_TO_JSON(RandomPreQueueEnable, randomPreQueueEnable_);
      DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomType, waitingRoomType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomEventsResponseBodyWaitingRoomEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPageHtml, customPageHtml_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableSessionRenewalEnable, disableSessionRenewalEnable_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JsonResponseEnable, jsonResponseEnable_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewUsersPerMinute, newUsersPerMinute_);
      DARABONBA_PTR_FROM_JSON(PreQueueEnable, preQueueEnable_);
      DARABONBA_PTR_FROM_JSON(PreQueueStartTime, preQueueStartTime_);
      DARABONBA_PTR_FROM_JSON(QueuingMethod, queuingMethod_);
      DARABONBA_PTR_FROM_JSON(QueuingStatusCode, queuingStatusCode_);
      DARABONBA_PTR_FROM_JSON(RandomPreQueueEnable, randomPreQueueEnable_);
      DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomType, waitingRoomType_);
    };
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents() = default ;
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents(const ListWaitingRoomEventsResponseBodyWaitingRoomEvents &) = default ;
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents(ListWaitingRoomEventsResponseBodyWaitingRoomEvents &&) = default ;
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomEventsResponseBodyWaitingRoomEvents() = default ;
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents& operator=(const ListWaitingRoomEventsResponseBodyWaitingRoomEvents &) = default ;
    ListWaitingRoomEventsResponseBodyWaitingRoomEvents& operator=(ListWaitingRoomEventsResponseBodyWaitingRoomEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPageHtml_ == nullptr
        && return this->description_ == nullptr && return this->disableSessionRenewalEnable_ == nullptr && return this->enable_ == nullptr && return this->endTime_ == nullptr && return this->jsonResponseEnable_ == nullptr
        && return this->language_ == nullptr && return this->name_ == nullptr && return this->newUsersPerMinute_ == nullptr && return this->preQueueEnable_ == nullptr && return this->preQueueStartTime_ == nullptr
        && return this->queuingMethod_ == nullptr && return this->queuingStatusCode_ == nullptr && return this->randomPreQueueEnable_ == nullptr && return this->sessionDuration_ == nullptr && return this->startTime_ == nullptr
        && return this->totalActiveUsers_ == nullptr && return this->waitingRoomEventId_ == nullptr && return this->waitingRoomId_ == nullptr && return this->waitingRoomType_ == nullptr; };
    // customPageHtml Field Functions 
    bool hasCustomPageHtml() const { return this->customPageHtml_ != nullptr;};
    void deleteCustomPageHtml() { this->customPageHtml_ = nullptr;};
    inline string customPageHtml() const { DARABONBA_PTR_GET_DEFAULT(customPageHtml_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setCustomPageHtml(string customPageHtml) { DARABONBA_PTR_SET_VALUE(customPageHtml_, customPageHtml) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableSessionRenewalEnable Field Functions 
    bool hasDisableSessionRenewalEnable() const { return this->disableSessionRenewalEnable_ != nullptr;};
    void deleteDisableSessionRenewalEnable() { this->disableSessionRenewalEnable_ = nullptr;};
    inline string disableSessionRenewalEnable() const { DARABONBA_PTR_GET_DEFAULT(disableSessionRenewalEnable_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setDisableSessionRenewalEnable(string disableSessionRenewalEnable) { DARABONBA_PTR_SET_VALUE(disableSessionRenewalEnable_, disableSessionRenewalEnable) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jsonResponseEnable Field Functions 
    bool hasJsonResponseEnable() const { return this->jsonResponseEnable_ != nullptr;};
    void deleteJsonResponseEnable() { this->jsonResponseEnable_ = nullptr;};
    inline string jsonResponseEnable() const { DARABONBA_PTR_GET_DEFAULT(jsonResponseEnable_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setJsonResponseEnable(string jsonResponseEnable) { DARABONBA_PTR_SET_VALUE(jsonResponseEnable_, jsonResponseEnable) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newUsersPerMinute Field Functions 
    bool hasNewUsersPerMinute() const { return this->newUsersPerMinute_ != nullptr;};
    void deleteNewUsersPerMinute() { this->newUsersPerMinute_ = nullptr;};
    inline string newUsersPerMinute() const { DARABONBA_PTR_GET_DEFAULT(newUsersPerMinute_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setNewUsersPerMinute(string newUsersPerMinute) { DARABONBA_PTR_SET_VALUE(newUsersPerMinute_, newUsersPerMinute) };


    // preQueueEnable Field Functions 
    bool hasPreQueueEnable() const { return this->preQueueEnable_ != nullptr;};
    void deletePreQueueEnable() { this->preQueueEnable_ = nullptr;};
    inline string preQueueEnable() const { DARABONBA_PTR_GET_DEFAULT(preQueueEnable_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setPreQueueEnable(string preQueueEnable) { DARABONBA_PTR_SET_VALUE(preQueueEnable_, preQueueEnable) };


    // preQueueStartTime Field Functions 
    bool hasPreQueueStartTime() const { return this->preQueueStartTime_ != nullptr;};
    void deletePreQueueStartTime() { this->preQueueStartTime_ = nullptr;};
    inline string preQueueStartTime() const { DARABONBA_PTR_GET_DEFAULT(preQueueStartTime_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setPreQueueStartTime(string preQueueStartTime) { DARABONBA_PTR_SET_VALUE(preQueueStartTime_, preQueueStartTime) };


    // queuingMethod Field Functions 
    bool hasQueuingMethod() const { return this->queuingMethod_ != nullptr;};
    void deleteQueuingMethod() { this->queuingMethod_ = nullptr;};
    inline string queuingMethod() const { DARABONBA_PTR_GET_DEFAULT(queuingMethod_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setQueuingMethod(string queuingMethod) { DARABONBA_PTR_SET_VALUE(queuingMethod_, queuingMethod) };


    // queuingStatusCode Field Functions 
    bool hasQueuingStatusCode() const { return this->queuingStatusCode_ != nullptr;};
    void deleteQueuingStatusCode() { this->queuingStatusCode_ = nullptr;};
    inline string queuingStatusCode() const { DARABONBA_PTR_GET_DEFAULT(queuingStatusCode_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setQueuingStatusCode(string queuingStatusCode) { DARABONBA_PTR_SET_VALUE(queuingStatusCode_, queuingStatusCode) };


    // randomPreQueueEnable Field Functions 
    bool hasRandomPreQueueEnable() const { return this->randomPreQueueEnable_ != nullptr;};
    void deleteRandomPreQueueEnable() { this->randomPreQueueEnable_ = nullptr;};
    inline string randomPreQueueEnable() const { DARABONBA_PTR_GET_DEFAULT(randomPreQueueEnable_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setRandomPreQueueEnable(string randomPreQueueEnable) { DARABONBA_PTR_SET_VALUE(randomPreQueueEnable_, randomPreQueueEnable) };


    // sessionDuration Field Functions 
    bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
    void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
    inline string sessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setSessionDuration(string sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalActiveUsers Field Functions 
    bool hasTotalActiveUsers() const { return this->totalActiveUsers_ != nullptr;};
    void deleteTotalActiveUsers() { this->totalActiveUsers_ = nullptr;};
    inline string totalActiveUsers() const { DARABONBA_PTR_GET_DEFAULT(totalActiveUsers_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setTotalActiveUsers(string totalActiveUsers) { DARABONBA_PTR_SET_VALUE(totalActiveUsers_, totalActiveUsers) };


    // waitingRoomEventId Field Functions 
    bool hasWaitingRoomEventId() const { return this->waitingRoomEventId_ != nullptr;};
    void deleteWaitingRoomEventId() { this->waitingRoomEventId_ = nullptr;};
    inline int64_t waitingRoomEventId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomEventId_, 0L) };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setWaitingRoomEventId(int64_t waitingRoomEventId) { DARABONBA_PTR_SET_VALUE(waitingRoomEventId_, waitingRoomEventId) };


    // waitingRoomId Field Functions 
    bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
    void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
    inline string waitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


    // waitingRoomType Field Functions 
    bool hasWaitingRoomType() const { return this->waitingRoomType_ != nullptr;};
    void deleteWaitingRoomType() { this->waitingRoomType_ = nullptr;};
    inline string waitingRoomType() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomType_, "") };
    inline ListWaitingRoomEventsResponseBodyWaitingRoomEvents& setWaitingRoomType(string waitingRoomType) { DARABONBA_PTR_SET_VALUE(waitingRoomType_, waitingRoomType) };


  protected:
    // The content of the custom waiting room page. This parameter is returned when the waiting room type is set to custom. The content is URL-encoded.
    std::shared_ptr<string> customPageHtml_ = nullptr;
    // The event description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether session renewal is disabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> disableSessionRenewalEnable_ = nullptr;
    // The event status. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> enable_ = nullptr;
    // The end time of the event. This value is a UNIX timestamp.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates whether JOSN response is enabled. If JSON response is enabled, a JSON body is returned for requests to the waiting room with the header Accept: application/json. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> jsonResponseEnable_ = nullptr;
    // The language of the waiting room page. This parameter is returned when the waiting room type is set to default. Valid values:
    // 
    // *   enus: English.
    // *   zhcn: Simplified Chinese.
    // *   zhhk: Traditional Chinese.
    std::shared_ptr<string> language_ = nullptr;
    // The custom event name.
    std::shared_ptr<string> name_ = nullptr;
    // The maximum number of new users per minute.
    std::shared_ptr<string> newUsersPerMinute_ = nullptr;
    // Indicates whether pre-queuing is enabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> preQueueEnable_ = nullptr;
    // The start time for pre-queuing. This value is a UNIX timestamp. This parameter is valid only when pre-queuing is enabled.
    std::shared_ptr<string> preQueueStartTime_ = nullptr;
    // The queuing method. Valid values:
    // 
    // *   random: Users gain access to the origin randomly, regardless of the arrival time.
    // *   fifo: Users gain access to the origin in order of arrival.
    // *   passthrough: Users pass through the waiting room and go straight to the origin.
    // *   reject-all: Users are blocked from reaching the origin.
    std::shared_ptr<string> queuingMethod_ = nullptr;
    // The HTTP status code to return while a user is in the queue. Valid values:
    // 
    // *   200
    // *   202
    // *   429
    std::shared_ptr<string> queuingStatusCode_ = nullptr;
    // Indicates whether random queuing is enabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> randomPreQueueEnable_ = nullptr;
    // The maximum duration for which a session remains valid after a user leaves the origin. Unit: minutes.
    std::shared_ptr<string> sessionDuration_ = nullptr;
    // The start time of the event. This value is a UNIX timestamp.
    std::shared_ptr<string> startTime_ = nullptr;
    // The maximum number of active users.
    std::shared_ptr<string> totalActiveUsers_ = nullptr;
    // The unique ID of the waiting room event.
    std::shared_ptr<int64_t> waitingRoomEventId_ = nullptr;
    // The ID of the waiting room associated with the event.
    std::shared_ptr<string> waitingRoomId_ = nullptr;
    // The type of the waiting room. Valid values:
    // 
    // *   default
    // *   custom
    std::shared_ptr<string> waitingRoomType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
