// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoByRoomCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoByRoomCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_TO_JSON(dingtalkRequestId, dingtalkRequestId_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoByRoomCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_FROM_JSON(dingtalkRequestId, dingtalkRequestId_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryConferenceInfoByRoomCodeResponseBody() = default ;
    QueryConferenceInfoByRoomCodeResponseBody(const QueryConferenceInfoByRoomCodeResponseBody &) = default ;
    QueryConferenceInfoByRoomCodeResponseBody(QueryConferenceInfoByRoomCodeResponseBody &&) = default ;
    QueryConferenceInfoByRoomCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoByRoomCodeResponseBody() = default ;
    QueryConferenceInfoByRoomCodeResponseBody& operator=(const QueryConferenceInfoByRoomCodeResponseBody &) = default ;
    QueryConferenceInfoByRoomCodeResponseBody& operator=(QueryConferenceInfoByRoomCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConferenceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConferenceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ConferenceList& obj) { 
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
      ConferenceList() = default ;
      ConferenceList(const ConferenceList &) = default ;
      ConferenceList(ConferenceList &&) = default ;
      ConferenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConferenceList() = default ;
      ConferenceList& operator=(const ConferenceList &) = default ;
      ConferenceList& operator=(ConferenceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizType_ == nullptr
        && this->confDuration_ == nullptr && this->conferenceId_ == nullptr && this->creatorId_ == nullptr && this->creatorNick_ == nullptr && this->endTime_ == nullptr
        && this->externalLinkUrl_ == nullptr && this->roomCode_ == nullptr && this->scheduleConferenceId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr; };
      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline ConferenceList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // confDuration Field Functions 
      bool hasConfDuration() const { return this->confDuration_ != nullptr;};
      void deleteConfDuration() { this->confDuration_ = nullptr;};
      inline int64_t getConfDuration() const { DARABONBA_PTR_GET_DEFAULT(confDuration_, 0L) };
      inline ConferenceList& setConfDuration(int64_t confDuration) { DARABONBA_PTR_SET_VALUE(confDuration_, confDuration) };


      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline ConferenceList& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline ConferenceList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorNick Field Functions 
      bool hasCreatorNick() const { return this->creatorNick_ != nullptr;};
      void deleteCreatorNick() { this->creatorNick_ = nullptr;};
      inline string getCreatorNick() const { DARABONBA_PTR_GET_DEFAULT(creatorNick_, "") };
      inline ConferenceList& setCreatorNick(string creatorNick) { DARABONBA_PTR_SET_VALUE(creatorNick_, creatorNick) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ConferenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // externalLinkUrl Field Functions 
      bool hasExternalLinkUrl() const { return this->externalLinkUrl_ != nullptr;};
      void deleteExternalLinkUrl() { this->externalLinkUrl_ = nullptr;};
      inline string getExternalLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(externalLinkUrl_, "") };
      inline ConferenceList& setExternalLinkUrl(string externalLinkUrl) { DARABONBA_PTR_SET_VALUE(externalLinkUrl_, externalLinkUrl) };


      // roomCode Field Functions 
      bool hasRoomCode() const { return this->roomCode_ != nullptr;};
      void deleteRoomCode() { this->roomCode_ = nullptr;};
      inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
      inline ConferenceList& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


      // scheduleConferenceId Field Functions 
      bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
      void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
      inline string getScheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
      inline ConferenceList& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ConferenceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ConferenceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ConferenceList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> bizType_ {};
      shared_ptr<int64_t> confDuration_ {};
      shared_ptr<string> conferenceId_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> creatorNick_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> externalLinkUrl_ {};
      shared_ptr<string> roomCode_ {};
      shared_ptr<string> scheduleConferenceId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->conferenceList_ == nullptr
        && this->dingtalkRequestId_ == nullptr && this->hasMore_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr
        && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // conferenceList Field Functions 
    bool hasConferenceList() const { return this->conferenceList_ != nullptr;};
    void deleteConferenceList() { this->conferenceList_ = nullptr;};
    inline const vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList> & getConferenceList() const { DARABONBA_PTR_GET_CONST(conferenceList_, vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList>) };
    inline vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList> getConferenceList() { DARABONBA_PTR_GET(conferenceList_, vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList>) };
    inline QueryConferenceInfoByRoomCodeResponseBody& setConferenceList(const vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList> & conferenceList) { DARABONBA_PTR_SET_VALUE(conferenceList_, conferenceList) };
    inline QueryConferenceInfoByRoomCodeResponseBody& setConferenceList(vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList> && conferenceList) { DARABONBA_PTR_SET_RVALUE(conferenceList_, conferenceList) };


    // dingtalkRequestId Field Functions 
    bool hasDingtalkRequestId() const { return this->dingtalkRequestId_ != nullptr;};
    void deleteDingtalkRequestId() { this->dingtalkRequestId_ = nullptr;};
    inline string getDingtalkRequestId() const { DARABONBA_PTR_GET_DEFAULT(dingtalkRequestId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBody& setDingtalkRequestId(string dingtalkRequestId) { DARABONBA_PTR_SET_VALUE(dingtalkRequestId_, dingtalkRequestId) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryConferenceInfoByRoomCodeResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryConferenceInfoByRoomCodeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryConferenceInfoByRoomCodeResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<QueryConferenceInfoByRoomCodeResponseBody::ConferenceList>> conferenceList_ {};
    shared_ptr<string> dingtalkRequestId_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
