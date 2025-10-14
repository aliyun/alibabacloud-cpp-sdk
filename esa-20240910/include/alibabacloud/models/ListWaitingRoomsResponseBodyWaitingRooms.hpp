// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODYWAITINGROOMS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODYWAITINGROOMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomsResponseBodyWaitingRooms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomsResponseBodyWaitingRooms& obj) { 
      DARABONBA_PTR_TO_JSON(CookieName, cookieName_);
      DARABONBA_PTR_TO_JSON(CustomPageHtml, customPageHtml_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableSessionRenewalEnable, disableSessionRenewalEnable_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(HostNameAndPath, hostNameAndPath_);
      DARABONBA_PTR_TO_JSON(JsonResponseEnable, jsonResponseEnable_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewUsersPerMinute, newUsersPerMinute_);
      DARABONBA_PTR_TO_JSON(QueueAllEnable, queueAllEnable_);
      DARABONBA_PTR_TO_JSON(QueuingMethod, queuingMethod_);
      DARABONBA_PTR_TO_JSON(QueuingStatusCode, queuingStatusCode_);
      DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_TO_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_TO_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomType, waitingRoomType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomsResponseBodyWaitingRooms& obj) { 
      DARABONBA_PTR_FROM_JSON(CookieName, cookieName_);
      DARABONBA_PTR_FROM_JSON(CustomPageHtml, customPageHtml_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableSessionRenewalEnable, disableSessionRenewalEnable_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(HostNameAndPath, hostNameAndPath_);
      DARABONBA_PTR_FROM_JSON(JsonResponseEnable, jsonResponseEnable_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewUsersPerMinute, newUsersPerMinute_);
      DARABONBA_PTR_FROM_JSON(QueueAllEnable, queueAllEnable_);
      DARABONBA_PTR_FROM_JSON(QueuingMethod, queuingMethod_);
      DARABONBA_PTR_FROM_JSON(QueuingStatusCode, queuingStatusCode_);
      DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
      DARABONBA_PTR_FROM_JSON(TotalActiveUsers, totalActiveUsers_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomId, waitingRoomId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomType, waitingRoomType_);
    };
    ListWaitingRoomsResponseBodyWaitingRooms() = default ;
    ListWaitingRoomsResponseBodyWaitingRooms(const ListWaitingRoomsResponseBodyWaitingRooms &) = default ;
    ListWaitingRoomsResponseBodyWaitingRooms(ListWaitingRoomsResponseBodyWaitingRooms &&) = default ;
    ListWaitingRoomsResponseBodyWaitingRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomsResponseBodyWaitingRooms() = default ;
    ListWaitingRoomsResponseBodyWaitingRooms& operator=(const ListWaitingRoomsResponseBodyWaitingRooms &) = default ;
    ListWaitingRoomsResponseBodyWaitingRooms& operator=(ListWaitingRoomsResponseBodyWaitingRooms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cookieName_ == nullptr
        && return this->customPageHtml_ == nullptr && return this->description_ == nullptr && return this->disableSessionRenewalEnable_ == nullptr && return this->enable_ == nullptr && return this->hostNameAndPath_ == nullptr
        && return this->jsonResponseEnable_ == nullptr && return this->language_ == nullptr && return this->name_ == nullptr && return this->newUsersPerMinute_ == nullptr && return this->queueAllEnable_ == nullptr
        && return this->queuingMethod_ == nullptr && return this->queuingStatusCode_ == nullptr && return this->sessionDuration_ == nullptr && return this->totalActiveUsers_ == nullptr && return this->waitingRoomId_ == nullptr
        && return this->waitingRoomType_ == nullptr; };
    // cookieName Field Functions 
    bool hasCookieName() const { return this->cookieName_ != nullptr;};
    void deleteCookieName() { this->cookieName_ = nullptr;};
    inline string cookieName() const { DARABONBA_PTR_GET_DEFAULT(cookieName_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setCookieName(string cookieName) { DARABONBA_PTR_SET_VALUE(cookieName_, cookieName) };


    // customPageHtml Field Functions 
    bool hasCustomPageHtml() const { return this->customPageHtml_ != nullptr;};
    void deleteCustomPageHtml() { this->customPageHtml_ = nullptr;};
    inline string customPageHtml() const { DARABONBA_PTR_GET_DEFAULT(customPageHtml_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setCustomPageHtml(string customPageHtml) { DARABONBA_PTR_SET_VALUE(customPageHtml_, customPageHtml) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableSessionRenewalEnable Field Functions 
    bool hasDisableSessionRenewalEnable() const { return this->disableSessionRenewalEnable_ != nullptr;};
    void deleteDisableSessionRenewalEnable() { this->disableSessionRenewalEnable_ = nullptr;};
    inline string disableSessionRenewalEnable() const { DARABONBA_PTR_GET_DEFAULT(disableSessionRenewalEnable_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setDisableSessionRenewalEnable(string disableSessionRenewalEnable) { DARABONBA_PTR_SET_VALUE(disableSessionRenewalEnable_, disableSessionRenewalEnable) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // hostNameAndPath Field Functions 
    bool hasHostNameAndPath() const { return this->hostNameAndPath_ != nullptr;};
    void deleteHostNameAndPath() { this->hostNameAndPath_ = nullptr;};
    inline const vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath> & hostNameAndPath() const { DARABONBA_PTR_GET_CONST(hostNameAndPath_, vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath>) };
    inline vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath> hostNameAndPath() { DARABONBA_PTR_GET(hostNameAndPath_, vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath>) };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setHostNameAndPath(const vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath> & hostNameAndPath) { DARABONBA_PTR_SET_VALUE(hostNameAndPath_, hostNameAndPath) };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setHostNameAndPath(vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath> && hostNameAndPath) { DARABONBA_PTR_SET_RVALUE(hostNameAndPath_, hostNameAndPath) };


    // jsonResponseEnable Field Functions 
    bool hasJsonResponseEnable() const { return this->jsonResponseEnable_ != nullptr;};
    void deleteJsonResponseEnable() { this->jsonResponseEnable_ = nullptr;};
    inline string jsonResponseEnable() const { DARABONBA_PTR_GET_DEFAULT(jsonResponseEnable_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setJsonResponseEnable(string jsonResponseEnable) { DARABONBA_PTR_SET_VALUE(jsonResponseEnable_, jsonResponseEnable) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newUsersPerMinute Field Functions 
    bool hasNewUsersPerMinute() const { return this->newUsersPerMinute_ != nullptr;};
    void deleteNewUsersPerMinute() { this->newUsersPerMinute_ = nullptr;};
    inline string newUsersPerMinute() const { DARABONBA_PTR_GET_DEFAULT(newUsersPerMinute_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setNewUsersPerMinute(string newUsersPerMinute) { DARABONBA_PTR_SET_VALUE(newUsersPerMinute_, newUsersPerMinute) };


    // queueAllEnable Field Functions 
    bool hasQueueAllEnable() const { return this->queueAllEnable_ != nullptr;};
    void deleteQueueAllEnable() { this->queueAllEnable_ = nullptr;};
    inline string queueAllEnable() const { DARABONBA_PTR_GET_DEFAULT(queueAllEnable_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setQueueAllEnable(string queueAllEnable) { DARABONBA_PTR_SET_VALUE(queueAllEnable_, queueAllEnable) };


    // queuingMethod Field Functions 
    bool hasQueuingMethod() const { return this->queuingMethod_ != nullptr;};
    void deleteQueuingMethod() { this->queuingMethod_ = nullptr;};
    inline string queuingMethod() const { DARABONBA_PTR_GET_DEFAULT(queuingMethod_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setQueuingMethod(string queuingMethod) { DARABONBA_PTR_SET_VALUE(queuingMethod_, queuingMethod) };


    // queuingStatusCode Field Functions 
    bool hasQueuingStatusCode() const { return this->queuingStatusCode_ != nullptr;};
    void deleteQueuingStatusCode() { this->queuingStatusCode_ = nullptr;};
    inline string queuingStatusCode() const { DARABONBA_PTR_GET_DEFAULT(queuingStatusCode_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setQueuingStatusCode(string queuingStatusCode) { DARABONBA_PTR_SET_VALUE(queuingStatusCode_, queuingStatusCode) };


    // sessionDuration Field Functions 
    bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
    void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
    inline string sessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setSessionDuration(string sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


    // totalActiveUsers Field Functions 
    bool hasTotalActiveUsers() const { return this->totalActiveUsers_ != nullptr;};
    void deleteTotalActiveUsers() { this->totalActiveUsers_ = nullptr;};
    inline string totalActiveUsers() const { DARABONBA_PTR_GET_DEFAULT(totalActiveUsers_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setTotalActiveUsers(string totalActiveUsers) { DARABONBA_PTR_SET_VALUE(totalActiveUsers_, totalActiveUsers) };


    // waitingRoomId Field Functions 
    bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
    void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
    inline string waitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


    // waitingRoomType Field Functions 
    bool hasWaitingRoomType() const { return this->waitingRoomType_ != nullptr;};
    void deleteWaitingRoomType() { this->waitingRoomType_ = nullptr;};
    inline string waitingRoomType() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomType_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRooms& setWaitingRoomType(string waitingRoomType) { DARABONBA_PTR_SET_VALUE(waitingRoomType_, waitingRoomType) };


  protected:
    // The name of the custom cookie.
    std::shared_ptr<string> cookieName_ = nullptr;
    // The HTML content or identifier of the custom queuing page. This parameter is valid only when `WaitingRoomType` is set to `custom`. The content must be URL-encoded.
    std::shared_ptr<string> customPageHtml_ = nullptr;
    // The description of the waiting room.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether session renewal is disabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> disableSessionRenewalEnable_ = nullptr;
    // Indicates whether the waiting room is enabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> enable_ = nullptr;
    // The hostname and path.
    std::shared_ptr<vector<Models::ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath>> hostNameAndPath_ = nullptr;
    // Indicates whether JSON response is enabled. If you set this parameter to on, a JSON body is returned for requests to the waiting room with the header Accept: application/json. Valid values:
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
    // The name of the waiting room.
    std::shared_ptr<string> name_ = nullptr;
    // The maximum number of new users per minute.
    std::shared_ptr<string> newUsersPerMinute_ = nullptr;
    // Indicates whether all requests must be queued. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> queueAllEnable_ = nullptr;
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
    // The maximum duration for which a session remains valid after a user leaves the origin. Unit: minutes.
    std::shared_ptr<string> sessionDuration_ = nullptr;
    // The maximum number of active users.
    std::shared_ptr<string> totalActiveUsers_ = nullptr;
    // The unique ID of the waiting room.
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
