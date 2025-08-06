// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCERESPONSEBODY_HPP_
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
  class QueryScheduleConferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(phones, phones_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
      DARABONBA_PTR_TO_JSON(scheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(phones, phones_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
      DARABONBA_PTR_FROM_JSON(scheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    QueryScheduleConferenceResponseBody() = default ;
    QueryScheduleConferenceResponseBody(const QueryScheduleConferenceResponseBody &) = default ;
    QueryScheduleConferenceResponseBody(QueryScheduleConferenceResponseBody &&) = default ;
    QueryScheduleConferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceResponseBody() = default ;
    QueryScheduleConferenceResponseBody& operator=(const QueryScheduleConferenceResponseBody &) = default ;
    QueryScheduleConferenceResponseBody& operator=(QueryScheduleConferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->phones_ != nullptr && this->requestId_ != nullptr && this->roomCode_ != nullptr && this->scheduleConferenceId_ != nullptr && this->startTime_ != nullptr
        && this->title_ != nullptr && this->url_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryScheduleConferenceResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline const vector<string> & phones() const { DARABONBA_PTR_GET_CONST(phones_, vector<string>) };
    inline vector<string> phones() { DARABONBA_PTR_GET(phones_, vector<string>) };
    inline QueryScheduleConferenceResponseBody& setPhones(const vector<string> & phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };
    inline QueryScheduleConferenceResponseBody& setPhones(vector<string> && phones) { DARABONBA_PTR_SET_RVALUE(phones_, phones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScheduleConferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryScheduleConferenceResponseBody& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline QueryScheduleConferenceResponseBody& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryScheduleConferenceResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryScheduleConferenceResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryScheduleConferenceResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<string>> phones_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> roomCode_ = nullptr;
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
