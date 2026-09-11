// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIDINGMINUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIDINGMINUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAliDingMinutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliDingMinutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliDingMinutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAliDingMinutesResponseBody() = default ;
    ListAliDingMinutesResponseBody(const ListAliDingMinutesResponseBody &) = default ;
    ListAliDingMinutesResponseBody(ListAliDingMinutesResponseBody &&) = default ;
    ListAliDingMinutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliDingMinutesResponseBody() = default ;
    ListAliDingMinutesResponseBody& operator=(const ListAliDingMinutesResponseBody &) = default ;
    ListAliDingMinutesResponseBody& operator=(ListAliDingMinutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(durationMs, durationMs_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(minutesId, minutesId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(durationMs, durationMs_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(minutesId, minutesId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->durationMs_ == nullptr && this->endTime_ == nullptr && this->minutesId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr; };
      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Items& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // durationMs Field Functions 
      bool hasDurationMs() const { return this->durationMs_ != nullptr;};
      void deleteDurationMs() { this->durationMs_ = nullptr;};
      inline int64_t getDurationMs() const { DARABONBA_PTR_GET_DEFAULT(durationMs_, 0L) };
      inline Items& setDurationMs(int64_t durationMs) { DARABONBA_PTR_SET_VALUE(durationMs_, durationMs) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // minutesId Field Functions 
      bool hasMinutesId() const { return this->minutesId_ != nullptr;};
      void deleteMinutesId() { this->minutesId_ = nullptr;};
      inline string getMinutesId() const { DARABONBA_PTR_GET_DEFAULT(minutesId_, "") };
      inline Items& setMinutesId(string minutesId) { DARABONBA_PTR_SET_VALUE(minutesId_, minutesId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The name of the creator.
      shared_ptr<string> creatorName_ {};
      // The execution duration of the asynchronous task.
      shared_ptr<int64_t> durationMs_ {};
      // The end timestamp, in milliseconds.
      shared_ptr<string> endTime_ {};
      // The DingTalk meeting minutes ID.
      shared_ptr<string> minutesId_ {};
      // The start timestamp, in milliseconds.
      shared_ptr<string> startTime_ {};
      // The task status. Running is returned upon submission.
      shared_ptr<string> status_ {};
      // The title of the scheduled meeting.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAliDingMinutesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListAliDingMinutesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAliDingMinutesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAliDingMinutesResponseBody::Items>) };
    inline vector<ListAliDingMinutesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAliDingMinutesResponseBody::Items>) };
    inline ListAliDingMinutesResponseBody& setItems(const vector<ListAliDingMinutesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAliDingMinutesResponseBody& setItems(vector<ListAliDingMinutesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAliDingMinutesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
    inline ListAliDingMinutesResponseBody& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliDingMinutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // Indicates whether more pages are available.
    shared_ptr<bool> hasMore_ {};
    // The location clusters.
    shared_ptr<vector<ListAliDingMinutesResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The token for the next retrieval.
    shared_ptr<string> nextCursor_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
