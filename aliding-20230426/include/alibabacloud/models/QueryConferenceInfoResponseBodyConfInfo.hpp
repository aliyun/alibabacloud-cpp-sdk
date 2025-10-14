// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODYCONFINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODYCONFINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoResponseBodyConfInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoResponseBodyConfInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoResponseBodyConfInfo& obj) { 
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
    QueryConferenceInfoResponseBodyConfInfo() = default ;
    QueryConferenceInfoResponseBodyConfInfo(const QueryConferenceInfoResponseBodyConfInfo &) = default ;
    QueryConferenceInfoResponseBodyConfInfo(QueryConferenceInfoResponseBodyConfInfo &&) = default ;
    QueryConferenceInfoResponseBodyConfInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoResponseBodyConfInfo() = default ;
    QueryConferenceInfoResponseBodyConfInfo& operator=(const QueryConferenceInfoResponseBodyConfInfo &) = default ;
    QueryConferenceInfoResponseBodyConfInfo& operator=(QueryConferenceInfoResponseBodyConfInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeNum_ == nullptr
        && return this->attendNum_ == nullptr && return this->confDuration_ == nullptr && return this->conferenceId_ == nullptr && return this->creatorId_ == nullptr && return this->creatorNick_ == nullptr
        && return this->endTime_ == nullptr && return this->externalLinkUrl_ == nullptr && return this->invitedNum_ == nullptr && return this->roomCode_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->title_ == nullptr; };
    // activeNum Field Functions 
    bool hasActiveNum() const { return this->activeNum_ != nullptr;};
    void deleteActiveNum() { this->activeNum_ = nullptr;};
    inline int32_t activeNum() const { DARABONBA_PTR_GET_DEFAULT(activeNum_, 0) };
    inline QueryConferenceInfoResponseBodyConfInfo& setActiveNum(int32_t activeNum) { DARABONBA_PTR_SET_VALUE(activeNum_, activeNum) };


    // attendNum Field Functions 
    bool hasAttendNum() const { return this->attendNum_ != nullptr;};
    void deleteAttendNum() { this->attendNum_ = nullptr;};
    inline int32_t attendNum() const { DARABONBA_PTR_GET_DEFAULT(attendNum_, 0) };
    inline QueryConferenceInfoResponseBodyConfInfo& setAttendNum(int32_t attendNum) { DARABONBA_PTR_SET_VALUE(attendNum_, attendNum) };


    // confDuration Field Functions 
    bool hasConfDuration() const { return this->confDuration_ != nullptr;};
    void deleteConfDuration() { this->confDuration_ = nullptr;};
    inline int64_t confDuration() const { DARABONBA_PTR_GET_DEFAULT(confDuration_, 0L) };
    inline QueryConferenceInfoResponseBodyConfInfo& setConfDuration(int64_t confDuration) { DARABONBA_PTR_SET_VALUE(confDuration_, confDuration) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNick Field Functions 
    bool hasCreatorNick() const { return this->creatorNick_ != nullptr;};
    void deleteCreatorNick() { this->creatorNick_ = nullptr;};
    inline string creatorNick() const { DARABONBA_PTR_GET_DEFAULT(creatorNick_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setCreatorNick(string creatorNick) { DARABONBA_PTR_SET_VALUE(creatorNick_, creatorNick) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryConferenceInfoResponseBodyConfInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // externalLinkUrl Field Functions 
    bool hasExternalLinkUrl() const { return this->externalLinkUrl_ != nullptr;};
    void deleteExternalLinkUrl() { this->externalLinkUrl_ = nullptr;};
    inline string externalLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(externalLinkUrl_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setExternalLinkUrl(string externalLinkUrl) { DARABONBA_PTR_SET_VALUE(externalLinkUrl_, externalLinkUrl) };


    // invitedNum Field Functions 
    bool hasInvitedNum() const { return this->invitedNum_ != nullptr;};
    void deleteInvitedNum() { this->invitedNum_ = nullptr;};
    inline int32_t invitedNum() const { DARABONBA_PTR_GET_DEFAULT(invitedNum_, 0) };
    inline QueryConferenceInfoResponseBodyConfInfo& setInvitedNum(int32_t invitedNum) { DARABONBA_PTR_SET_VALUE(invitedNum_, invitedNum) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryConferenceInfoResponseBodyConfInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryConferenceInfoResponseBodyConfInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryConferenceInfoResponseBodyConfInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int32_t> activeNum_ = nullptr;
    std::shared_ptr<int32_t> attendNum_ = nullptr;
    std::shared_ptr<int64_t> confDuration_ = nullptr;
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> creatorNick_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> externalLinkUrl_ = nullptr;
    std::shared_ptr<int32_t> invitedNum_ = nullptr;
    std::shared_ptr<string> roomCode_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
