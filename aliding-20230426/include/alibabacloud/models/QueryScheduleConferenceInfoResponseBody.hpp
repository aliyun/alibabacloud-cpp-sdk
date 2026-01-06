// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFORESPONSEBODY_HPP_
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
  class QueryScheduleConferenceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryScheduleConferenceInfoResponseBody() = default ;
    QueryScheduleConferenceInfoResponseBody(const QueryScheduleConferenceInfoResponseBody &) = default ;
    QueryScheduleConferenceInfoResponseBody(QueryScheduleConferenceInfoResponseBody &&) = default ;
    QueryScheduleConferenceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceInfoResponseBody() = default ;
    QueryScheduleConferenceInfoResponseBody& operator=(const QueryScheduleConferenceInfoResponseBody &) = default ;
    QueryScheduleConferenceInfoResponseBody& operator=(QueryScheduleConferenceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConferenceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConferenceList& obj) { 
        DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(RoomCode, roomCode_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ConferenceList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(RoomCode, roomCode_);
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
      virtual bool empty() const override { return this->conferenceId_ == nullptr
        && this->endTime_ == nullptr && this->roomCode_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline ConferenceList& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ConferenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // roomCode Field Functions 
      bool hasRoomCode() const { return this->roomCode_ != nullptr;};
      void deleteRoomCode() { this->roomCode_ = nullptr;};
      inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
      inline ConferenceList& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


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
      shared_ptr<string> conferenceId_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> roomCode_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->conferenceList_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // conferenceList Field Functions 
    bool hasConferenceList() const { return this->conferenceList_ != nullptr;};
    void deleteConferenceList() { this->conferenceList_ = nullptr;};
    inline const vector<QueryScheduleConferenceInfoResponseBody::ConferenceList> & getConferenceList() const { DARABONBA_PTR_GET_CONST(conferenceList_, vector<QueryScheduleConferenceInfoResponseBody::ConferenceList>) };
    inline vector<QueryScheduleConferenceInfoResponseBody::ConferenceList> getConferenceList() { DARABONBA_PTR_GET(conferenceList_, vector<QueryScheduleConferenceInfoResponseBody::ConferenceList>) };
    inline QueryScheduleConferenceInfoResponseBody& setConferenceList(const vector<QueryScheduleConferenceInfoResponseBody::ConferenceList> & conferenceList) { DARABONBA_PTR_SET_VALUE(conferenceList_, conferenceList) };
    inline QueryScheduleConferenceInfoResponseBody& setConferenceList(vector<QueryScheduleConferenceInfoResponseBody::ConferenceList> && conferenceList) { DARABONBA_PTR_SET_RVALUE(conferenceList_, conferenceList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryScheduleConferenceInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<QueryScheduleConferenceInfoResponseBody::ConferenceList>> conferenceList_ {};
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
