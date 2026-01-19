// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRooms, waitingRooms_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRooms, waitingRooms_);
    };
    ListWaitingRoomsResponseBody() = default ;
    ListWaitingRoomsResponseBody(const ListWaitingRoomsResponseBody &) = default ;
    ListWaitingRoomsResponseBody(ListWaitingRoomsResponseBody &&) = default ;
    ListWaitingRoomsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomsResponseBody() = default ;
    ListWaitingRoomsResponseBody& operator=(const ListWaitingRoomsResponseBody &) = default ;
    ListWaitingRoomsResponseBody& operator=(ListWaitingRoomsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WaitingRooms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WaitingRooms& obj) { 
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
      friend void from_json(const Darabonba::Json& j, WaitingRooms& obj) { 
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
      WaitingRooms() = default ;
      WaitingRooms(const WaitingRooms &) = default ;
      WaitingRooms(WaitingRooms &&) = default ;
      WaitingRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WaitingRooms() = default ;
      WaitingRooms& operator=(const WaitingRooms &) = default ;
      WaitingRooms& operator=(WaitingRooms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HostNameAndPath : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostNameAndPath& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Subdomain, subdomain_);
        };
        friend void from_json(const Darabonba::Json& j, HostNameAndPath& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Subdomain, subdomain_);
        };
        HostNameAndPath() = default ;
        HostNameAndPath(const HostNameAndPath &) = default ;
        HostNameAndPath(HostNameAndPath &&) = default ;
        HostNameAndPath(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostNameAndPath() = default ;
        HostNameAndPath& operator=(const HostNameAndPath &) = default ;
        HostNameAndPath& operator=(HostNameAndPath &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->path_ == nullptr && this->subdomain_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline HostNameAndPath& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline HostNameAndPath& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // subdomain Field Functions 
        bool hasSubdomain() const { return this->subdomain_ != nullptr;};
        void deleteSubdomain() { this->subdomain_ = nullptr;};
        inline string getSubdomain() const { DARABONBA_PTR_GET_DEFAULT(subdomain_, "") };
        inline HostNameAndPath& setSubdomain(string subdomain) { DARABONBA_PTR_SET_VALUE(subdomain_, subdomain) };


      protected:
        // The domain name.
        shared_ptr<string> domain_ {};
        // The path.
        shared_ptr<string> path_ {};
        // The subdomain.
        shared_ptr<string> subdomain_ {};
      };

      virtual bool empty() const override { return this->cookieName_ == nullptr
        && this->customPageHtml_ == nullptr && this->description_ == nullptr && this->disableSessionRenewalEnable_ == nullptr && this->enable_ == nullptr && this->hostNameAndPath_ == nullptr
        && this->jsonResponseEnable_ == nullptr && this->language_ == nullptr && this->name_ == nullptr && this->newUsersPerMinute_ == nullptr && this->queueAllEnable_ == nullptr
        && this->queuingMethod_ == nullptr && this->queuingStatusCode_ == nullptr && this->sessionDuration_ == nullptr && this->totalActiveUsers_ == nullptr && this->waitingRoomId_ == nullptr
        && this->waitingRoomType_ == nullptr; };
      // cookieName Field Functions 
      bool hasCookieName() const { return this->cookieName_ != nullptr;};
      void deleteCookieName() { this->cookieName_ = nullptr;};
      inline string getCookieName() const { DARABONBA_PTR_GET_DEFAULT(cookieName_, "") };
      inline WaitingRooms& setCookieName(string cookieName) { DARABONBA_PTR_SET_VALUE(cookieName_, cookieName) };


      // customPageHtml Field Functions 
      bool hasCustomPageHtml() const { return this->customPageHtml_ != nullptr;};
      void deleteCustomPageHtml() { this->customPageHtml_ = nullptr;};
      inline string getCustomPageHtml() const { DARABONBA_PTR_GET_DEFAULT(customPageHtml_, "") };
      inline WaitingRooms& setCustomPageHtml(string customPageHtml) { DARABONBA_PTR_SET_VALUE(customPageHtml_, customPageHtml) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WaitingRooms& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disableSessionRenewalEnable Field Functions 
      bool hasDisableSessionRenewalEnable() const { return this->disableSessionRenewalEnable_ != nullptr;};
      void deleteDisableSessionRenewalEnable() { this->disableSessionRenewalEnable_ = nullptr;};
      inline string getDisableSessionRenewalEnable() const { DARABONBA_PTR_GET_DEFAULT(disableSessionRenewalEnable_, "") };
      inline WaitingRooms& setDisableSessionRenewalEnable(string disableSessionRenewalEnable) { DARABONBA_PTR_SET_VALUE(disableSessionRenewalEnable_, disableSessionRenewalEnable) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
      inline WaitingRooms& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // hostNameAndPath Field Functions 
      bool hasHostNameAndPath() const { return this->hostNameAndPath_ != nullptr;};
      void deleteHostNameAndPath() { this->hostNameAndPath_ = nullptr;};
      inline const vector<WaitingRooms::HostNameAndPath> & getHostNameAndPath() const { DARABONBA_PTR_GET_CONST(hostNameAndPath_, vector<WaitingRooms::HostNameAndPath>) };
      inline vector<WaitingRooms::HostNameAndPath> getHostNameAndPath() { DARABONBA_PTR_GET(hostNameAndPath_, vector<WaitingRooms::HostNameAndPath>) };
      inline WaitingRooms& setHostNameAndPath(const vector<WaitingRooms::HostNameAndPath> & hostNameAndPath) { DARABONBA_PTR_SET_VALUE(hostNameAndPath_, hostNameAndPath) };
      inline WaitingRooms& setHostNameAndPath(vector<WaitingRooms::HostNameAndPath> && hostNameAndPath) { DARABONBA_PTR_SET_RVALUE(hostNameAndPath_, hostNameAndPath) };


      // jsonResponseEnable Field Functions 
      bool hasJsonResponseEnable() const { return this->jsonResponseEnable_ != nullptr;};
      void deleteJsonResponseEnable() { this->jsonResponseEnable_ = nullptr;};
      inline string getJsonResponseEnable() const { DARABONBA_PTR_GET_DEFAULT(jsonResponseEnable_, "") };
      inline WaitingRooms& setJsonResponseEnable(string jsonResponseEnable) { DARABONBA_PTR_SET_VALUE(jsonResponseEnable_, jsonResponseEnable) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline WaitingRooms& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WaitingRooms& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newUsersPerMinute Field Functions 
      bool hasNewUsersPerMinute() const { return this->newUsersPerMinute_ != nullptr;};
      void deleteNewUsersPerMinute() { this->newUsersPerMinute_ = nullptr;};
      inline string getNewUsersPerMinute() const { DARABONBA_PTR_GET_DEFAULT(newUsersPerMinute_, "") };
      inline WaitingRooms& setNewUsersPerMinute(string newUsersPerMinute) { DARABONBA_PTR_SET_VALUE(newUsersPerMinute_, newUsersPerMinute) };


      // queueAllEnable Field Functions 
      bool hasQueueAllEnable() const { return this->queueAllEnable_ != nullptr;};
      void deleteQueueAllEnable() { this->queueAllEnable_ = nullptr;};
      inline string getQueueAllEnable() const { DARABONBA_PTR_GET_DEFAULT(queueAllEnable_, "") };
      inline WaitingRooms& setQueueAllEnable(string queueAllEnable) { DARABONBA_PTR_SET_VALUE(queueAllEnable_, queueAllEnable) };


      // queuingMethod Field Functions 
      bool hasQueuingMethod() const { return this->queuingMethod_ != nullptr;};
      void deleteQueuingMethod() { this->queuingMethod_ = nullptr;};
      inline string getQueuingMethod() const { DARABONBA_PTR_GET_DEFAULT(queuingMethod_, "") };
      inline WaitingRooms& setQueuingMethod(string queuingMethod) { DARABONBA_PTR_SET_VALUE(queuingMethod_, queuingMethod) };


      // queuingStatusCode Field Functions 
      bool hasQueuingStatusCode() const { return this->queuingStatusCode_ != nullptr;};
      void deleteQueuingStatusCode() { this->queuingStatusCode_ = nullptr;};
      inline string getQueuingStatusCode() const { DARABONBA_PTR_GET_DEFAULT(queuingStatusCode_, "") };
      inline WaitingRooms& setQueuingStatusCode(string queuingStatusCode) { DARABONBA_PTR_SET_VALUE(queuingStatusCode_, queuingStatusCode) };


      // sessionDuration Field Functions 
      bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
      void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
      inline string getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, "") };
      inline WaitingRooms& setSessionDuration(string sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


      // totalActiveUsers Field Functions 
      bool hasTotalActiveUsers() const { return this->totalActiveUsers_ != nullptr;};
      void deleteTotalActiveUsers() { this->totalActiveUsers_ = nullptr;};
      inline string getTotalActiveUsers() const { DARABONBA_PTR_GET_DEFAULT(totalActiveUsers_, "") };
      inline WaitingRooms& setTotalActiveUsers(string totalActiveUsers) { DARABONBA_PTR_SET_VALUE(totalActiveUsers_, totalActiveUsers) };


      // waitingRoomId Field Functions 
      bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
      void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
      inline string getWaitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
      inline WaitingRooms& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


      // waitingRoomType Field Functions 
      bool hasWaitingRoomType() const { return this->waitingRoomType_ != nullptr;};
      void deleteWaitingRoomType() { this->waitingRoomType_ = nullptr;};
      inline string getWaitingRoomType() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomType_, "") };
      inline WaitingRooms& setWaitingRoomType(string waitingRoomType) { DARABONBA_PTR_SET_VALUE(waitingRoomType_, waitingRoomType) };


    protected:
      // The name of the custom cookie.
      shared_ptr<string> cookieName_ {};
      // The HTML content or identifier of the custom queuing page. This parameter is valid only when `WaitingRoomType` is set to `custom`. The content must be URL-encoded.
      shared_ptr<string> customPageHtml_ {};
      // The description of the waiting room.
      shared_ptr<string> description_ {};
      // Indicates whether session renewal is disabled. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> disableSessionRenewalEnable_ {};
      // Indicates whether the waiting room is enabled. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> enable_ {};
      // The hostname and path.
      shared_ptr<vector<WaitingRooms::HostNameAndPath>> hostNameAndPath_ {};
      // Indicates whether JSON response is enabled. If you set this parameter to on, a JSON body is returned for requests to the waiting room with the header Accept: application/json. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> jsonResponseEnable_ {};
      // The language of the waiting room page. This parameter is returned when the waiting room type is set to default. Valid values:
      // 
      // *   enus: English.
      // *   zhcn: Simplified Chinese.
      // *   zhhk: Traditional Chinese.
      shared_ptr<string> language_ {};
      // The name of the waiting room.
      shared_ptr<string> name_ {};
      // The maximum number of new users per minute.
      shared_ptr<string> newUsersPerMinute_ {};
      // Indicates whether all requests must be queued. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> queueAllEnable_ {};
      // The queuing method. Valid values:
      // 
      // *   random: Users gain access to the origin randomly, regardless of the arrival time.
      // *   fifo: Users gain access to the origin in order of arrival.
      // *   passthrough: Users pass through the waiting room and go straight to the origin.
      // *   reject-all: Users are blocked from reaching the origin.
      shared_ptr<string> queuingMethod_ {};
      // The HTTP status code to return while a user is in the queue. Valid values:
      // 
      // *   200
      // *   202
      // *   429
      shared_ptr<string> queuingStatusCode_ {};
      // The maximum duration for which a session remains valid after a user leaves the origin. Unit: minutes.
      shared_ptr<string> sessionDuration_ {};
      // The maximum number of active users.
      shared_ptr<string> totalActiveUsers_ {};
      // The unique ID of the waiting room.
      shared_ptr<string> waitingRoomId_ {};
      // The type of the waiting room. Valid values:
      // 
      // *   default
      // *   custom
      shared_ptr<string> waitingRoomType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->waitingRooms_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingRoomsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRooms Field Functions 
    bool hasWaitingRooms() const { return this->waitingRooms_ != nullptr;};
    void deleteWaitingRooms() { this->waitingRooms_ = nullptr;};
    inline const vector<ListWaitingRoomsResponseBody::WaitingRooms> & getWaitingRooms() const { DARABONBA_PTR_GET_CONST(waitingRooms_, vector<ListWaitingRoomsResponseBody::WaitingRooms>) };
    inline vector<ListWaitingRoomsResponseBody::WaitingRooms> getWaitingRooms() { DARABONBA_PTR_GET(waitingRooms_, vector<ListWaitingRoomsResponseBody::WaitingRooms>) };
    inline ListWaitingRoomsResponseBody& setWaitingRooms(const vector<ListWaitingRoomsResponseBody::WaitingRooms> & waitingRooms) { DARABONBA_PTR_SET_VALUE(waitingRooms_, waitingRooms) };
    inline ListWaitingRoomsResponseBody& setWaitingRooms(vector<ListWaitingRoomsResponseBody::WaitingRooms> && waitingRooms) { DARABONBA_PTR_SET_RVALUE(waitingRooms_, waitingRooms) };


  protected:
    // The request ID, which is used to trace a call.
    shared_ptr<string> requestId_ {};
    // The waiting rooms.
    shared_ptr<vector<ListWaitingRoomsResponseBody::WaitingRooms>> waitingRooms_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
