// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWAITINGROOMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWAITINGROOMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateWaitingRoomEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaitingRoomEventRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomType, waitingRoomType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaitingRoomEventRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomType, waitingRoomType_);
    };
    UpdateWaitingRoomEventRequest() = default ;
    UpdateWaitingRoomEventRequest(const UpdateWaitingRoomEventRequest &) = default ;
    UpdateWaitingRoomEventRequest(UpdateWaitingRoomEventRequest &&) = default ;
    UpdateWaitingRoomEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaitingRoomEventRequest() = default ;
    UpdateWaitingRoomEventRequest& operator=(const UpdateWaitingRoomEventRequest &) = default ;
    UpdateWaitingRoomEventRequest& operator=(UpdateWaitingRoomEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPageHtml_ == nullptr
        && this->description_ == nullptr && this->disableSessionRenewalEnable_ == nullptr && this->enable_ == nullptr && this->endTime_ == nullptr && this->jsonResponseEnable_ == nullptr
        && this->language_ == nullptr && this->name_ == nullptr && this->newUsersPerMinute_ == nullptr && this->preQueueEnable_ == nullptr && this->preQueueStartTime_ == nullptr
        && this->queuingMethod_ == nullptr && this->queuingStatusCode_ == nullptr && this->randomPreQueueEnable_ == nullptr && this->sessionDuration_ == nullptr && this->siteId_ == nullptr
        && this->startTime_ == nullptr && this->totalActiveUsers_ == nullptr && this->waitingRoomEventId_ == nullptr && this->waitingRoomType_ == nullptr; };
    // customPageHtml Field Functions 
    bool hasCustomPageHtml() const { return this->customPageHtml_ != nullptr;};
    void deleteCustomPageHtml() { this->customPageHtml_ = nullptr;};
    inline string getCustomPageHtml() const { DARABONBA_PTR_GET_DEFAULT(customPageHtml_, "") };
    inline UpdateWaitingRoomEventRequest& setCustomPageHtml(string customPageHtml) { DARABONBA_PTR_SET_VALUE(customPageHtml_, customPageHtml) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWaitingRoomEventRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableSessionRenewalEnable Field Functions 
    bool hasDisableSessionRenewalEnable() const { return this->disableSessionRenewalEnable_ != nullptr;};
    void deleteDisableSessionRenewalEnable() { this->disableSessionRenewalEnable_ = nullptr;};
    inline string getDisableSessionRenewalEnable() const { DARABONBA_PTR_GET_DEFAULT(disableSessionRenewalEnable_, "") };
    inline UpdateWaitingRoomEventRequest& setDisableSessionRenewalEnable(string disableSessionRenewalEnable) { DARABONBA_PTR_SET_VALUE(disableSessionRenewalEnable_, disableSessionRenewalEnable) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateWaitingRoomEventRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateWaitingRoomEventRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jsonResponseEnable Field Functions 
    bool hasJsonResponseEnable() const { return this->jsonResponseEnable_ != nullptr;};
    void deleteJsonResponseEnable() { this->jsonResponseEnable_ = nullptr;};
    inline string getJsonResponseEnable() const { DARABONBA_PTR_GET_DEFAULT(jsonResponseEnable_, "") };
    inline UpdateWaitingRoomEventRequest& setJsonResponseEnable(string jsonResponseEnable) { DARABONBA_PTR_SET_VALUE(jsonResponseEnable_, jsonResponseEnable) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateWaitingRoomEventRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWaitingRoomEventRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newUsersPerMinute Field Functions 
    bool hasNewUsersPerMinute() const { return this->newUsersPerMinute_ != nullptr;};
    void deleteNewUsersPerMinute() { this->newUsersPerMinute_ = nullptr;};
    inline string getNewUsersPerMinute() const { DARABONBA_PTR_GET_DEFAULT(newUsersPerMinute_, "") };
    inline UpdateWaitingRoomEventRequest& setNewUsersPerMinute(string newUsersPerMinute) { DARABONBA_PTR_SET_VALUE(newUsersPerMinute_, newUsersPerMinute) };


    // preQueueEnable Field Functions 
    bool hasPreQueueEnable() const { return this->preQueueEnable_ != nullptr;};
    void deletePreQueueEnable() { this->preQueueEnable_ = nullptr;};
    inline string getPreQueueEnable() const { DARABONBA_PTR_GET_DEFAULT(preQueueEnable_, "") };
    inline UpdateWaitingRoomEventRequest& setPreQueueEnable(string preQueueEnable) { DARABONBA_PTR_SET_VALUE(preQueueEnable_, preQueueEnable) };


    // preQueueStartTime Field Functions 
    bool hasPreQueueStartTime() const { return this->preQueueStartTime_ != nullptr;};
    void deletePreQueueStartTime() { this->preQueueStartTime_ = nullptr;};
    inline string getPreQueueStartTime() const { DARABONBA_PTR_GET_DEFAULT(preQueueStartTime_, "") };
    inline UpdateWaitingRoomEventRequest& setPreQueueStartTime(string preQueueStartTime) { DARABONBA_PTR_SET_VALUE(preQueueStartTime_, preQueueStartTime) };


    // queuingMethod Field Functions 
    bool hasQueuingMethod() const { return this->queuingMethod_ != nullptr;};
    void deleteQueuingMethod() { this->queuingMethod_ = nullptr;};
    inline string getQueuingMethod() const { DARABONBA_PTR_GET_DEFAULT(queuingMethod_, "") };
    inline UpdateWaitingRoomEventRequest& setQueuingMethod(string queuingMethod) { DARABONBA_PTR_SET_VALUE(queuingMethod_, queuingMethod) };


    // queuingStatusCode Field Functions 
    bool hasQueuingStatusCode() const { return this->queuingStatusCode_ != nullptr;};
    void deleteQueuingStatusCode() { this->queuingStatusCode_ = nullptr;};
    inline string getQueuingStatusCode() const { DARABONBA_PTR_GET_DEFAULT(queuingStatusCode_, "") };
    inline UpdateWaitingRoomEventRequest& setQueuingStatusCode(string queuingStatusCode) { DARABONBA_PTR_SET_VALUE(queuingStatusCode_, queuingStatusCode) };


    // randomPreQueueEnable Field Functions 
    bool hasRandomPreQueueEnable() const { return this->randomPreQueueEnable_ != nullptr;};
    void deleteRandomPreQueueEnable() { this->randomPreQueueEnable_ = nullptr;};
    inline string getRandomPreQueueEnable() const { DARABONBA_PTR_GET_DEFAULT(randomPreQueueEnable_, "") };
    inline UpdateWaitingRoomEventRequest& setRandomPreQueueEnable(string randomPreQueueEnable) { DARABONBA_PTR_SET_VALUE(randomPreQueueEnable_, randomPreQueueEnable) };


    // sessionDuration Field Functions 
    bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
    void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
    inline string getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, "") };
    inline UpdateWaitingRoomEventRequest& setSessionDuration(string sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateWaitingRoomEventRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateWaitingRoomEventRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalActiveUsers Field Functions 
    bool hasTotalActiveUsers() const { return this->totalActiveUsers_ != nullptr;};
    void deleteTotalActiveUsers() { this->totalActiveUsers_ = nullptr;};
    inline string getTotalActiveUsers() const { DARABONBA_PTR_GET_DEFAULT(totalActiveUsers_, "") };
    inline UpdateWaitingRoomEventRequest& setTotalActiveUsers(string totalActiveUsers) { DARABONBA_PTR_SET_VALUE(totalActiveUsers_, totalActiveUsers) };


    // waitingRoomEventId Field Functions 
    bool hasWaitingRoomEventId() const { return this->waitingRoomEventId_ != nullptr;};
    void deleteWaitingRoomEventId() { this->waitingRoomEventId_ = nullptr;};
    inline int64_t getWaitingRoomEventId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomEventId_, 0L) };
    inline UpdateWaitingRoomEventRequest& setWaitingRoomEventId(int64_t waitingRoomEventId) { DARABONBA_PTR_SET_VALUE(waitingRoomEventId_, waitingRoomEventId) };


    // waitingRoomType Field Functions 
    bool hasWaitingRoomType() const { return this->waitingRoomType_ != nullptr;};
    void deleteWaitingRoomType() { this->waitingRoomType_ = nullptr;};
    inline string getWaitingRoomType() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomType_, "") };
    inline UpdateWaitingRoomEventRequest& setWaitingRoomType(string waitingRoomType) { DARABONBA_PTR_SET_VALUE(waitingRoomType_, waitingRoomType) };


  protected:
    // The content of the custom waiting room page. You must specify this parameter if you set WaitingRoomType to custom. The content must be Base64-encoded.
    shared_ptr<string> customPageHtml_ {};
    // The description of the waiting room.
    shared_ptr<string> description_ {};
    // Specifies whether to disable session renewal. Valid values:
    // 
    // *   on
    // *   off
    shared_ptr<string> disableSessionRenewalEnable_ {};
    // Specifies whether to enable the waiting room event. Valid values:
    // 
    // *   `on`
    // *   `off`
    shared_ptr<string> enable_ {};
    // The end time of the event. This value is a UNIX timestamp.
    shared_ptr<string> endTime_ {};
    // Specifies whether to enable JSON response. Valid values:
    // 
    // *   on
    // *   off
    shared_ptr<string> jsonResponseEnable_ {};
    // The default language. Valid values:
    // 
    // *   `enus`: English.
    // *   `zhcn`: Simplified Chinese.
    // *   `zhhk`: Traditional Chinese.
    shared_ptr<string> language_ {};
    // The name of the waiting room event.
    shared_ptr<string> name_ {};
    // The maximum number of new users per minute.
    shared_ptr<string> newUsersPerMinute_ {};
    // Specifies whether to enable pre-queuing.
    // 
    // *   on
    // *   off
    shared_ptr<string> preQueueEnable_ {};
    // The start time for pre-queuing.
    shared_ptr<string> preQueueStartTime_ {};
    // The queuing method. Valid values:
    // 
    // *   random: Users gain access to the origin randomly, regardless of the arrival time.
    // *   fifo: Users gain access to the origin in order of arrival.
    // *   passthrough: Users pass through the waiting room and go straight to the origin.
    // *   reject-all: All requests are blocked from accessing the origin.
    shared_ptr<string> queuingMethod_ {};
    // The HTTP status code to return while a user is in the queue. Valid values:
    // 
    // *   200
    // *   202
    // *   429
    shared_ptr<string> queuingStatusCode_ {};
    // Specifies whether to enable random queuing.
    // 
    // *   on
    // *   off
    shared_ptr<string> randomPreQueueEnable_ {};
    // The maximum duration for which a session remains valid after a user leaves the origin. Unit: minutes.
    shared_ptr<string> sessionDuration_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The start time of the event. This value is a UNIX timestamp.
    shared_ptr<string> startTime_ {};
    // The maximum number of active users.
    shared_ptr<string> totalActiveUsers_ {};
    // The ID of the waiting room event, which can be obtained by calling the [ListWaitingRoomEvents](https://help.aliyun.com/document_detail/2850279.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> waitingRoomEventId_ {};
    // The type of the waiting room. Valid values:
    // 
    // *   default
    // *   custom
    shared_ptr<string> waitingRoomType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
