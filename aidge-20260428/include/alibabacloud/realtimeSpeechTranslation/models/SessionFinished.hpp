// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONFINISHED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONFINISHED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class SessionFinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionFinished& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(usage_complete, usageComplete_);
    };
    friend void from_json(const Darabonba::Json& j, SessionFinished& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(usage_complete, usageComplete_);
    };
    SessionFinished() = default ;
    SessionFinished(const SessionFinished &) = default ;
    SessionFinished(SessionFinished &&) = default ;
    SessionFinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionFinished() = default ;
    SessionFinished& operator=(const SessionFinished &) = default ;
    SessionFinished& operator=(SessionFinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->causedBy_ == nullptr && this->reason_ == nullptr && this->usageComplete_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionFinished& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionFinished& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SessionFinished& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // causedBy Field Functions 
    bool hasCausedBy() const { return this->causedBy_ != nullptr;};
    void deleteCausedBy() { this->causedBy_ = nullptr;};
    inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
    inline SessionFinished& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SessionFinished& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // usageComplete Field Functions 
    bool hasUsageComplete() const { return this->usageComplete_ != nullptr;};
    void deleteUsageComplete() { this->usageComplete_ = nullptr;};
    inline bool getUsageComplete() const { DARABONBA_PTR_GET_DEFAULT(usageComplete_, false) };
    inline SessionFinished& setUsageComplete(bool usageComplete) { DARABONBA_PTR_SET_VALUE(usageComplete_, usageComplete) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> causedBy_ {};
    shared_ptr<string> reason_ {};
    // true 表示结束时用量已完成 MQ 接收与通知写出；超时、取消、异常或用量不完整时为 false，不代表最终扣费结果。兼容旧版本时可省略，网关不补默认值。
    shared_ptr<bool> usageComplete_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
