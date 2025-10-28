// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCTASKEVENT_HPP_
#define ALIBABACLOUD_MODELS_ASYNCTASKEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class AsyncTaskEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncTaskEvent& obj) { 
      DARABONBA_PTR_TO_JSON(eventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncTaskEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(eventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    AsyncTaskEvent() = default ;
    AsyncTaskEvent(const AsyncTaskEvent &) = default ;
    AsyncTaskEvent(AsyncTaskEvent &&) = default ;
    AsyncTaskEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncTaskEvent() = default ;
    AsyncTaskEvent& operator=(const AsyncTaskEvent &) = default ;
    AsyncTaskEvent& operator=(AsyncTaskEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventDetail_ == nullptr
        && return this->eventId_ == nullptr && return this->status_ == nullptr && return this->timestamp_ == nullptr; };
    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline string eventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
    inline AsyncTaskEvent& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline AsyncTaskEvent& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AsyncTaskEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AsyncTaskEvent& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> eventDetail_ = nullptr;
    std::shared_ptr<int64_t> eventId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
