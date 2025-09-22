// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSIGNINRECORDPOPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSIGNINRECORDPOPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySignInRecordPopResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySignInRecordPopResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Rfid, rfid_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySignInRecordPopResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Rfid, rfid_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QuerySignInRecordPopResponseBodyData() = default ;
    QuerySignInRecordPopResponseBodyData(const QuerySignInRecordPopResponseBodyData &) = default ;
    QuerySignInRecordPopResponseBodyData(QuerySignInRecordPopResponseBodyData &&) = default ;
    QuerySignInRecordPopResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySignInRecordPopResponseBodyData() = default ;
    QuerySignInRecordPopResponseBodyData& operator=(const QuerySignInRecordPopResponseBodyData &) = default ;
    QuerySignInRecordPopResponseBodyData& operator=(QuerySignInRecordPopResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->rfid_ != nullptr && this->sessionId_ != nullptr && this->time_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline QuerySignInRecordPopResponseBodyData& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // rfid Field Functions 
    bool hasRfid() const { return this->rfid_ != nullptr;};
    void deleteRfid() { this->rfid_ = nullptr;};
    inline string rfid() const { DARABONBA_PTR_GET_DEFAULT(rfid_, "") };
    inline QuerySignInRecordPopResponseBodyData& setRfid(string rfid) { DARABONBA_PTR_SET_VALUE(rfid_, rfid) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline QuerySignInRecordPopResponseBodyData& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QuerySignInRecordPopResponseBodyData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> event_ = nullptr;
    // nfcid
    std::shared_ptr<string> rfid_ = nullptr;
    // sessionId
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
