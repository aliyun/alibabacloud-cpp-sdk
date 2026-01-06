// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(confInfo, confInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(confInfo, confInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryConferenceInfoResponseBody() = default ;
    QueryConferenceInfoResponseBody(const QueryConferenceInfoResponseBody &) = default ;
    QueryConferenceInfoResponseBody(QueryConferenceInfoResponseBody &&) = default ;
    QueryConferenceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoResponseBody() = default ;
    QueryConferenceInfoResponseBody& operator=(const QueryConferenceInfoResponseBody &) = default ;
    QueryConferenceInfoResponseBody& operator=(QueryConferenceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveNum, activeNum_);
        DARABONBA_PTR_TO_JSON(AttendNum, attendNum_);
        DARABONBA_PTR_TO_JSON(ConfDuration, confDuration_);
        DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorNick, creatorNick_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExternalLinkUrl, externalLinkUrl_);
        DARABONBA_PTR_TO_JSON(InvitedNum, invitedNum_);
        DARABONBA_PTR_TO_JSON(RoomCode, roomCode_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ConfInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveNum, activeNum_);
        DARABONBA_PTR_FROM_JSON(AttendNum, attendNum_);
        DARABONBA_PTR_FROM_JSON(ConfDuration, confDuration_);
        DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorNick, creatorNick_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExternalLinkUrl, externalLinkUrl_);
        DARABONBA_PTR_FROM_JSON(InvitedNum, invitedNum_);
        DARABONBA_PTR_FROM_JSON(RoomCode, roomCode_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      ConfInfo() = default ;
      ConfInfo(const ConfInfo &) = default ;
      ConfInfo(ConfInfo &&) = default ;
      ConfInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfInfo() = default ;
      ConfInfo& operator=(const ConfInfo &) = default ;
      ConfInfo& operator=(ConfInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeNum_ == nullptr
        && this->attendNum_ == nullptr && this->confDuration_ == nullptr && this->conferenceId_ == nullptr && this->creatorId_ == nullptr && this->creatorNick_ == nullptr
        && this->endTime_ == nullptr && this->externalLinkUrl_ == nullptr && this->invitedNum_ == nullptr && this->roomCode_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr; };
      // activeNum Field Functions 
      bool hasActiveNum() const { return this->activeNum_ != nullptr;};
      void deleteActiveNum() { this->activeNum_ = nullptr;};
      inline int32_t getActiveNum() const { DARABONBA_PTR_GET_DEFAULT(activeNum_, 0) };
      inline ConfInfo& setActiveNum(int32_t activeNum) { DARABONBA_PTR_SET_VALUE(activeNum_, activeNum) };


      // attendNum Field Functions 
      bool hasAttendNum() const { return this->attendNum_ != nullptr;};
      void deleteAttendNum() { this->attendNum_ = nullptr;};
      inline int32_t getAttendNum() const { DARABONBA_PTR_GET_DEFAULT(attendNum_, 0) };
      inline ConfInfo& setAttendNum(int32_t attendNum) { DARABONBA_PTR_SET_VALUE(attendNum_, attendNum) };


      // confDuration Field Functions 
      bool hasConfDuration() const { return this->confDuration_ != nullptr;};
      void deleteConfDuration() { this->confDuration_ = nullptr;};
      inline int64_t getConfDuration() const { DARABONBA_PTR_GET_DEFAULT(confDuration_, 0L) };
      inline ConfInfo& setConfDuration(int64_t confDuration) { DARABONBA_PTR_SET_VALUE(confDuration_, confDuration) };


      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline ConfInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline ConfInfo& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorNick Field Functions 
      bool hasCreatorNick() const { return this->creatorNick_ != nullptr;};
      void deleteCreatorNick() { this->creatorNick_ = nullptr;};
      inline string getCreatorNick() const { DARABONBA_PTR_GET_DEFAULT(creatorNick_, "") };
      inline ConfInfo& setCreatorNick(string creatorNick) { DARABONBA_PTR_SET_VALUE(creatorNick_, creatorNick) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ConfInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // externalLinkUrl Field Functions 
      bool hasExternalLinkUrl() const { return this->externalLinkUrl_ != nullptr;};
      void deleteExternalLinkUrl() { this->externalLinkUrl_ = nullptr;};
      inline string getExternalLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(externalLinkUrl_, "") };
      inline ConfInfo& setExternalLinkUrl(string externalLinkUrl) { DARABONBA_PTR_SET_VALUE(externalLinkUrl_, externalLinkUrl) };


      // invitedNum Field Functions 
      bool hasInvitedNum() const { return this->invitedNum_ != nullptr;};
      void deleteInvitedNum() { this->invitedNum_ = nullptr;};
      inline int32_t getInvitedNum() const { DARABONBA_PTR_GET_DEFAULT(invitedNum_, 0) };
      inline ConfInfo& setInvitedNum(int32_t invitedNum) { DARABONBA_PTR_SET_VALUE(invitedNum_, invitedNum) };


      // roomCode Field Functions 
      bool hasRoomCode() const { return this->roomCode_ != nullptr;};
      void deleteRoomCode() { this->roomCode_ = nullptr;};
      inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
      inline ConfInfo& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ConfInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ConfInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ConfInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<int32_t> activeNum_ {};
      shared_ptr<int32_t> attendNum_ {};
      shared_ptr<int64_t> confDuration_ {};
      shared_ptr<string> conferenceId_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> creatorNick_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> externalLinkUrl_ {};
      shared_ptr<int32_t> invitedNum_ {};
      shared_ptr<string> roomCode_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->confInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // confInfo Field Functions 
    bool hasConfInfo() const { return this->confInfo_ != nullptr;};
    void deleteConfInfo() { this->confInfo_ = nullptr;};
    inline const QueryConferenceInfoResponseBody::ConfInfo & getConfInfo() const { DARABONBA_PTR_GET_CONST(confInfo_, QueryConferenceInfoResponseBody::ConfInfo) };
    inline QueryConferenceInfoResponseBody::ConfInfo getConfInfo() { DARABONBA_PTR_GET(confInfo_, QueryConferenceInfoResponseBody::ConfInfo) };
    inline QueryConferenceInfoResponseBody& setConfInfo(const QueryConferenceInfoResponseBody::ConfInfo & confInfo) { DARABONBA_PTR_SET_VALUE(confInfo_, confInfo) };
    inline QueryConferenceInfoResponseBody& setConfInfo(QueryConferenceInfoResponseBody::ConfInfo && confInfo) { DARABONBA_PTR_SET_RVALUE(confInfo_, confInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConferenceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryConferenceInfoResponseBody::ConfInfo> confInfo_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
