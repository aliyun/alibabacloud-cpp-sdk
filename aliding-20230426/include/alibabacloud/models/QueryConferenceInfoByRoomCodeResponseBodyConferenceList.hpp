// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODERESPONSEBODYCONFERENCELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODERESPONSEBODYCONFERENCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoByRoomCodeResponseBodyConferenceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoByRoomCodeResponseBodyConferenceList& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConfDuration, confDuration_);
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorNick, creatorNick_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExternalLinkUrl, externalLinkUrl_);
      DARABONBA_PTR_TO_JSON(RoomCode, roomCode_);
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoByRoomCodeResponseBodyConferenceList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConfDuration, confDuration_);
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorNick, creatorNick_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExternalLinkUrl, externalLinkUrl_);
      DARABONBA_PTR_FROM_JSON(RoomCode, roomCode_);
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList() = default ;
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList(const QueryConferenceInfoByRoomCodeResponseBodyConferenceList &) = default ;
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList(QueryConferenceInfoByRoomCodeResponseBodyConferenceList &&) = default ;
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoByRoomCodeResponseBodyConferenceList() = default ;
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList& operator=(const QueryConferenceInfoByRoomCodeResponseBodyConferenceList &) = default ;
    QueryConferenceInfoByRoomCodeResponseBodyConferenceList& operator=(QueryConferenceInfoByRoomCodeResponseBodyConferenceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->confDuration_ != nullptr && this->conferenceId_ != nullptr && this->creatorId_ != nullptr && this->creatorNick_ != nullptr && this->endTime_ != nullptr
        && this->externalLinkUrl_ != nullptr && this->roomCode_ != nullptr && this->scheduleConferenceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->title_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // confDuration Field Functions 
    bool hasConfDuration() const { return this->confDuration_ != nullptr;};
    void deleteConfDuration() { this->confDuration_ = nullptr;};
    inline int64_t confDuration() const { DARABONBA_PTR_GET_DEFAULT(confDuration_, 0L) };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setConfDuration(int64_t confDuration) { DARABONBA_PTR_SET_VALUE(confDuration_, confDuration) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNick Field Functions 
    bool hasCreatorNick() const { return this->creatorNick_ != nullptr;};
    void deleteCreatorNick() { this->creatorNick_ = nullptr;};
    inline string creatorNick() const { DARABONBA_PTR_GET_DEFAULT(creatorNick_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setCreatorNick(string creatorNick) { DARABONBA_PTR_SET_VALUE(creatorNick_, creatorNick) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // externalLinkUrl Field Functions 
    bool hasExternalLinkUrl() const { return this->externalLinkUrl_ != nullptr;};
    void deleteExternalLinkUrl() { this->externalLinkUrl_ = nullptr;};
    inline string externalLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(externalLinkUrl_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setExternalLinkUrl(string externalLinkUrl) { DARABONBA_PTR_SET_VALUE(externalLinkUrl_, externalLinkUrl) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBodyConferenceList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<int64_t> confDuration_ = nullptr;
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> creatorNick_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> externalLinkUrl_ = nullptr;
    std::shared_ptr<string> roomCode_ = nullptr;
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
